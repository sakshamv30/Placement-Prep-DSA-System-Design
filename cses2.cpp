#include<iostream>

using namespace std;

int main(){
    long int n;
    cin>>n;
    long int ar[n-1];
    long int sum2= n*(n+1)/2;
    long int sum=0;
    for(int i=0;i<n-1;i++){
    cin>>ar[i];
    sum+=ar[i];
    }
    cout<<sum2-sum<<endl;





    return 0;
}