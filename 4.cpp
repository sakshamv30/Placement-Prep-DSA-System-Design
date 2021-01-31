#include<bits/stdc++.h>
using namespace std;
#define ll long int
#define rep(i,n) for(int i=0;i<n;i++)
#define repe(i,n) for(int i=0;i<=n;i++)
int main()
{
    int n;
    cin>>n;

    vector<int> v(n,0);
    rep(i,n) cin>>v[i];

    int count=0;
    rep(i,n-1){
        if(v[i]<=v[i+1]) continue;
        else { count=count+(abs(v[i+1]-v[i])); v[i+1]=v[i];}

    }
    cout<<count<<endl;

    return 0;
}