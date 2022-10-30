//*Знайти всі натуральні двоцифрові числа, що діляться на 4, але не діляться
//*на 6.

#include<iostream>
#include<cmath>
#define N 100
using namespace std;

int main() {
    for (int i = 10; i < N; ++i)
        if (i % 4 == 0 && i % 6 != 0)
            cout << i << endl;

    return 0;
}
