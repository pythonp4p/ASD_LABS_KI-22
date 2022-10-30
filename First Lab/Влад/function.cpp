//^Написати функцію, яка за номером місяця визначає кількість днів у
//^ньому. Високосний рік можна на враховувати. Вивести таблицю днів для
//^всіх зимових місяців.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string months[12] = {"December, 31", "January, 31", "February, 28", "March, 31", "April, 30", "May, 31", "June, 30", "July, 31", "August, 31", "September, 30", "October, 31", "November, 30"};
    int numberOfMonth;
    cout << "Enter number of month: ";
    cin >> numberOfMonth;
    if((numberOfMonth >= 1) && (numberOfMonth <= 12)) cout << months[numberOfMonth - 1] << endl;
    else cout << "Oops, the number of month is wrong!";

    for(int i = 0; i < 3; ++i) {
        cout << "\t" << months[i];
    }

    //cout << "December " << "\t31\t" << endl;
    //cout << "January " << "\t31\t" << endl;
    //cout << "February " << "\t28\t" << endl;

    return 0;
}
