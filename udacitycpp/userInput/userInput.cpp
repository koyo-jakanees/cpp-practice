/*This program accepts inputs from the input.txt file
**If running the program in terminal using gcc commands use:
** "g++", "-o main.out", "main.cpp"
** "./main.out", stdin=open("input.txt", "r")
** cin has a limitation of ending a string after encoutnter a space, i.e will ** only take one word in a sentence: to overcome this use the getline function 
** the syntax std::getline(std::cin, strVar);
** http://cpp.sh/3l2
** http://www.cplusplus.com/reference/string/string/getline/
*/ 

#include <iostream>
#include <string>


int main()
{
    int year = 0;
    int age = 0;
    std::string name = " ";
    //print a message to the user
    std::cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    std::cin >> year;
    
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    std::cin >> age;
    
    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<"!\n";
    
    std::cout<<"What is your name? ";
    std::cin>>name;
    std::cout<<"Hello "<<name<<" !\n";
    return 0;
