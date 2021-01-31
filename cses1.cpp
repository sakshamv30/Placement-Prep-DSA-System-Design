#include<iostream>

using namespace std;
int main()
{
    long int n;
    cin>>n;
    while(n>1 || n==1)
    {   if(n!=1){
        cout<<n<<" ";
        if(n%2==0) n=n/2;
        else 
        if(n%2==1) n=3*n+1;
    }
    else {cout<<"1"; break;}
    }
    cout<<endl;




    return 0;
}