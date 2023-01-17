#include<iostream>
using namespace std;

void moveZeros(vector<int> &nums){
    int i=0;
    for(int j=0; j<nums.size();j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
}
int main(){

}

//input=[1,0,2,3,0,0]
//output=[1,2,3,0,0,0]