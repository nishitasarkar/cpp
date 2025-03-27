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
    cout << "Enter third number " << endl;
    int num3;
    cin >> num3;
    int sum=num1+num2+num3;
    int avg=sum/3;
    cout << "The average of these numbers is " << avg;
}
