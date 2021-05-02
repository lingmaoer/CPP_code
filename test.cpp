#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    do
    {
        a++;
        cout << ++a << endl;
        if (a == 10)
            break;
    } while (a == 9);
    cout<< "ok\n";
}
