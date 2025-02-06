// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 1023;
    bool gamePaused = false;
    char action = 'x';
    if (score > 1000)
    {
        std::cout << "Your score is over 1000. " << std::endl;
    }
    if (score % 2 == 0)
    {
         std::cout << "Score is even" << std::endl;
    }
    else
    {
         std::cout << "Score is old" << std::endl;
    }

    std::cout << "The action '" << action << "'is ";
    if(action  != 'a' && action != 'w' && action != 'd' && action != 's')
    {
        std::cout << "not";
    }
    std::cout << "a movement key." << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
