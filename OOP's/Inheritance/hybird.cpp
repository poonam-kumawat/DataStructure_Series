#include<iostream>
using namespace std;

class A
{
    public:
        void display()
        {
            cout<<"Class A"<<endl;
        }
};  // end of class A

class B: public A
{
    public:
        void display()
        {
            cout<<"Class B"<<endl;
        }
};  // end of class B

class C: public A
{
    public:
        void display()
        {
            cout<<"Class C"<<endl;
        }
};  // end of class C

class D: public B, public C
{
    public:
        void display()
        {
            cout<<"Class D"<<endl;
        }
};  // end of class D



int main(){
    cout<<"Hybrid Inheritance"<<endl;
    D d;
    d.display();
    return 0;
}
