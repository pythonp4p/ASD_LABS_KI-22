//*Дано масив цілих чисел розміру 70, знайти кількість елементів цього
//*масиву, що знаходяться в інтервалі [-10; 10].

#include<iostream>
using namespace std;

int main()
{
    int N, count=0;
    cout << "N = "; cin >> N;

    double *a = new double[N], A, B;

    cout << "Enter " << N << " elements:\n";
    for (int i = 0; i < N; i++)
    cin >> a[i];

    cout << "Enter interval: "; cin >> A;
    cout << "Enter interval: "; cin >> B;

    if (A>B) swap(A,B);//*swap это обмен значениями между двумя переменными

    for (int i = 0; i < N; i++)
    if (a[i]>=A && a[i]<=B) count++;

    cout << "count=" << count << "\n";

    delete[]a;

return 0;
}
