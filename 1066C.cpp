#include <bits/stdc++.h>
#define ll long long int
#define Mbappe_Speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
  Mbappe_Speed();
char ch;
ll n,m,x,y,i,j,index,flag=0,mini=1e9,maxi=-1e9,cnt=0,result,odd=0,even=0,sum=0,temp,zero=0,one=0;
cin>>n;
map<ll,ll> mpl;
map<ll,ll> mpr;
ll lsum=0,rsum=0;
while(n--)
{
    cin>>ch>>x;
    if(ch=='R')
    {
        rsum++;
        mpr[x]=rsum;
    }
    else if(ch=='L')
    {
       lsum++;
       mpl[x]=lsum;
    }
    else
    {
        if(mpl[x]) cout<<min(lsum-mpl[x],mpl[x]-1+rsum);
        else cout<<min(rsum-mpr[x],mpr[x]-1+lsum);
        cout<<endl;
    }

}


    return 0;
}
