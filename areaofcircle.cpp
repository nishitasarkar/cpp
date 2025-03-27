#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the radius of circle " << endl;
    double radius;
    cin >> radius;
    double m = 3.14*(radius*radius);
    cout << "The area of the circle: " << m;
}
