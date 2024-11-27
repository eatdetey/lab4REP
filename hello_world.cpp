#include <iostream>
#include <string>

int main() {
    //Variable to store the name of the user to contact
    std:: string name;

    std:: cout << "Enter your name: ";
    getline(std:: cin, name);

    std:: cout << "Hello world from " << name << std:: endl;

    return 0;
}
