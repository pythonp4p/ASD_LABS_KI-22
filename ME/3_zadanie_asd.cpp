#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float k = 1.0, S = 0;
    int n;

    cout << "Enter a natural number n: ";
    cin >> n;

    while (k <= n) {
        S += pow(-1, k + 1) / (k * (k + 1));
            k++;
    }

    cout << S << endl;

    return 0;
}
