#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int a;
    cin >> a;
    if (a%4==0)
    {
        cout << "The number is divisible by 4 " << endl;
    }
    else if (a%6==0)
    {
        cout << "The number is divisible by 6 " << endl;
    }
    else if (a%4==0&&a%6==0)
    {
        cout << "They both are divisible by 4 and 6 " << endl;
    }
    else
    {
        cout << "The number is not divisible by 4 or 6 " << endl;
    }



}
