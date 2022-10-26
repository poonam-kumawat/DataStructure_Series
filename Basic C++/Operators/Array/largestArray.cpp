#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,4,2,5};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest number is: "<<max<<endl;
    return 0;
}