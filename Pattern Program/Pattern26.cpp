//Printing this pattern 
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
   
    while(i<=n){
        
        //print first triangle
        int j=1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        //print spaces
        int space=i-1;
        while(space){
            cout<<"*"<<" ";
            space--;
        }
        //print spaces2
        int space2=i-1;
        while(space2){
            cout<<"*"<<" ";
            space2--;
        }
        //print second triangle
        int start=n-i+1;
        while(start){
        cout<<start<<" ";
        start--;
        }
        cout<<endl;
        i++;
    }
}