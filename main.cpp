#include <cstdlib>
#include <iostream>
/* program input two numbers X and Y and outputs their sum */
int main(){
  int x,y;
  std::cout << "Please enter two numbers:";
  std::cin >> x >> y;         //input x and y
  int sum = x + y;            //compute sum
  std::cout <<"their sum is "<< sum << std::endl;
  return EXIT_SUCCESS;
}