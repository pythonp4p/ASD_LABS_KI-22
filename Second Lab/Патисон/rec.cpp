//*Дано піраміду, яка складається з блоків. Найвищий рівень піраміди
//*складається з 1 блоку, рівень під ним - з двох, наступний - з трьох і т.д.
//*Обчисліть кількість блоків в піраміді за заданою кількістю рівнів N > 1, за
//*допомогою рекурсії (без використання циклів і оператору множення).
//*Наприклад, при N = 2 програма має повернути 3, при N = 7 програма має
//*повернути 28.

#include <iostream>

using namespace std;

int recursiveSum(int num1, int N){
    int result = num1;
    for (int i = ++num1; i <= N; i++){
        result += i;
        recursiveSum(++num1, N);
    }
    return result;
}

int main()
{
    int num1 = 1;
    int N = 7;

    int result = recursiveSum(num1, N);

    cout << "result: " << result << endl;
    return 0;
}
