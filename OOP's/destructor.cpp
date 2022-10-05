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

    //Creating Constructor
    Hero(){
        cout<<"Constructor is created"<<endl;
    }

    //parameterized constructor
    Hero(int health,char level){
        cout<<"this-> "<<this<<endl;
        this->health=health;
        this->level=level;
    }

    //copy Constructor
    Hero(Hero& temp){
        cout<<"Copy Constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }

//getter is use to fetch the data
    int getHealth(){
        return health;
    }
    //setter is used to set the data
    void setHealth(int h){
        health=h;
    }

    void print(){
        cout<<"level : "<<this->level<<endl;
    }

    //destructor uses tilda sign(~)
    ~Hero(){
        cout<<"Destructor created"<<endl;

    }
};
int main(){
    //object created statically
    Hero a;

    //Dynamically
    Hero *b=new Hero();
    //In dynamically destructor is called manually 
    delete b;
   return 0;
}
