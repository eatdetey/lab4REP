#include <iostream>
#include <string>

int main() {
    std:: string name;

    std:: cout << "Enter your name: ";
    getline(std:: cin, name);

    std:: cout << "Hello world from " << name << std:: endl;

    return 0;
}
