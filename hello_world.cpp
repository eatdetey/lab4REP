#include <iostream>
#include <string>

int main() {
    //Переменая для хранения имени пользователя, к которому нужно обратиться
    std:: string name;

    std:: cout << "Enter your name: ";
    getline(std:: cin, name);

    std:: cout << "Hello world from " << name << std:: endl;

    return 0;
}
