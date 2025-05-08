#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    if (num%2!=0)
    {
        if (num>=1&&num<=50)
        {
            cout << "The number is odd and in range " << endl;
        }
        else
        {
            cout << "Odd but out of range " << endl;
        }
    }
    else if (num%2==0)
    {
        cout << "Not odd " << endl;
    }
}
