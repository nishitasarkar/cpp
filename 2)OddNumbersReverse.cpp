#include<iostream>
using namespace std;
int main()
{
    int odd=0;
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    for (int i=num;i>=1;i--)
    {
        if (i%2!=0)
        {
            odd--;
        }
    }
    cout << "All odd numbers in reverse are " << odd << endl;

}
