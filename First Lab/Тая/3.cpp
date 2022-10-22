#include <iostream>
#include<cmath>
using namespace std;

int main() {
    const int secret_code = 0;
    int code_ent, n;

    do {
        cout << "Enter a number: ";
        cin >> code_ent;
        n++;
    } while (code_ent != secret_code);

    cout << "You have entered a right code\n";
    cout << "Attempts: " << n;

    return 0;
}
