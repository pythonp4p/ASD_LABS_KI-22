//*Дано натуральне число N. Перевірити, чи є число N степенем трійки за
//*допомогою рекурсії (без використання циклів та оператору піднесення до
//*степеня).

#include<iostream>
#define N 1000000
using namespace std;

int power(int n)
{
    if (!(n % 3))
        return power(n / 3);

    else
        return n == 1;
}

int main(){
    for (int n = 1; n < N; ++n)
        if(power(n))
            cout << n << endl;

    return 0;
}
