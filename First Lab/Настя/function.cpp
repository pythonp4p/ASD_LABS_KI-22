#include <iostream>
#include<math.h>
using namespace std;

int func(float f, float x, float step){
    for (x = 0; x <= 6.0; x = x + step){
        f = x - (pow(x, 2) / 2) + (pow(x, 4) / 24) + (pow(x, 6) / 720);
        cout << f << endl;
    }
    return f;

}

int main(){
    float f, x, step = 0.5;
    func(f, x, step);

    return 0;
}
