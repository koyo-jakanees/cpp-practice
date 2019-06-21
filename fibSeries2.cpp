// fib series using while loop
//Program to Generate Fibonacci Sequence Up to a Certain Number

#include<iostream>
using namespace std;

int main(){
  int t1 = 0, t2 = 1, nextTerm = 0, n;

  cout << " Enter a positive number: ";
  cin >> n;

  //display the first two terms always 1 and 2
  cout << "Fib series: " << t1 << ", " << t2 << ", ";
  nextTerm = t1 + t2;

  while (nextTerm <= n)
  {
    cout << nextTerm << ", ";
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  return EXIT_SUCCESS;
}