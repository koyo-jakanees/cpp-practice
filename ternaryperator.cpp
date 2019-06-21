#include<iostream>
using namespace std;

int main(){
  /* using the ? operator as a shorthand for if-else block:
  if ( a < b ) {
    a = b;
  }
  else {
    a = -b;
  }
  can be replaced by : a = (a < b) ? b : -b;
  */
int a,b;
b = 5;
cout << "enter a number?: ";
cin >> a;

a =(a < b)? b: -b;

cout << "number evaluated to: " << a << endl;
return 0;

}