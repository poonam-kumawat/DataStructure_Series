#include<bits/stdc++.h>
using namespace std;
void reverse(vector<char>& s,int n){
    int st=0;
    int e=s.size()-1;
    while(st<e){
        swap(s[st++],s[e--]);
    }
}
int main(){


}