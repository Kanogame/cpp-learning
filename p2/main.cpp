#include <iostream>
using namespace std; //std задается на весь файл
using ageUint = uint;
typedef uint ageUint2; //same /\, but from c

int main() {
    int age;
    cin >> age;
    cout << "your age is" << age << endl;
    // c++ имеет inf и -inf а так эе nan
    return 0;
}