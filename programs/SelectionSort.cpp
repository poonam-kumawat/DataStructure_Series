// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
            int temp;
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            }
            

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}
