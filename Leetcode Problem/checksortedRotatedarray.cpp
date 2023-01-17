#include<bits/stdc++.h>
using namespace std;
 bool check(vector<int>& nums){
    int count=0;
    int n=nums.size();
    for(int i=0;i<n;i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[n-1]>nums[0]){
        count++;
    }
    return count<=1;
 }
int main(){

}