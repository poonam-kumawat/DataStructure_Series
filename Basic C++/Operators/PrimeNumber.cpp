//Printing this Output
//0 1 1 2 3 5 8 13 21 34 55 89 
#include<iostream>
using namespace std;
int main(){
    int  n;
    cin>>n;
    for(int i=2;i<n;i++){
        //Not a Prime Number
        if(n%i==0){
            cout<<"Not a Prime Number"<<endl;
            break;

        }
        
    }
}