//program to demostrate continue statement

#include<iostream>
using namespace std;

int main(){
  for (int i =1; i<= 20; ++i){
    if (i == 6 || i == 18){
      continue;
    }
    cout << i << "\t";
  }
  return 0;
}