#include<iostream>
using namespace std;
int main()
{
    cout << "Enter your password " << endl;
    string pass=ab1234;
    cin>> pass;
    cout << "Enter the user's password " << endl;
    string userpass=ab1234;
    cin>> userpass;
    if (pass==userpass)
    {
        cout << "Are you admin?(yes/no)" << endl;
    }
        if (userpass=="yes");
        {
            cout << "Welcome Admin " << endl;
        }
        else if (userpass=="no");
        {
            cout << "Welcome User " << endl;
        }
    else if (userpass=="incorrect")
    {
        cout << "Access Denied " << endl;
    }
    else
    {
        cout << "Invalid input " << endl;
    }
}
