#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[3][3],int target,int row,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }

        }
    
    }
    return 0;
}

//To print row wise sum
void printSum(int arr[3][3],int row,int col){
    cout<<" Printing Sum ->"<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
                
        }
        cout<<sum<<" ";  

    }
    cout<<endl;
}

//Largest row
int LargestRow(int arr[3][3],int row,int col){
    int maxi=INT_MIN;
    int indexnum=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
                
        }
       if(sum>maxi){

        maxi=sum;
        indexnum=row;
       }

    }
    cout<<"Maximum is "<<maxi<<endl;
    return indexnum;
    

}


int main(){
    int arr[3][3];
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];

        }
    }

    cout<<"Output is"<<endl;
    //print
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col];

        }
        cout<<endl;
    }

    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,3)){
        cout<<"Element found";
    }

    printSum(arr,3,3);

    cout<<"Max row index "<<LargestRow(arr ,3,3)<<endl; 
   return 0; 

}

// OUTPUT:
// 1 2 3 4 5 6 7 8 9
// Output is
// 123      
// 456      
// 789      
// Enter the element to search
// 4
// Element found Printing Sum ->
// 6 15 24
// Maximum is 24
// Max row at 2


