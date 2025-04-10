#include<iostream>
using namespace std;
int main()
{
    cout << " Enter your age " << endl;
    int age;
    cin >> age;
    if (age>=18)
    {
        cout << " You are eligible to vote " << endl;
    }
    else if (age<18 && age>0)
    {
        cout << " You are not eligible to vote " << endl;
    }
    else if (age<0)
    {
      cout << " Invalid input ";
    }

}
