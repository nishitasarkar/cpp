#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    if (num>0)
    {
        if (num%2==0)
        {
            cout << "The number is positive and even " << endl;
        }
        else if (num%2!=0)
        {
            cout << "The number is positive and odd " << endl;
        }

    }
    else if (num<0)
    {
        cout << "The number is negative " << endl;
    }
    else if (num==0)
    {
        cout << "The number is zero " << endl;
    }
    else
    {
        cout << "Invalid input ";
    }
}
