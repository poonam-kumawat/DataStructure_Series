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
int curr=0;
   for(int i=0;i<n;i++){
       curr=0;
       for(int j=i;j<n;j++){
           curr+=arr[j];
           cout<<curr<<endl;
       }
   }
    
   

    return 0;
}
