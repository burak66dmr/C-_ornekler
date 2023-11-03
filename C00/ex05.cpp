#include <iostream>
using namespace std;

int main()
{
    int c = 1;
    int bolum = 0;
    int a, b;
    cout << "1. sayiyi gir: ";
    cin >> a;
    cout << "2. sayiyi gir: ";
    cin >> b;

    if (b == 0)
    {
        cout << "hata";
        return (0);
    }

    if (a < 0 && b > 0)
    {
        a *= -1;
        c = -1;
    }
    else if (b < 0 && a > 0)
    {
        b *= -1;
        c = -1;
    }
    else if (a < 0 && b < 0)
    {
        a *= -1;
        b *= -1;
    }

    while (b <= a)
    {
        bolum++;
        a -= b;
    }

    cout << bolum * c;

    return (0);
}