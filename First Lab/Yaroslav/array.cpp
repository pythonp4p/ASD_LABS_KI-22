#include <iostream>
using namespace std;

int main()
{
    const int n=16;
    double a[n], sum, max=0.0;

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
    cin >> a[i];

    for (int i = 0; i < n/2; i++)
    {
    sum=a[i]-a[n/2 + i];
    if (i==0 || sum>max) max=sum;
    }

    cout << "max=" << max << "\n";

return 0;
}
