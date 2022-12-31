#include<iostream>
using namespace std;
int insertionSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j>=0;j--)
        {
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }
            else{//stop
            break;

            }

        }
    }
}

int main(){

}