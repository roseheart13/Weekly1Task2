

#include <iostream>
#include <string>

#define MAX_LENGTH 100

//int name;
int age;

int drink;

int main()
{
    char name[MAX_LENGTH] = { 0 };

    std::cout << "What is your name? ";
    //std::getline (std::cin, name);
    std::cin.getline(name, MAX_LENGTH);
    std::cout << "How old are you? ";
    std::cin >> age;
   // std::cout << "Do you drink coffee? Write 1 if yes, 0 if no ";
    std::cout << "Do you drink coffee? "
    std::cin >> drink;
    /*std::cin >> yes;
    std::cin >> no;
    if (yes){
        std::cout << "Seems you like coffe";
        }
    if (no){
        std::cout << "Oh you don`t like coffee";
    }*/
    
    std::cout << "Your name is " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;
        if (drink <= 1) {
            std::cout << "Seems you like coffee";
        }
        if (drink > 1) {
            std::cout << "Oh you don`t like coffee";
        }

        
    //std::cout << "Coffee " << drink << std::endl;

}

