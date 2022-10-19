//&Знайти всі трицифрові натуральні числа, що не діляться ні на 2, ні на 3, ні
//&на 5.

#include <iostream>
#include<math.h>
#define N 1000
using namespace std;


int main() {
    for (int i = 100; i < N; ++i)
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
            cout << i << endl;

    return 0;
}
