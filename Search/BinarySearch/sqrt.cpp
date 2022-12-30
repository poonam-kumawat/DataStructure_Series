#include<iostream>
using namespace std;

int binarySearch(int n)
{
    int s=0;e=n;
    long long int mid=s+(e-s)/2;
    long long int ans=-1;
    while(s<=e){
        if(mid*mid==n){
        return mid;
    }
        
    if(mid*mid<n){
        
        ans=mid;
        s=mid+1;

    }else{
        e=mid-1;
    }
    mid=s+(e-s)/2;
    
    }
    retrun ans;
}
int getSqrt(int x){
    return binarySearch(x);
}
int main(){

}