#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[] = {5, 6, 2, 14, 44, 65, 77, 3, 9, 21, 15, 89, 66, 20, 11, 99};

    cout << "Is sorted: " << boolalpha << is_sorted(begin(arr), end(arr), greater<int>());

    return 0;
}
