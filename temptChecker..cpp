#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the temperature in Celsius " << endl;
    double tempt;
    cin >> tempt;
    if (tempt<15)
    {
      cout << "The temperature is cold " << endl;
    }
    else if (15-25)
    {
        cout << "The temperature is normal " << endl;
    }
    else if (tempt>25)
    {
        cout << "The temperature is hot " << endl;
    }
    else
    {
        cout << "Nothing ";
    }



}
