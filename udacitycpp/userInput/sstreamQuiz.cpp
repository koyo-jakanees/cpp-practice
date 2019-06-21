/*Goal: practice using stringstream
**Goal: practice getting string inputs and 
**converting them to numeric variables using
**stringstream.
**
**Prompt the user for the length of a room. 
**Then prompt for the width of the room.
**Print out the area of the room. 
**/

#include <iostream>
#include <string>
#include <sstream>

int main(){
    //Declare variables for the program
    std::string length, width;
    float len, wid, area;
    
    //length input and manipulation
    std::cout << "What is the length of the room? ";
    std::getline(std::cin, length);
    std::stringstream(length) >> len;
    
    //width input prompts and coersion
    std::cout << "What is the width of the room? ";
    std::getline(std::cin, width);
    std::stringstream(width) >> wid;
    
    //area calculation from inputs i.e len*wid
    area = len * wid ;
    
    // print outputs to the console
    //std::cout << "Dimensions of the room is: " << len <<  " by "<< wid <<"\n";
    std::cout << "\nThe area of the room is: " << area << std::endl;
    
    return 0;
}
 
