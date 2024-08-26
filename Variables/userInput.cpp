
#include <iostream>
#include <string>

    // cout << (insertaion operator)
    // cin >> (extract operator)
int main() {
    

std::string name;
int age;

std::cout << "What's your name?: " << std::endl;

std::cin >> name;

std::cout << "What's your age?: " << std::endl;

std::cin >> age;

std::cout << "Hello " << name << " ";
std::cout << "You are " <<  age << " years old" << std::endl;


std::string fullName;

std::getline(std::cin, fullName);

}