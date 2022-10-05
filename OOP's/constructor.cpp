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
    //object created statically
    Hero a;


    //dynamically
    Hero *h=new Hero;
  
   



    return 0;
}
