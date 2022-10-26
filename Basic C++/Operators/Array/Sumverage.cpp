#include<iostream>
using namespace std;
int main(){
   double number[]={4,5,2,1,7,8};
   double sum=0;
   double count=0;
   double average;
   for(const double &n:number){
       sum+=n;
       count++;
   }
   cout<<sum<<endl;
    average=sum/count;

    cout<<"The average is: "<<average<<endl;

    return 0;
}