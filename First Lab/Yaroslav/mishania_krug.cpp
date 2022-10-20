//*Дано два дійсні числа – x та y. З'ясувати, чи належить точка з
//*координатами (x, y) кругу одиничного радіуса із центром у початку

#include<iostream>
#include<math.h>
using namespace std;


int main() {
    float x, y, res;
    int r = 1;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << "Enter y: " << endl;
    cin >> y;

    if (x > -1 && y > -1){
        res = pow(x-0, 2) + pow(y-0, 2);
        if (res <= pow(r, 2))
        cout << "Prenadlegit" << endl;
        else {
            cout << "Ne prenadlegit" << endl;
        }
    }
    else {
        cout << "DALBOEB RASTOYANIE NE MOGET BUT OTRICATELNUM" << endl;
    }

    return 0;
}
