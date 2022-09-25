//Printing this pattern 
//       1 
//     2 2
//   3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
    
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }
        
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
}