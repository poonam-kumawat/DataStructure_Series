#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    //printing
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int third[15];
    int forth[5];
    printArray(third ,15);

    printArray(forth ,5);
    int forthsize=sizeof(forth)/sizeof(int);
    cout<<"Size of Forth is  "<<forthsize;

    return 0;

    

    
}