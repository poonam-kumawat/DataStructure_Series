#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        //It will go to right search
        else if(key>arr[mid]){
            s=mid+1;
        }
        //It will go to left search
        else if (key<arr[mid]){
            e=mid-1;

        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int lastOcc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        //It will go to right search
        else if(key>arr[mid]){
            s=mid+1;
        }
        //It will go to left search
        else if (key<arr[mid]){
            e=mid-1;

        }
        mid=s+(e-s)/2;
    }
    return ans;

}
int main(){

    int even[5]={1,2,3,4,5};

    cout<<" First occ "<<firstOcc(even,5,3)<<endl;
    cout<<" last occ "<<lastOcc(even,5,4)<<endl;

}