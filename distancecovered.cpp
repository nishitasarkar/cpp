#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the number of speed: " << endl;
    int speed;
    cin >> speed;
    cout << "Enter the number of time: " << endl;
    int time;
    cin >> time;
    int distance = speed*time;
    cout << "The distance covered by a car is = " << distance;

}
