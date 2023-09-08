// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
   }

int main() {
    // Write C++ code here
   int n;
   cin>>n;
  int ans=fact(n);
  cout<<ans<<endl;
      return 0;
}
