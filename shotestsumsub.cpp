#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int s;
    cin>>s;
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
    int currS=0;
    int start=0;
    int minI=INT_MAX;
    for(int i=0;i<n;i++){
        currS+=ar[i];
        
        while(currS>=s)
        {
            minI=min(minI, i-start+1);
            currS-=ar[start];
            start++;

        }
    }
    int ans=minI==INT_MAX ? 0 :minI;
    
    cout<<ans<<endl;
    



    return 0;
}