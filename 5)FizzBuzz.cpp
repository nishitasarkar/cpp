#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int N;
    cin>>N;
    for (int i=1;i<=N;i++)
    {
        if (i%3==0)
        {
            cout << "Fizz " << i << endl;
        }
        else if (i%5==0)
        {
            cout << "Buzz " << i << endl;
        }
        else if (i%3==0 && i%5==0)
        {
            cout << "FizzBuzz " << i << endl;
        }
        else
        {
            cout << "Not like FizzBuzz " << i  << endl;
        }
    }
}
