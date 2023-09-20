#include <iostream>
using namespace std;


int main() {
    // Write C++ code here
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin>>k;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                cout<<i<<j;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
   
    return 0;
}
