//Mark XIX
#include<bits/stdc++.h>

#define big(x) greater<x>()
#define ll long long int
#define M 1000000007
#define mp make_pair
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define deb(x) cerr<<#x<<" "<<x<<"\n";
#define IOS() ios_base::sync_with_stdio(0);cin.tie(0);

int temp;

using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n],key=1,kep=-1;
  for(int i=0;i<n;++i) 
  {
    cin>>a[i];
    if(a[i]<0 and a[i]%2) key=a[i];
    else if(a[i]>0 and a[i]%2) kep=a[i];
  }
  ll sum=0;
  for(int i=0;i<n;++i) 
    if(a[i]<0 and a[i]%2) key=max(key,a[i]);
    else if(a[i]>0) 
    {
      sum+=a[i];
      if(a[i]%2) kep=min(kep,a[i]);
    }
  if(sum%2==0)
  {
    if(key!=1 and kep!=-1)  sum=max(sum+key,sum-kep);
    else if(key!=1) sum=sum+key;
    else sum=sum-kep;
  }
  cout<<sum;

    
  


}

int main()
{
  //Skipped in presense of online judge.
  #ifndef ONLINE_JUDGE
  freopen("/home/zeddie/Documents/input.txt","r",stdin);
  freopen("/home/zeddie/Documents/output.txt","w",stdout);
  freopen("/home/zeddie/Documents/error.txt","w",stderr);
  #endif

  IOS()
  ll t=1;
  //cin>>t;
  while(t--)
  {
    solve();
    cout<<"\n";
    deb('\n')
  }
}