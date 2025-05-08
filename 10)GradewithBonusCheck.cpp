#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the percentage of total marks " << endl;
    int marks;
    cin>> marks;
    cout << "Enter the percentage of attendance " << endl;
    int attendance;
    cin>>attendance;
    if (marks>=85)
    {
        if (attendance>=90)
        {
            cout << "Grade A+ with bonus " << endl;
        }
        else
        {
            cout << "Grade A " << endl;
        }
    }
    else
    {
        cout << "Below Grade A" << endl;
    }

}
