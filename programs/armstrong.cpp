#include <iostream>
#include<math.h>
using namespace std;

int main() {
    // Write C++ code here
   int n;
   cin>>n;
  int sum=0;
  int originalnum=n;
  
  while(n>0){
      int lastdigit=n%10;
      sum+=pow(lastdigit,3);
      n=n/10;
  }
  cout<<sum<<endl;
  if(sum==originalnum){
      cout<<"Number is armstrong"<<endl;
  }
  else{
      cout<<"Number is not an armstrong"<<endl;
  }


// OutPut:
// 153
// 153
// Number is armstrong
