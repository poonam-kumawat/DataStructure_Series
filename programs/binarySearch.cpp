// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        int s=0;
        int e=n;
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}



int main() {
    // Write C++ code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);

    return 0;
}
