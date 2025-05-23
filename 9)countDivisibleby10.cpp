#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    int count=0;
    for (int i=1;i<=num;i++)
    {
        if (i%10==0)
        {
            count++;
        }
    }
    cout << count;
}
