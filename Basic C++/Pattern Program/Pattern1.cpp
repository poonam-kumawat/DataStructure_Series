//Adding the header file
#include<iostream>
using namespace std;
int main()
{
    //Initialzing the variables
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        //while loop for columns
        while (j<=i)
        {
            //printing the pattern
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
    
}