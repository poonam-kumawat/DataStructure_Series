//Printing this pattern 
// 1 1 1 1 
//   2 2 2
//     3 3
//       4
 
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
    
    while(i<=n){
        int space=i-1;
        while(space){
            cout<<"  ";
            space--;
        }
        
        int j=1;
        while(j<=n-i+1){
            cout<<i<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
}