#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    if (num%2!=0)

    cout << "The number is even " << endl;

    else if (num%2==0)
    {
        cout << "The number is odd " << endl;
    }
    else
    {
        cout << "Invalid input " << endl;
    }
}
