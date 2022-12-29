//Element store in set are unique

#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(5);
    s.insert(2);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    s.erase(s.begin());

   for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<s.count(5)<<endl;

}
