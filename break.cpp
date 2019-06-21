// demo of breaks in loops

#include <iostream>
using namespace std;

int main(){
  float num, sum = 0.0;

  //Test expression left to always true
  while (true)
  {
    cout << " enter a num >>: ";
    cin >> num;
    if( num != 0.0){
      sum += num;
    }
    else
    {
      // terminates the loop if number equals 0.0
      break;
    }
    
  }
  cout << "sum is: "<< sum;
  return 0;
}