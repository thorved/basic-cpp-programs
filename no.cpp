#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0, result, p = 0, product = 0;

    cout << "enter your number = ";
    cin >> n;
    while (n != 0)
    {
        result = n % 10;
        n = n / 10;
        product = product * 10 + result;
        p = product;
        p = p * 10 + product;
        p = m;

        switch (m)
        {
        case 0:
            cout << "Zero";
            break;
        case 1:
            cout << "One";
            break;

        case 2:
            cout << "two";
            break;

        case 3:
            cout << "Three";
            break;

        case 4:
            cout << "four";
            break;

        case 5:
            cout << "Five";
            break;

        case 6:
            cout << "Six";
            break;

        case 7:
            cout << "Seven";
            break;

        case 8:
            cout << "Eight";
            break;

        case 9:
            cout << "Nine";
            break;

        default:
            cout << "Please enter a number .";
            break;
            return 0;
        }
    }
    return 0;
}