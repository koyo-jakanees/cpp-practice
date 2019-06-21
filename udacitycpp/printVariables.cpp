/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/

#include <iostream>
using namespace std;

int main(){
   cout << "Size of int : " << sizeof(int) << endl;
   cout << "Size of short: " << sizeof(short) << endl;
   cout << "Size of long : " << sizeof(long) << endl;
   cout << "Size of char: " << sizeof(char) << endl;
   cout << "Size of float : " << sizeof(float) << endl;
   cout << "Size of double : " << sizeof(double) << endl;
   cout << "Size of bool: " << sizeof(bool << endl;
   
   return 0;
}
