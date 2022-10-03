#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter the amount: ";
    cin  >> a;
// fifty = sal/50;
//     sal = sal%50;

    cout << "\nNo. of 100  peso bills:  "  << (a%=500)/100;
    cout << "\nNo. of 50   peso bills:  "  << (a%=100)/50;
    cout << "\nNo. of 20   peso bills:  "  << (a%=50)/20;
    cout << "\nNo. of 10   peso bills:  "  << (a%=20)/10;
    cout << "\nNo. of 5   peso bills:  "  << (a%=10)/5;
    cout << "\n\nThe rest of the amount: " << a%10;
}