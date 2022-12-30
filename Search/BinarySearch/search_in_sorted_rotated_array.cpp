#include<iostream.h>
using namespace std;
int getPivot(vector<int>arr,int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[i]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int binarySearch(vector<int>arr,int s,int e,int key){
    int start=s,end=e;
    int mid=s+(end-s)/2;
    while(start<end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>=arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-s)/2;
    }
    return -1;
}

int findPosition(vector<int> & arr,int n,int k)
{
    
}

int main(){

}