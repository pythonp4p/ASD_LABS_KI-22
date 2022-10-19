//*Дано два цілих числа. Знайти середнє арифметичне кубів цих чисел і
//*середнє геометричне модулів цих чисел.

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b;
    float arifm, geom;

    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;

    arifm = (pow(a, 3) + pow(b, 3)) / 2;
    geom = sqrt(abs(a) * abs(b));

    cout << "ser arif cubov: " << arifm << endl;
    cout << "ser geom: " << geom << endl;

    return 0;
}
