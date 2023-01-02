#include<iostream>
using namespace std;
int insertionSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{//stop
            break;

            }


        }
        arr[j+1]=temp;
    }
}

int main(){

}