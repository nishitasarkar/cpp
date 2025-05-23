#include<iostream>
using namespace std;
int main()
{
    int even=0;
    int sum=0;
    cout << "Enter the number " << endl;
    int num;
    cin>>num;
    for (int i=1;i<=num;i++)
    {
      if (i%2==0)
      {
          even++;
      }
      {
          sum=sum+i;
      }
    }
    cout << "The sum of all even numbers " << sum << endl;

}
