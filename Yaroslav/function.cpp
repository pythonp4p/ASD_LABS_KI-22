//*Написати функцію підрахунку факторіала числа, не використовуючи
//*рекурсію, лише цикл. Вивести значення факторіала для чисел від 0, 2, 5,
//*7, 9.

#include <iostream>
using namespace std;

long int factorial(int n) {  // факториал циклом
    long int mult = 1;
    for (int i = n; i > 0; i--) {
        mult *= i;
    }
    return mult;
}

int main() {
        for(int i = 0; i < 10; i++) {
                cout << i << "! = " << factorial(i) << endl;
        }
}
