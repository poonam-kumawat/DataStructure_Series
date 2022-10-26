#include<iostream>
using namespace std;
int main()
{
    int a,op,n100,n50,n20,n10;
    cout<<"Enter value of a"<<endl;
    cin>>a;  
   

    switch(a>=100){
        case 1:n100=a/100;
        a -=n100*100;
        break;
        
    }
     switch(a>=50){
        case 1:n50=a/50;
        a -=n50*50;
        break;
        
    }
    switch(a>=20){
        case 1:n20=a/20;
        a -=n20*20;
        break;
        
    }
    switch(a>=10){
        case 1:n10=a/10;
        a -=n10*10;
        break;
        
    }
    cout<<n100<<endl;
    cout<<n50<<endl;
    cout<<n20<<endl;
    cout<<n10<<endl;
}