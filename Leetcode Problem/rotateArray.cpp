#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int> & nums,int k){
    vector<int> temp(nums.size());
    for(int i=0;i<nums.size();i++){
        temp[(i+k)%nums.size()]=nums[i];
    }
    //copy temp into num vector
    nums=temp;

}


int main(){

}

//input=[1,2,3,4]
//output=[3,4,1,2]