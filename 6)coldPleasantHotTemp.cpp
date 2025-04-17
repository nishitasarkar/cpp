#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the temperature in Celsius " << endl;
    double temp;
    cin>> temp;
    if (temp<15)
    {
        cout << "It's Cold " << endl;
    }
    else if (temp>=15 && temp<=30)
    {
        cout << "It's Pleasant " << endl;
    }
    else if (temp>30)
    {
        cout << "It's Hot " << endl;
    }
    else
    {
        cout << "It doesn't match with condition ";
    }
}
