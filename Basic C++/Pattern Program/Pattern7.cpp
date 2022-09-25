//Printing this pattern
// 1   
// 23  
// 345 
// 4567
#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        int val=i;
        while(j<=i)
        {
           cout<<val;
          
            val=val+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}