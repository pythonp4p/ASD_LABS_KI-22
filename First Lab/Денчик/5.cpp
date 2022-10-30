#include <iostream>
#include<cmath>
using namespace std;

int penis(float r1, float r2, float x1_1, float x2_1, float y1_1, float y2_1, float x1_2, float x2_2, float y1_2, float y2_2) {
    float dlyna_otrezka_1_kruga, rassnoyanie, dlyna_otrezka_2_kruga, sum_radius;
    int res;
    dlyna_otrezka_1_kruga = sqrt(pow(x2_1 - x1_1, 2) + pow(y2_1 - y1_1, 2));
    dlyna_otrezka_2_kruga = sqrt(pow(x2_2 - x1_2, 2) + pow(y2_2 - y1_2, 2));
    rassnoyanie = dlyna_otrezka_1_kruga - dlyna_otrezka_2_kruga;
    sum_radius = r1 + r2;

    if(rassnoyanie <= sum_radius && rassnoyanie >= abs(r1 - r2)){
        res = 1;
        cout << "peresekautca" << endl;
    }
    else {
        cout << "ne peresekautca" << endl;
    }

    return res;
}


int main() {
    float r1,r2,x1_1,x2_1,y1_1,y2_1;//*для первого круга
    float x1_2,x2_2,y1_2,y2_2;//*для второго круга


    cout << "Enter x1 PervKrug: " << endl;
    cin >> x1_1;
    cout << "Enter x2 PervKrug: " << endl;
    cin >> x2_1;
    cout << "Enter y1 PervKrug: " << endl;
    cin >> y1_1;
    cout << "Enter y2 PervKrug: " << endl;
    cin >> y2_1;

    cout << "Enter x1 VtoroyKrug: " << endl;
    cin >> x1_2;
    cout << "Enter x2 VtoroyKrug: " << endl;
    cin >> x2_2;
    cout << "Enter y1 VtoroyKrug: " << endl;
    cin >> y1_2;
    cout << "Enter y2 VtoroyKrug: " << endl;
    cin >> y2_2;

    penis(r1,r2,x1_1,x2_1,y1_1,y2_1,x1_2,x2_2,y1_2,y2_2);

    return 0;
}
