#include<iostream>
using namespace std;

int bubleSort(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        //for round 1 to n-1
        bool swapped=false;

        //process element till n-i element
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }

}
int main(){
    
}

//use cas=> ith largest element in placed at right postion


//Optimizing bubble sort
//best case=> already sorted array

//worst case=> reverse sorted

//Time coplexity=>O(n^2)
//Space complexity=>O(1)