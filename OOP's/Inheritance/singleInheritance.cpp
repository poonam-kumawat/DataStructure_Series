#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Animal Speaking"<<endl;
    }
};

class Dog:public Animal{
    
};
int main(){
    Dog d;
    d.speak();

}