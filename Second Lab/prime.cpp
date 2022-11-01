//*Реалізувати булеву функцію bool isPrime(int n), яка перевіряє вхідне
//*число n на простоту за допомогою звичайного перебору дільників.

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n > 1){
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;//!Число не просте
        return true;//* Число просте
    }
    else
        return false;//!Число не просте
}

int main() {
    int n = 100;
    //cout <<"Enter a number: ";
    //cin >> n;

    cout << "Is prime: " << isPrime(n) << endl;

    cout <<"runtime = " << clock()/1000.0 << endl; //*Час роботи програми
    return 0;
}
