//^Написати функцію, яка за номером місяця визначає кількість днів у
//^ньому. Високосний рік можна на враховувати. Вивести таблицю днів для
//^всіх зимових місяців.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string months[12] = {"January, 31", "February, 28", "March, 31", "April, 30", "May, 31", "June, 30", "July, 31", "August, 31", "September, 30", "October, 31", "November, 30", "December, 31"};
    int numberOfMonth;
    cout << "Enter number of month: ";
    cin >> numberOfMonth;
    if((numberOfMonth >= 1) && (numberOfMonth <= 12)) cout << months[numberOfMonth - 1];
    else cout << "Oops, the number of month is wrong!";

    return 0;
}
