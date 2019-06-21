//compute factorial using while loop
//for loop example .forloop.cpp
/*In this program, user is asked to enter a positive integer 
which is stored in variable number.*/
#include<iostream>
using namespace std;

int main(){
  int num, i=1, factorial = 1;

  cout <<" enter a natural number: ";
  cin >> num;
  while (i <= num)
  {
    factorial *= i;
    ++i;
  }
  
  cout << "Factorial of number: "<< num << " = "<< factorial <<endl;
  return 0;
}
