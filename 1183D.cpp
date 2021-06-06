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
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
   vector<ll> ans;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;

    }
     for(auto it:mp) ans.push_back(it.second);
     sort(ans.begin(),ans.end());
     zero=ans[ans.size()-1]+1;

     for(i=ans.size()-1;i>=0;i--)
     {
         zero--;
         zero=min(zero,ans[i]);
         if(zero==0)break;
         sum+=zero;

     }
    cout<<sum<<endl;


  }

    return 0;
}

