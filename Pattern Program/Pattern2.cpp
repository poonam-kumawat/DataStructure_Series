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
        while (j<=n)
        {
            //printing the pattern
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    
    
}