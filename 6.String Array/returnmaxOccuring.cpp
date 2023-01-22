#include<bits/stdc++.h>
using namespace std;
char getMaxOcuuring(string s){
    int arr[26]={0};

    //create an array of count 
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int number=0;
        //lowercase
        if(ch<='a' && ch<= 'z'){
            int number=ch -'a';

        }
        //uppercase
        else{
            number=ch-'A';
        }
        arr[number]++;
    }
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
        
    }
    char fianlans='a'+ans;
    return fianlans;
}

int main(){
    string s;
    cin>>s;
    cout<<getMaxOcuuring(s)<<endl;


}