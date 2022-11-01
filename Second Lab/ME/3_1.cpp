#include<iostream>
#define N 1000
using namespace std;

int resheto(int n) {
    int sieve[n] = {0};

    for (int i = 2; i*i < n; ++i)
        if (sieve[i] == 0)
            for (int k = i*i; k < n; k+=i)
                sieve[k] = 1;

    for (int i = 2; i < n; ++i)
        if (sieve[i] == 0)
            cout << "Prime number:\n" << i << endl;

    return sieve[n];
}

int main() {
    int n = 547;
    int i;
    clock_t start = clock();
    for (int i = 0; i <= N; ++i)
        resheto(n);
    clock_t end = clock();
    double seconds = (double) (end - start) / CLOCKS_PER_SEC;
    cout << "The time: " << seconds/1000 << endl;

    return 0;
}
