#include <iostream>

int main() {
    //int* p // random value
    int* p{nullptr}; //нулевой указатель

    int num = 25;
    int* pnum{&num}; //pnum хранит адрес num
    std::cout << "Address = " << pnum << std::endl; //адрес
    std::cout << "Value = " << *pnum << std::endl; //значение

    *pnum = 30; // *pnum = 30, num = 30
    int num2 = 300;
    int* pnum2{&num2};
    pnum = pnum2; //*pnum = 300, *pnum2 = 300

    bool *pnumS{(bool *) pnum};
    std::cout << *pnumS << std::endl; 

    return 0;
}