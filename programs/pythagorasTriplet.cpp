// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool check(int x,int y,int z){
    int a,b,c;
    a=max(x,max(y,z));
    if(a==x){
        b=y;c=z;
    }else if(a==y){
        b=x;c=z;
    }else{
        b=z;c=x;
    }
    if(a*a==b*b+c*c){
        return true;
    }else{
        return false;
    }

};

int main() {
    // Write C++ code here
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythogoras triplet";
    }else{
        cout<<"not Pythagoras triplet";
    }

    return 0;
}
