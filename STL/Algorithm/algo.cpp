#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a=3;
    int b=5;
    cout<<"max "<<max(a,b)<<endl;;

    swap(a,b);
    cout<<"a -> "<<a<<endl;

    //reversing a string

    string ab="abcd";
    reverse(ab.begin(),ab.end());
    cout<<ab<<endl;

    //Rotate 
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //sort
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }

}