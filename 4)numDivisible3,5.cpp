#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        if(i%3==0)
        {
            cout << i << " is divisible by 3 " << endl;
        }
        else if (i%5==0)
        {
            cout << i << " is divisible by 5 " << endl;
        }
        else if (i%3==0&&i%5==0)
        {
            cout << i << " both are divisible by 3 and 5 " << endl;;
        }
        else
        {
            cout << i << " is not divisible by 3,5 or both " << endl;
        }
    }

}
