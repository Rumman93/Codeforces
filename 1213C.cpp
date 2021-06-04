#include <bits/stdc++.h>
#define ll long long int
#define Mbappe_Speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
  Mbappe_Speed();

ll t;
cin>>t;
while(t--)
{

ll n,m,x,y,i,j,index,flag=0,mini=1e9,maxi=-1e9,cnt=0,result,odd=0,even=0,sum=0,temp,zero=0,one=0;
cin>>n>>m;
if(m>n)cout<<0<<endl;
else
{
    set<ll> chicken;
    vector<ll> hope;
    temp=n/m;
    for(i=1;;i++)
    {
        odd=(i*m)%10;
        if(chicken.count(odd)) break;
        sum+=odd;
        hope.push_back(odd);
        chicken.insert(odd);
    }
    one=chicken.size();


    even=sum*(temp/one);

    zero=temp-((temp/one)*one);

    /*cout<<"temp "<<temp<<endl;
    cout<<"chicken "<<one<<endl;
    cout<<"initial "<<sum<<endl;
    cout<<"arek step "<<even<<endl;
    cout<<"iterate korbo "<<zero<<endl;*/

    for(auto it:hope)
    {
        if(zero==0)break;
        even+=it;
        zero--;


    }
   // cout<<"sum ";
    cout<<even<<endl;

}

}
    return 0;
}
