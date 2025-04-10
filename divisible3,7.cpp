#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number which is divisible by 3 " << endl;
    int num;
    cin >> num;

    if (num%3==0)
    {
        cout << "The number is divisible by 3 " << endl;
    }
    else if(num%7==0)
    {
        cout << "The number is divisible by 7 " << endl;
    }
    else if (num%3==0||num%7==0)
    {
        cout << "The number is divisible by 3 or 7 " << endl;
    }
    else
    {
        cout << "Neither ";
    }



}
