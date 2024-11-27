#include <iostream>
#include <string>

<<<<<<< HEAD
int main() {
    //Variable to store the name of the user to contact
    std:: string name;
=======
int
main()
{
  // Variable to store the name of the user to contact
  std::string name;
>>>>>>> 8bdf0e8 (Applied Mozilla style using clang-format)

  std::cout << "Enter your name: ";
  getline(std::cin, name);

  std::cout << "Hello world from " << name << std::endl;

  return 0;
}
