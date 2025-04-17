#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    if (num>10 && num<50)
    {
        cout << "The number is greater than 10 and less than 50 " << endl;
    }
    else
    {
        cout << "The number is not valid for the condition ";
    }
}
