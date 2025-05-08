#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the student's class " << endl;
    int clss;
    cin >> clss;
    cout << "Enter the student's marks " << endl;
    int marks;
    cin >> marks;
    if (clss>=9)
    {
        if (marks>=85)
        {
            cout << "Eligible for scholarship " << endl;
        }
    }
    else
    {
        cout << "Not eligible ";
    }
}
