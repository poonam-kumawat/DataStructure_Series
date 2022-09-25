//Printing this pattern
// A 
// B C
// C D E
// D E F G  
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
    
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch ='A'+i+j-2;
            cout<<ch<<" ";
           ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}