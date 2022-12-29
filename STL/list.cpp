#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;//inititalization of list
    list<int> n(5,100);//inititalization of list
    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;

    cout<<" Size of list "<<l.size();


    
}
