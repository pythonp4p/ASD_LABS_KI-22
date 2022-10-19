#include <iostream>
using namespace std;

//* Функція для отримання введеного числа у зворотному вигляді
int reverse_number(int number) {
    int n = 0;
    while (number) {
        n = 10 * n + number % 10;
        number /= 10;//~ Для того щоб пройти всі цифри введеного користувачем числа
    }

    return n;
}


int main() {
    cout << "Enter the number: ";
    int number;
    cin >> number;
    if (number == reverse_number(number))
        cout << number << " This number is a palindrome" << endl;
    else
        cout << "This number is not a palindrome " << endl;

    return 0;
}
