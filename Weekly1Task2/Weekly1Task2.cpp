

#include <iostream>
#include <string>

int name;
int age;
//int yes;
//int no;

int main()
{
    std::cout << "What is your name? ";
    std::getline (std::cin, name);
    std::cout << "How old are you? ";
    std::cin >> age;
    /*std::cout << "Do you drink coffee?";
    if yes{
        std::cout << "Seems you like coffe"
        }
    if no{
        std::cout << "Oh you don`t like coffee"
    }*/

    std::cout << "Your name is: " << name << std::endl;
    std::cout << "You are" << age << "years old" << std::endl

}

