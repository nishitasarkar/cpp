#include<iostream>
using namespace std;
int main()
{
    cout << "Enter first number " << endl;
    int m;
    cin >> m;
    cout << "Enter second number " << endl;
    int n;
    cin >> n;
    int product=m*n;
    cout << "Their product is " << product << endl;
    int sum=m+n;
    cout << "Their sum is " << sum << endl;
    if (product>sum)
    {
        cout << "Their product is greater than their sum " << endl;
    }
    else
    {
        cout << "Invalid " << endl;
    }
}
