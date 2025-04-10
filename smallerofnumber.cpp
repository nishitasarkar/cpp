#include<iostream>
using namespace std;
int main()
{
    cout << "Enter first number " << endl;
    int num1;
    cin >> num1;
    cout << "Enter second number " << endl;
    int num2;
    cin >> num2;
    if (num1<num2)
    {
        cout << "The first number is smaller than the second number " << endl;
    }
    else if (num2<num1)
    {
        cout << "The second number is smaller than the first number " << endl;
    }
    else
    {
        cout << "Nothing ";
    }











}
