#include<bits/stdc++.h>
using namespace std;
#define ll long int
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repe(i,a,n) for(int i=a;i<=n;i++)
#define quickio   {ios_base::sync_with_stdio(false);    cin.tie(NULL);}
int main()
{
    quickio;
    int n;
    cin>>n;
    vector<int> A(n);
    rep(i,0,n) cin>>A[i];

    int st=0, ans=0;
    rep(i,0,n) { 
        if(i&&A[i-1]>=A[i])st=0;
        st++;
        ans=max(ans,st);
    }
    cout<<ans<<endl;




    return 0;
}