#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int s=0;
        int e=n-1;
        int mid=s+(e-s)/2;
        while(s<=e){
            if(arr[mid]==k){
                return mid;
            }
            if(arr[mid]<k){
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
            mid=s+(e-s)/2;
            
        }
        return -1;
        
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.binarysearch(arr,n,k)<<endl;
    }
}