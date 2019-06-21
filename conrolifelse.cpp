#include<iostream>

using namespace std;

int main(){

  int num;
  cout << "enter an integer: ";
  cin >> num;
  // check if num is an integer
  if (num > 0){
    cout << "you\'ve entered a positive integer:" << num << endl;

  }
  else if (num < 0){
    cout << "you\'ve entered a negative number: " << num << endl;
  }
  else {
    cout << "you\'ve entered 0."<< endl;
  }
  cout << "this is always executed";
  return 0;
}