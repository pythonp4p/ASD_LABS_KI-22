//*Написати функцію void printBinary(int d), яка друкує десяткове ціле число
//*d у двійковому представленні.

#include<iostream>
#include<math.h>
using namespace std;

void printBinary(int d) {
    if (d > 1)
    printBinary(d / 2);
    cout << d % 2;
}

int main() {
    cout << "Enter number: " << endl;
    int d;
    cin >> d;
    printBinary(d);

    return 0;
}
