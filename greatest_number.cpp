#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define se second
using namespace std;

int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt","r",stdin);
  //   freopen("output.txt","w",stdout);
  // #endif

    ll n,i,j;
    n=10;
    ll a[]={1,2,3,100,5,6,7,8,9,10};
    // Missing base value
    ll mx = INT_MIN;
    for(i=1;i<=10;i++)
    {
        mx=max(mx,a[i]);
    }
    cout<<mx;
}
