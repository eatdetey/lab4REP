#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    std:: cout << "Hello world from " << name << endl;

    return 0;
}
