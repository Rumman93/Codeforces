#include<bits/stdc++.h>
using namespace std;
void noob_coder()
{
    int day,total_spent,i,j,k,l,low=0,high=0;
    cin>>day>>total_spent;
    vector<pair<int,int>> ans;
    for(i=0;i<day;i++)
    {
        int a,b;
        cin>>a>>b;
        ans.push_back({a,b});
        low+=a;
        high+=b;
    }
    if(total_spent<low || total_spent>high)
    {
        cout<<"NO";
        return;
    }
    else
    {
        int need=total_spent-low;
        for(i=0;i<day;i++)
        {
            if(need==0) break;
            int result=min(ans[i].second-ans[i].first,need);
            need-=result;
            ans[i].first+=result;
        }
        cout<<"YES"<<endl;
        for(i=0;i<day;i++)cout<<ans[i].first<<" ";
    }
}
int main()
{
    noob_coder();
}

