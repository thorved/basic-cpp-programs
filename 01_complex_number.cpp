#include <iostream>
using namespace std;

class complex
{
public:
    int img;
    int real;

    complex operator+(complex x)
    {
        complex temp;
        temp.real = real + x.real;
        temp.img = img + x.img;
        return temp;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.real = 4;
    c1.img = 2;
    c2.real = 5;
    c2.img = 1;
    c3 = c1 + (c2);
    cout << c3.img << endl
         << c3.real;
    return 0;
}