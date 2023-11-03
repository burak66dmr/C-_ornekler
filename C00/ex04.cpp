#include <iostream>
using namespace std;

int main()
{
    int c = 1;
    int toplam = 0;
    int a, b;
    cout << "1. sayiyi gir: ";
    cin >> a;
    cout << "2. sayiyi gir: ";
    cin >> b;

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


    while (0 < b)
    {
        toplam += a;
        b--;
    }
    cout << toplam * c;

    return (0);
}