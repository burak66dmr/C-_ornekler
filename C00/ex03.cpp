#include <iostream>
using namespace std;

int main()
{
    int fac = 1;
    int sayi = 0;
    cout << "sayiyi gir: ";
    cin >> sayi;

    if (sayi < 0)
    {
        cout << "hata";
        return (0);
    }

    while (0 < sayi)
    {
        fac *= sayi;
        sayi--;
    }
    
    cout << fac;
}
