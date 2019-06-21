//C++ program to add numbers until user enters 0.

#include<iostream>
using namespace std;

int main()
{
  int num, sum = 0.0;

  // cout << "enter a num: ";
  // cin >> num;

  do
  {
    cout << "enter a num: ";
    cin >> num;
    sum += num;
  } while (num != 0.0 );
  
  cout << " total sum = " << sum;
  return 0;
}