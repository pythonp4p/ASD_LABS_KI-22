#include<iostream>
using namespace std;

int main() {
    short a[] = {3, 88, 1, 91, 2, 63, 7, 8, 33, 11, 42, 56, 77, 21, 30};

    //& Обчислюємо розмір масиву. Змінна N міститиме кількість елементів масиву.
    //& Обчислюємо скільки байт займає масив а, і ділимо на розмір байт який займає один елемент цього масиву.
    int N = sizeof(a) / sizeof(short); //~    (2*15) / 2

    //*Цикл, що відповідає за зсув порога
    for (int i = 0; i < N - 1; ++i) {
        short min = a[i];
        short pos = i;

    //*Цикл пошуку мін значень починаючи від порогу
        for (int j = i + 1; j < N; ++j)
            if (min > a[j]) {
                pos = j;
                min = a[j];
            }

    //*Здійснюємо обмін значеннями
        short t = a[i];
        a[i] = a[pos];
        a[pos] = t;
    }

    for (int i = 0; i < N; ++i)
        cout << a[i] << " ";

    return 0;
}
