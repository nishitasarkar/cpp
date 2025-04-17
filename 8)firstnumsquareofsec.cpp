#include<iostream>
using namespace std;
int main()
{
    cout << "Enter first  number " << endl;
    int a;
    cin >> a;
    cout << "Enter second number " << endl;
    int b;
    cin >> b;
    if (a==b*b)
    {
        cout << "The first number is the square of the second " << endl;
    }
    else if (a!=b*b)
    {
        cout << "The first number is not square of the second " << endl;
    }
    else
    {
        cout << "Invalid input ";
    }



}
