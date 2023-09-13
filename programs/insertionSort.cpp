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
   for(int i=1;i<n;i++){
       int curr=arr[i];
       int j=i-1;
       while(arr[j]>curr && j>=0){
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=curr;
   }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;

    }

    return 0;
}
