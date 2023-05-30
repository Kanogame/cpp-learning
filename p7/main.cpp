#include <iostream>

int main() {
    int nums[] {1,2,3,4,5};
    //nums //адрес первого элемента
    //*nums => 1
    //*(nums + 1) => 2 и тд 
    //НО 
    nums++;         // так сделать нельзя
    int b {8};
    nums = &b;          // так тоже сделать нельзя
    int *ptr {&nums[2]};    // адрес третьего элемента
    std::cout << "*ptr = " << *ptr  << std::endl; //*ptr = 3
    return 0;
}