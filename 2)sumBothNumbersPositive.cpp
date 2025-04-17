#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the first number " << endl;
    int m;
    cin >> m;
    cout << "Enter the second number " << endl;
    int n;
    cin >> n;
    int sum=m+n;
    cout << "The sum is " << sum << endl;
    if (m+n)
    {
       if (m>0 && n>0)
       {
           cout << "They both are positive " << endl;
       }

       else if (m<0)
       {
           cout << "The first one is negative " << endl;
       }
       else if (n<0)
       {
           cout << "The second one is negative " << endl;
       }
    }
    else
    {
        cout << "Not match with these condition ";
    }




}
