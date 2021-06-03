#include <bits/stdc++.h>
#define ll long long int
#define Mbappe_Speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
  Mbappe_Speed();

ll n,m,x,y,i,j,index,flag=0,mini=1e9,maxi=-1e9,cnt=0,result,odd=0,even=0,sum=0,temp,one=0,zero=0;
cin>>n>>m;
map<ll,ll> mp;
for(i=0;i<n;i++)
{
    cin>>x>>y;
    if(!mp[x])
    {
        mp[x]=y;
    }
    else
    {
        mp[x]+=y;
    }
    mini=min(mini,x);
    maxi=max(maxi,x);
}
for(i=mini;i<=maxi+1;i++)
{
    if(!mp[i]) mp[i]=0;
}
mp[mini-1]=0;

for(i=mini;i<=maxi+1;i++)
{
    ll limitm=m;
    zero=min(mp[i-1],limitm);

    limitm=m-zero;


    one=min(mp[i],limitm);

    mp[i]-=one;
    sum+=(zero+one);

}

cout<<sum<<endl;

    return 0;
}
