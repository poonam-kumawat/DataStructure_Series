//OutPut
// 2 5 4 9 6 7 0 1 

// 33 11 76 9 2 


//adding header files
#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
}
//swapping function
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        swap(arr[i],arr[i+1]);
    }
}
int main(){
    //declaring array for even size
    int even[8]={5,2,9,4,7,6,1,0};
    //declaring array for odd size
    int odd[5]={11,33,9,76,43};




    swapAlternate(even ,8);
    //printing array for even size
    printArray(even, 8);
    cout<<endl;
    swapAlternate(odd ,5);
    //printing array for odd size
    printArray(odd, 5);
    return 0;

}