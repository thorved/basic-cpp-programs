#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the number a and b";
    cin >> a >> b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << a;
    return 0;
}