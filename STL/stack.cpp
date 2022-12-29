#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("hello");
    s.push("hii");
    s.push("hey");
    cout<<"Top Element " <<s.top()<<endl;
    s.pop();
    cout<<"Top Element  "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;

}