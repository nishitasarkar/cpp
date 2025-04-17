#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the vehicle speed " << endl;
    double speed;
    cin >> speed;
    if (speed<=60)
    {
        cout << "The condition is safe " << endl;
    }
    else if (speed>=61 && speed<=80)
    {
        cout << "The condition is caution " << endl;
    }
    else if (speed>=81 && speed<=100)
    {
        cout << "Warning! " << endl;
    }
    else if (speed>100)
    {
        cout << "Danger " << endl;
    }
    else
    {
        cout << "Invalid ";
    }

}
