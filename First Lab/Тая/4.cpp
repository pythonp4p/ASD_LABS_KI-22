#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int mass[] = {0,3,2,1,2,3,1,0,1,3,2,3,1,1,3,3,2,1,3,2,2,1,3,2,1,2,3,1,2,1,3,3,3,1,2,1,2,1,1,3};
    int ch;
    int n=40, count=0;

    cout<<"Vvedite chislo:"<<endl;
    cin>>ch;
    for(int i = 0; i<n; i++)
    {
    if (ch==mass[i])
        count++;
    }
    cout<<"Vstrechaetsia: "<<count<<endl;

    return 0;
}
