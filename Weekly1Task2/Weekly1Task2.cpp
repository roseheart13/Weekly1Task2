

#include <iostream>
#include <string>
#include <conio.h>

#define MAX_LENGTH 100


int age;


std::string YN = "";

int main()
{
    char name[MAX_LENGTH] = { 0 };

    std::cout << "What is your name? ";
    std::cin.getline(name, MAX_LENGTH);

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Do you drink coffee? [Eg: Y/N] ";
    std::cin >> YN;
 
    
    std::cout << "Your name is " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
    
        if (YN == "Y" ) {
            std::cout << "Seems you like coffee";
        }
        if (YN == "y") {
            std::cout << "Seems you like coffee";
        }
        else  {
            std::cout << "Oh you don`t like coffee";
        }

        
   

}

