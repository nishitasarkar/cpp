#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin >> num;
    int sum=0;
    for (int i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    cout << sum;
}
