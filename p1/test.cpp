#include <iostream>

void read() {
    std::cout << "basic calc"<< std::endl;
    int var1;
    int var2;
    std::cin >> var1;
    std::cin >> var2;
    std::cout << "= " << var1 + var2;
}

int main() {
    std::cout << "hello world" << std::endl;
    int age = 10;
    std::cout << "age = " << age << std::endl;
    bool isCool = false;
    std::cout << "cool?" << isCool << std::endl;

    uint num1 = 15; //только положительные
    const int num2 = {1023}; //иммутабельные
    double num3 = 9.0;
    std::cout << double(num1 + num2 + num3) << "   ";
    std::cout << sizeof(num3);

    auto num4 = 124; //автоматически подберает тип 

    read();

    return 0;
}

