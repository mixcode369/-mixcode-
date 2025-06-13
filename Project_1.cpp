#include <iostream>

int main(){
    std:: string name; 

    std:: cout << "Hi there! What's your name?";
    std:: getline(std::cin, name);

    std:: cout << "Hello " << name << ", nice to meet you!" << '\n';

    return 0;
}