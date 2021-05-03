#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num=4;

    cout<<sizeof(num++)<<endl;
    cout<<num<<endl;

    cout << sizeof(double) << endl;
    cout <<setw(23)<<"sizeof(double) = "<<sizeof(double)<< endl;
    return 0;
}