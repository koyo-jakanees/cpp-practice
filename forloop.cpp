// cpp prog to find factorial of a number using for loop
// source: programiz.com
//factorial of number n = 1*2*3*4*...*n
//Davince Koyo: 1st June 2019

#include<iostream>
using namespace std;

int main(){
  //initialize variables
  int  n, fact = 1;
  
  cout << "enter a positive integer: ";
  cin >> n;
  for ( int i = 1; i <= n; i++)
  {
    //initialize i locally in the loop: not used outside
    fact *= i; //factorial = factorial * i;
  }
  cout << "factorial of: " << n <<" = "<< fact;
  return 0;
}