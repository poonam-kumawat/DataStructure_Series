#include<iostream>
using namespace std;
int main(){
    int sal, fifty, twenty, five, one;
    cout<<"Enter the Salary";
    cin>>sal;
    fifty = sal/50;
    sal = sal%50;
    if(sal == 0){
        cout<<fifty<<" ";   
    }
    twenty = sal/20;
    sal = sal%20;
    if(sal == 0){
        cout<<fifty;
        cout<<twenty;
            
    }
    five = sal/5;
    sal = sal%5;
    if(sal == 0){
        cout<<fifty<<" ";
        cout<<twenty<<" ";
        cout<<five<<" ";
            
    }
    one = sal/1;
    cout<<fifty<<" ";
    cout<<twenty<< " ";
    cout<<five<<" ";
    return 0;
}