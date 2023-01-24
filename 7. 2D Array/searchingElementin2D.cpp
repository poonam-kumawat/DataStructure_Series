#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[3][4],int target,int row,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }

        }
    
    }
    return 0;
}


int main(){
    int arr[3][4];
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];

        }
    }


    //print
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col];

        }
        cout<<endl;
    }

    cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)){
        cout<<"Element found";
    }
   return 0; 

}


// Output:
// 1 2 3 4 5 6 7 8 9 1 2 3
// 1234
// 5678
// 9123
// Enter the element to search
// 3
// Element found