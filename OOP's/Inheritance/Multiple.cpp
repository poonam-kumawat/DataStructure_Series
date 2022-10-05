#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking "<<endl;
    }
};
class Human{
    public:
    string color;
    public:
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

//multiple Inheritance
class Hybird:public Animal,public Human{

};
int main(){
    Hybird h;
    h.speak();
    h.bark();
    return 0;

}