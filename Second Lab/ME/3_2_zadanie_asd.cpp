#include<iostream>
#include<math.h>
using namespace std;

void printBinary(int d) {
    if (d > 1)
    printBinary(d / 2);
    cout << d % 2;
}

int clearBit(int d, int i)
{
    int mask = 2 << i;
    int c;
    c = (d & mask) ? (d & ~mask) : (d | mask);
    cout << "\n";
    printBinary(c);

    return c;
}

int main() {
    cout << "Enter number: " << endl;
    int d;
    int i = 0;
    cin >> d;
    printBinary(d);
    clearBit(d, i);

    return 0;
}
