#include<iostream>
using namespace std;
int main()
{
    cout << "Enter marks out of 100 " << endl;
    int marks;
    cin >> marks;
    if (marks>=40)
    {
        cout << "Pass " << endl;
    }
    else if (marks<=40)
    {
        cout << "Fail " << endl;
    }
    else
    {
        cout << "Nothing ";
    }
}
