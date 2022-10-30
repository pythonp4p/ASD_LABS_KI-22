#include <iostream>
using namespace std;

int main()
{
    bool k = true;
    const int n = 16;
    double A[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    cin >> A[i];

    for (int i = 1; i < n; i++)
    if (A[i] > A[i-1]) {k = false; break;}

    if(k) cout << "Is sorted\n";
    else cout << "Not sorted\n";
    
return 0;
}
