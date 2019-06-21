// Description: oddOrEven number evaluation using ternary operetors
// Davince Koyo: 1st June 2019
#include<iostream>
using namespace std;

int  main(){
  /*using longhand if else branching
    int n;
    cout << "enter an integer: ";
    cin >> n;
    if ( n % 2 == 0){
      cout << n << "is even.";
    }
    else {
      cout << n << "is odd.";
    }
  */
// using shorthand ternary operator one-iner
int n;
cout << "Enter an integer: ";
cin >> n;
( n % 2 == 0)? cout << n << " is Even. ": cout << n << " is Odd. "<< endl;
return 0;
}