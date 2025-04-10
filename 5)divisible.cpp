#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    if (num%5!=0)
    {
        cout << "The number is divisible by 5 " << endl;
    }
    else if (num%11!=0)
    {
        cout << "The number is divisible by 11 " << endl;
    }
    else if (num%5==0&&num%11==0)
    {
        cout << "The number is divisible by both 5 and 11" << endl;
    }
    else
    {
        cout << "Nothing ";
    }










}
