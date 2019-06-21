//finding sum of positive numbers
// given input n; sum = 1+2+3+....+n
//using for loop

#include <iostream>
using namespace std;

int main()
{
  int n, sum = 0;

  cout << "enter a number: ";
  cin >> n;

  for ( int i =1; i <= n; ++i)
  {
    sum += i;
    
  }

  cout << "sum = " << sum;
  return 0;
}