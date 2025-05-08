#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number of year " << endl;
    int year;
    cin>>year;
    if (year%4==0)
    {
        if(year%100==0 && year%400==0)
        {
            cout << "Leap Year " << endl;
        }
    }
    else
        {
            cout << "Not a leap year " << endl;
        }
}
