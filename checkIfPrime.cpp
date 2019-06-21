//check if a number is prime, if divible by 1 and itself only
/*
  A positive integer which is only divisible by 1 and itself is known as prime number.
  For example: 13 is a prime number because it is only divisible by 1 and 13 but, 15 is not prime number because it is divisible by 1, 3, 5 and 15.
*/
#include<iostream>
using namespace std;

int main(){
  int n;
  bool isPrime = true;
  cout << "enter a positive integer: ";
  cin >> n;
  
  for (int i =2; i <= n/2; ++i){
    if ( n % 1 == 0){
      isPrime = false;
      break;
    }
  }
  if (isPrime)
  {
    cout << " It\'s a prime number";
  }
  else
  {
    cout << "Not a prime number!!";
  }
  return 0;
}