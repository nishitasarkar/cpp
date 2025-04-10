#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    if (num>0)
    {
        cout << "The number is positive " << endl;
    }
    else if (num<0)
    {
        cout << "The number is negative " << endl;
    }
    else
    {
        cout << "No eligible " << endl;
    }
}
