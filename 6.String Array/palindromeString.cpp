#include<bits/stdc++.h>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(toLowercase(a[s])!=toLowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

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

    cout<<" palindrome name "<<checkPalindrome(name,len)<<endl;
    cout<<" caharacter is "<<toLowercase('b')<<endl;
    cout<<" caharacter is "<<toLowercase('C')<<endl;
    
    return 0;
    
} 



