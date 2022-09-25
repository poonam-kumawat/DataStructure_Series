//Printing this pattern
// ABCD
// EFGH
// IJKL
// MNOP
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
    char ch ='A';
    
    while(i<=n){
        int j=1;
        while(j<=n){
           
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
}