//Printing this pattern 
//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 
#include<iostream>
using namespace std;
int main(){
    int i=1, n;
    cin>>n;
   
   
    while(i<=n){
        //print spaces
        int space=n-i;
        while(space){
            cout<<"  ";
            space--;
        }
        //print first triangle
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        //print second triangle
        int start=i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout<<endl;
        i++;
    }
}