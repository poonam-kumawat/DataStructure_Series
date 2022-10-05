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

//creation of object 
//Hero is an object  static alloction
    Hero h1;
    cout<<"size : "<<sizeof(h1)<<endl;
  
    h1.level='A';
    //use setter
    h1.setHealth(20);
    //use getter to get the value
    cout<<"health : "<<h1.getHealth()<<endl;
    
    cout<<"level : "<<h1.level<<endl;
    return 0;
}
