#include<bits/stdc++.h>
using namespace std;
#define ll long int
#define rep(i,n) for(int i=0;i<n;i++)
#define repe(i,n) for(int i=0;i<=n;i++)
int main()
{
    int t;
    cin>>t;
    int a,b,k;
    cin>>a>>b>>k;
    int ar[k];
    rep(i,n) cin>>ar[i];

    int br[k];
    rep(i,n) cin>>br[i];

    map<int, int> ma;
    map<int, int> mb;
    for (int i = 0; i < k; i++) {
      ma[A[i]] += 1;
      mb[B[i]] += 1;
    }
    long long ans = 0;
    for (int i = 0; i < k; i++) {
      ans += (k - 1) - (ma[A[i]] - 1) - (mb[B[i]] - 1);
    }
    assert(ans % 2 == 0);
    cout << ans / 2 << '\n';
  }
  return 0;
}
