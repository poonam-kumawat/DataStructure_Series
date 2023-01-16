#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int arr3[])
{
    int i=0,j=0;
    while(i<n && j<n){
        if(arr1[i]<arr2[j])
        {
            arr3[k]=arr[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    //copying first array k element 
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    //copying second array k element 
    while(j<n){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

void print(int ans[], int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}


int main(){

    int arr1[5]={1,2,3,4,7};
    int arr2[3]={5,6,8};

    int arr3[8]={0};

    merge(arr1, 5, arr2, 3, arr3);
    print(arr3,8);




    return 0;


}