#include <iostream>

int main() {
    int num = 10;
    int &refNum = num;
    refNum += 10;
    std::cout << refNum << std::endl; //20
    num += 10;
    std::cout << refNum << std::endl; //30

    int numbers[] {1, 2, 3, 4};
    std::size(numbers); //4
    std::string message = "hello world";
    message[3]; //l 
    getline(std::cin, message);
    std::cout << message[2] << endl; //test => s
    return 0;
}