//Printing this pattern 
//       1  
//     2 3  
//   4 5 6  
// 7 8 9 10 
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
    int count=1;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }
        
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}