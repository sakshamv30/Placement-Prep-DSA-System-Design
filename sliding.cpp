#include<iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];

    for(int i=0;i<n;i++) cin>>ar[i];
    int first=0;
    int maxS=0, currS=0;
    for(int i=0;i<n;i++){
        currS+=ar[i];
        if(i>=k-1){
            maxS=max(maxS,currS);
            currS-=ar[first];
            first++;
        }
    }
    cout<<maxS<<endl;


    return 0;
}