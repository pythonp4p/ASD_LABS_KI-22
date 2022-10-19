#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float leg_a, leg_b, hypotenuse, area;

    cout <<"Enter leg a: ";
    cin >> leg_a;

    cout <<"Enter leg b: ";
    cin >> leg_b;

    hypotenuse = sqrt(pow(leg_a, 2) + pow(leg_b, 2));
    cout <<"The hypotenuse is equal to: " << hypotenuse << endl;

    area = (leg_a * leg_b) * 0.5;
    cout <<"The area of the triangle is equal to: " << area << endl;

    return 0;
}
