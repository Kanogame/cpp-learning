#include <iosteam>

int main() {
    int n = 10;
    int *pn = &n;
    //*pn == 10
    pn++; //адрес указателя изменится на 1 => *np перестанет быть равно n
    //адрес увеличивается на размер типа данных
    const int constN = 123;
    const int *pConstN = &constN;
    //*pConstN = 10 ERROR 
    pConstN = &n; //no error
    //НО
    const int *const pConstConstN = &constN; //нельзя заменить и адрес и значение
    return 0;
}