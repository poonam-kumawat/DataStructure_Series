#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n){
    int max=INT_MIN;
    //maxi=max(maxi,arr[i])
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int getMin(int arr[],int n){
    
    int min=INT_MAX;
    //mini=max(mini,arr[i])
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }

    cout<<"Maxixmum value is "<<getMax(arr,size)<<endl;

    cout<<"Minimum value is "<<getMin(arr,size)<<endl;
    return 0;
}