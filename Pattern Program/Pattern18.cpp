//Printing this pattern with different Logic
// A B C D 
// B C D E 
// C D E F 
// D E F G   
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
    
    while(i<=n){
        int j=1;
        char ch ='A'+i-1;
        while(j<=n){
            
            cout<<ch<<" ";
           ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}