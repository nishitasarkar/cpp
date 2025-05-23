#include<iostream>
using namespace std;
int main()
{
    int negative=0;
    int positive=0;
    int zero=0;
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    int count=0;
    for (int i=1;i<=num;i++)
    {
        if (i<0)
        {
            negative++;
        }
        else if (i==0)
        {
            zero++;
        }
        else if (i>=0)
        {
            positive++;
        }

    }
    cout << "The numbers are negative " << negative << endl;
    cout << "The numbers are zero" << zero << endl;
    cout << "The numbers are positive" << positive << endl;
}
