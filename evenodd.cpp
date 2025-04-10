#include<iostream>
using namespace std;
int main()
{
    cout<< "Enter the number " <<endl;
    int a;
    cin >> a;
    if (a%2==0){
    cout << " The number is even " << endl;
    }
    else if (a%2!=0)
    {
        cout << " The number is odd " << endl;
    }
    else
    {
        cout << " Invalid input ";
    }
}
