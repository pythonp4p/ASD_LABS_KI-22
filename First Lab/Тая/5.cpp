#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    float f;
    float min = 0;
    float max = 0;

    for (float x = -3; x <= 6; x++)
    {
        f = pow(x, 3) - (2 * pow(x, 2)) + x - 1;
        if (f < min) {
            min = f;
        }
        else {
            max = f;
        }
        cout << "Result: " << f << endl;
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
