#include<bits/stdc++.h>
using namespace std;
int charLength(char name[]){
    int c=0;
    for(int i=0;name[i]!='\0';i++){
        c++;
    }
    return c;
}

int main(){
    char name[20];
    cout<<"Enter name"<<endl;;
    cin>>name;
    cout<<name<<endl;

    cout<<"Length "<<charLength(name)<<endl;
    return 0;
    
} 



