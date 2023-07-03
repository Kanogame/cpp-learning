#include <iostream>

void print(std::string, const unsigned = 18);

std::string reverse(std::string input) {
    const int length = input.length();
    std::string res;

    for (int i = 0; i < length; i++) {
        res += input[input.length() - 1 - i];
    }

    return res;
}


int main() {
    //print("Sam");       // Sam 18
    //print("Tom", 22);   // Tom 22
    std::string arr;
    std::cin >> arr;
    std::cout << reverse(arr) << std::endl;
    return 0;
}
/*
void print(std::string name, const unsigned age) {
    //age++; - нельзя
    std::cout << name << age << std::endl;
}*/