// demo of breaks in loops

#include <iostream>
// using namespace std;

int main(){
  float num, sum = 0.0;

  //Test expression left to always true
  while (true)
  {
    std::cout << " enter a num >>: ";
    std::cin >> num;
    if( num != 0.0){
      sum += num;
    }
    else
    {
      // terminates the loop if number equals 0.0
      break;
    }
    
  }
  std::cout << "sum is: "<< sum;
  return 0;
}