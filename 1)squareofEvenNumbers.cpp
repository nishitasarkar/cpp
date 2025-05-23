#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the numbers " << endl;
    int num;
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        if (i%2==0)
        {
            cout << "The even numbers are " << i << " and the square of these even numbers is " << i*i << endl;
        }

    }
}
