//^На числовій осі розташовано три точки: A, B, C. Визначити, яка із двох
//^останніх точок (B або C) розташована ближче до A, і вивести цю точку і її
//^відстань від точки A.

#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int a, b, c;
    cout <<"Enter the first number(A): ";
    cin >> a;

    cout <<"Enter the second number(B): ";
    cin >> b;

    cout <<"Enter the third number(C): ";
    cin >> c;

    if ((b - a) < (c - a)) {
        cout <<"Point(B): " << b << endl;
    if ((b - a) > 0)
    cout <<"Distance: " << b - a;
    else if ((b - a) < 0)
    cout <<"Distance: " << (b - a) * -1;
    }

    else {
        cout <<"Point(C): " << c << endl;
    if ((c - a) > 0)
        cout <<"Distance: " << c - a;
    else if ((c - a) < 0)
        cout <<"Distance: " << (c - a) * -1;
    }

    return 0;
}
