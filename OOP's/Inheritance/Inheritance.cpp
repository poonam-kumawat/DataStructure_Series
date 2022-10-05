#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight=w;
    }
    

};
class Male:public Human{
    public:
    string color;
    void sleep(){
        cout<<"male Sleeping"<<endl;
    }
};
int main(){
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
    return 0;  

}
