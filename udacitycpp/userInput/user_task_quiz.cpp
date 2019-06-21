/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

 #include <iostream>
 #include <string>
 
 int main (){
     
     // define user variables
     std::string userName1, userAddress1, UserTelephone1;
     std::string userName2, userAddress2, UserTelephone2;
     
     // user prompts for contact details for first user
     std::cout << "What is your name ? ";
     std::getline(std::cin,userName1);
     
     std::cout << "What is your address? ";
     std::getline(std::cin,userAddress1);
     
     std::cout << "What is your Telephone number? ";
     std::getline(std::cin,UserTelephone1);
     
     // prompts user to to input contact info
     std::cout << "What is your name ? ";
     std::getline(std::cin,userName2);
     
     std::cout << "What is your address? ";
     std::getline(std::cin,userAddress2);
     
     std::cout << "What is your Telephone number? ";
     std::getline(std::cin,UserTelephone2);
     
     //print out a formatted output of the contacts
     std::cout<< "\nUserOne: \t"<< userName1 << "\n" <<"Address: \t"<< userAddress1 << "\n"<< "Phone Number: \t"<< UserTelephone1 << "\n \n";
     std::cout<< "UserTwo: \t"<< userName2 << "\n" <<"Address: \t"<< userAddress2 << "\n"<< "Phone Number: \t"<< UserTelephone2;
     
     return 0;
 }
     
