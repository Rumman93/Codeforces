#include <bits/stdc++.h>
#define ll long long int
#define Mbappe_Speed() ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int main()
{
  Mbappe_Speed();

ll n,m,x,y,i,j,index,flag=0,mini=1e9,maxi=-1e9,cnt=0,result,odd=0,even=0,sum=0,temp,one=0,zero=0;
cin>>m;


for(i=0;i<m;i++)
{
    cin>>x;
    mini=min(mini,x);
}
cin>>n;
ll a[n+5];
for(i=0;i<n;i++)
{
    cin>>a[i];
}

sort(a,a+n,greater<int>());
 i=0;
 while(i<n)
 {
     odd=i;
     while(((i-odd)+1)<=mini && i!=n)
     {
         sum+=a[i];
         i++;
     }
     i+=2;
 }
cout<<sum;



    return 0;
}

