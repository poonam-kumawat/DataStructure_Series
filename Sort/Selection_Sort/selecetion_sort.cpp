#include<iostream>
using namespace std;

void selectionSort(vector<int>& arr, int n)
{
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
            
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
    
}

//space Complexity=>O(n)
//Time Complexity=>O(n^2)


//use case=> works on small size of  array
//best case if array is sorted