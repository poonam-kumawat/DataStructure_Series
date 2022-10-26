#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,2,4,5};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate element is: "<<arr[i]<<endl;

            }
           
        }
       
    }
  
    
    return 0;
}