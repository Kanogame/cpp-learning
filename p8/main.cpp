#include <iostream>

void print(std::string, unsigned = 18);

int main() {
    print("Sam");       // Sam 18
    print("Tom", 22);   // Tom 22
    return 0
}

void print(std::string name, unsigned age) {
    std::cout << name << age << std::endl;
}