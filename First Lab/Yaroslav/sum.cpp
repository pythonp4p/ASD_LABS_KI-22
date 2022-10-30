#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float i = 1.0, S = 0, S1= 0, S2= 0;
    int n;

    cout << "Enter a natural number n: ";
    cin >> n;

    for (int i = 0; i <= n; ++i) {
        S1 += pow(3, i);
        S2 += (i - pow(2, i));
        S = S1 + S2;
    }

    cout << S << endl;

    return 0;
}
