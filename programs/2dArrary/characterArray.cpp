#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n;
    cin>>n;
    char a[n+1];
    cin>>a;
    bool check=1;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            check=0;
            break;
        }
    }
    if(check==true)
    cout<<"palindrome"<<endl;
    else
    cout<<"not palindrome"<<endl;

   
    return 0;
}
