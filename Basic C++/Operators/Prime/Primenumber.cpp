#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to check prime or not"<<endl;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a prime number"<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime number"<<endl;
    }
    return 0;
}

   
