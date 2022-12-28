#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    //int mid=(start+end)/2;
    //to Avoid big interger number we use this formula.
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        //go to right side in binary search
        if(key>arr[mid]){
            start=mid+1;
        }
        //It will go to left side in search to search the element.
        else{
            end=mid-1;
        }
        //mid=(start+end)/2;
        mid=start+(end-start)/2;
    }
    return -1;

}
int main(){
    // binary search follow monotonic function value will be either in increasing or decreasing order.

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,15};

    int evenindex=binarySearch(even ,6,12);
    cout<<"Index of 12 is "<<evenindex<<endl;

    int oddindex=binarySearch(odd ,5,8);
    cout<<"Index of 8 is "<<oddindex<<endl;
}