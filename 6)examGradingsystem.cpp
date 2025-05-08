#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the student's marks " << endl;
    int marks;
    cin >> marks;
    if (marks>=33)
    {
        if (marks>=75)
        {
            cout << "Distinction " << endl;
        }
        else
        {
            cout << "Passed " << endl;
        }
    }
    else
    {
        cout << "Failed " << endl;
    }
}
