#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float x, y, res;

    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;

    res = ((abs(sin(x - y))) + (2 * x)) / (sqrt(1 + abs(x*y)));
    cout << "result: " << res << endl;


    return 0;
}
