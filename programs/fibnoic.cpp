// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void fib(int n){
    int t1=0,t2=1,nexterm;
    for(int i=0;i<=n;i++){
        cout<<t1<<endl;
        nexterm=t1+t2;
        t1=t2;
        t2=nexterm;
    }
    return;
    
}

int main() {
    // Write C++ code here
   int n;
   cin>>n;
  fib(n);
  

      return 0;
}
