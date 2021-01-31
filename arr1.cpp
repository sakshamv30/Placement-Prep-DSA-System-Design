#include<iostream>
using namespace std;

int main()
{


    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int maxa=ar[0];
    for(int i=1;i<n;i++)
    {

       
        maxa=min(ar[i],maxa);
    }
    cout<<maxa<<endl;


    return 0;

}