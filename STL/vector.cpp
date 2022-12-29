#include<iostream>
#include<vector>
using namespace std;
int main()
{  //initialization
    vector<int> v;

    // If we know the size of vector then vector is initiallize as follows
    vector<int> a(5,1);//5 is size of element

     cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    
    vector<int> last(a);//copy one vector to another


    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"Size "<<v.capacity()<<endl;
    //Entering value in vector with function push_back
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<"Capacity "<<v.capacity()<<endl;

   cout<<"Element at 2nd Index "<<v.at(2)<<endl;

    cout<<"Empty or not "<<v.empty()<<endl;

    // use to find first and last element
    cout<<"First Element "<<v.front()<<endl;
    cout<<"Last Element "<<v.back()<<endl;

   

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
     //Removing value in vector with function pop_back
    v.pop_back();

    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Capacity "<<v.capacity()<<endl;

    //if we clear the vector the size will be zero but capcity will remain same

    cout<<" before clear size"<<v.size()<<endl;
    //clear function use to clear the size of vector
    v.clear();
    cout<<" After clear size"<<v.size()<<endl;




}
