#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    if (num>=10 && num<=99)
    {
        cout << "This number is two digit " << endl;
    }
    else
    {
        cout << "This number is not two digit " << endl;
    }

}
