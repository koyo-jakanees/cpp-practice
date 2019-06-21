//Goal: to debug the programme e.g main.hpp is in the current directory

#include "main.hpp"

//using namespace std;

int main ()
 {
   float FTemp = 0;
   float CTemp = 0;

   cout<< "Enter a Farenheit temperature: ";
   cin >> FTemp;

   CTemp = (FTemp - 32) / (9.0/5.0);
   cout << "\n "<< FTemp << " in Farenheit = " << CTemp << " in Celsius \n";
   return 0;
 }
