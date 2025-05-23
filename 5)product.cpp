#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    int product=1;
    for (int i=1;i<=num;i++)
    {
        product=product*i;
    }
    cout << "The product of all numbers are " << product << endl;
}
