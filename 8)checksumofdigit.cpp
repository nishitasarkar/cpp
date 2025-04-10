#include<iostream>
using namespace std;
int main()
{
   cout << "Enter the first number " << end;
   int num1;
   cin >> num1;
   cout << "Enter the second number " << endl;
   int num2;
   cin >> num2;
   int sum=num1+num2;
   cout << "The sum is " << sum << endl;
   if (sum%2==0)
   {
       cout << "The sum is odd " << endl;
   }
   else if (sum%2!=0)
   {
       cout << "The sum is even " << endl;
   }
   else if (sum%2==0||sum%2!=0)
   {
       cout << "The sum is odd or even " << endl;
   }
   else
   {
       cout << "Nothing ";
   }

}
