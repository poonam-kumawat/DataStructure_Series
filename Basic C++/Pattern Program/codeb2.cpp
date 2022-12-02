// 3 3 3 3 3 
// 3 2 2 2 3
// 3 2 1 2 3
// 3 2 2 2 3
// 3 3 3 3 3

#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    int i=1,n;
    cin>>n;
    int num=n+(n-1);
    for(i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
         if(i==1 || i==num-i || j==1 || j==num-j|| i>=num|| j>=num){
          cout<<n<<" ";
         }else if(i==2 || i==num-j || j==2 || j==num-i|| i>=num-1|| j>=num-1){
          cout<<n-1<<" ";
         }
         else{
          cout<<n-2<<" ";
         }

    }
    cout<<endl;
}
}
