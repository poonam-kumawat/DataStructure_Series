// Online C++ compiler to run C++ program online
#include <iostream>
#include<math.h>
using namespace std;

int main() {
    // Write C++ code here
   int n;
   cin>>n;
  int rev;
  while(n>0){
      int lastdigit=n%10;
      rev=rev*10+lastdigit;
      n=n/10;
  }
  cout<<rev;

      return 0;
}


// Output
// 1234
// 4321
