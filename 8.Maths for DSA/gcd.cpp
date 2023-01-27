//gcd(a,b)=gcd(a-b,b) or gcd(a%b,b)

//lcm(a,b)*gcd(a,b)=a*b

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    int g=gcd(a,b);
    cout<<g;
}