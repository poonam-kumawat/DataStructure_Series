#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("hello");
    q.push("hii");
    q.push("hey");
    cout<<"Top Element " <<q.front()<<endl;
    q.pop();
    cout<<"Top Element  "<<q.front()<<endl;

    cout<<"size of stack "<<q.size()<<endl;

    cout<<"Empty or not "<<q.empty()<<endl;

}

