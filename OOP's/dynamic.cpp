#include<iostream>
using namespace std;

class Hero{
    //properties
    //private declaration can access within the class.
    private:
    int health;
    //public can access within the class or outside the class.
    public:
    char level;
//getter is use to fetch the data
    int getHealth(){
        return health;
    }
    //setter is used to set the data
    void setHealth(int h){
        health=h;
    }
};
int main(){
    //static allocation
    Hero a;
    a.level='b';
    cout<<" level : "<<a.level<<endl;
    cout<<" health : "<<a.getHealth()<<endl;

    //dynamically
    Hero *h=new Hero;
    cout<<" level : "<<(*h).getHealth()<<endl;
    //alternate  way to call
    h->setHealth(20);
    cout<<" level : "<<h->getHealth()<<endl;




    return 0;
}
