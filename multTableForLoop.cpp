// Display a multiplication table from 1 to n using forloop

#include<iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter a a natural number: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cout << n << " * " << i << " = " << n*i << endl;
  }
  return 0;
}