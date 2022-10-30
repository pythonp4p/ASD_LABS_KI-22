#include <iostream>
#include<math.h>
using namespace std;

int func(double f, double min) {
    for (double x = 0; x <= 2*M_PI; x = x + M_PI/4)
    {
        f = sin(x) + pow(cos(x), 2);
        if (f < min) {
            min = f;
        }
        cout << "Result: " << f << endl;
    }
    cout << "Min: " << min << endl;
    return f;
}

int main()
{
    double f;
    double min = 0;

    func(f,min);


    return 0;
}
