#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem,temp;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        cout<<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not a Palindrome Number"<<endl;
    }
    return 0;
}