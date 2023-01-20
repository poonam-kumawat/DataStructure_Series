#include<bits/stdc++.h>
using namespace std;


void reverse(char  name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
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
    int len=charLength(name);

    cout<<"Length "<<len<<endl;
    reverse(name,len);
    cout<<" reverse name "<<name<<endl;
    return 0;
    
} 



