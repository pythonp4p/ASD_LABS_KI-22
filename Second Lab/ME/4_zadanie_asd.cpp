//*Дано два цілих числа A і В. Вивести всі числа від A до B включно, в
//*порядку зростання, якщо A < B, або в порядку спадання в іншому
//*випадку, за допомогою рекурсії (без використання циклів).

#include<iostream>
using namespace std;

void rec(int a, int b)
{
    cout << a << " ";
    if (a==b) return;
    else if (a < b)
    rec(++a, b);
    else
    rec(--a, b);
}

int main() {
    int a = 20;
    int b = 30;

    rec(a, b);

    return 0;
}
