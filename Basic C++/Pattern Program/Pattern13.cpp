//Printing this pattern
// A     
// B B   
// C C C 
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
    
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch ='A'+i-1;
            cout<<ch<<" ";
           
            j++;
        }
        cout<<endl;
        i++;
    }
}