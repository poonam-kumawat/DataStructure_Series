#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
/* to pop the element use this method
    // d.pop_back();//you can use pop back also
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<" ";
    // }cout<<endl; */
    cout<<"Element at 2nd Index "<<d.at(1)<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    // use to find first and last element
    cout<<"First Element "<<d.front()<<endl;
    cout<<"Last Element "<<d.back()<<endl;

    // To delete element in deque we use "erase"
    cout<<"Before Erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<" After Erase  "<<d.size()<<endl;



}
