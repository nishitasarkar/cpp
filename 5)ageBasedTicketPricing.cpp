#include<iostream>
using namespace std;
int main()
{
    cout << "Enter your age " << endl;
    int age;
    cin>>age;
    string nationality= "Indian";
    if (nationality=="Indian")
    {
        if (age<5)
        {
            cout << "Free " << endl;
        }
        else if (age>=5&&age<=18)
        {
            cout << "Half Ticket " << endl;
        }
        else
        {
            cout << "Full Ticket " << endl;
        }
    }
    else if (nationality!="Indian")
    {
        cout << "Only for Indian citizens " << endl;
    }
}
