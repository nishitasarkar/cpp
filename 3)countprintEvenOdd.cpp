#include<iostream>
using namespace std;
int main()
{
    int even=0;
    int odd=0;
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    for (int i=1; i<=num; i++)
    {
        if (i%2==0)
        {
            even++;
        }
        else if (i%2!=0)
        {
            odd++;
        }
    }
    cout << "The count of even numbers " << even << endl;
    cout << "The count of odd numbers " << odd << endl;
}
