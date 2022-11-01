#include<iostream>
#include<math.h>
using namespace std;

void printBinary(int d) {
    if (d > 1)
    printBinary(d / 2);
    cout << d % 2;
}

int compareHalves(int d)
{
    
}

int main() {
    cout << "Enter number: " << endl;
    int d;
    cin >> d;
    printBinary(d);

    return 0;
}
