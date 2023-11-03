#include <iostream>
using namespace std;

int main()
{
    int a, b, ksayi;
    int toplam = 0;

    cout << "baslangic sayi gir: ";
    cin >> a;
    cout << "son sayi gir: ";
    cin >> b;

    while (a < b)
    {
        toplam = 0;
        ksayi = a;

        while (ksayi)
        {
            toplam += (ksayi % 10) * (ksayi % 10) * (ksayi % 10);
            ksayi /= 10;
        }

        if (a == toplam)
           cout << a << endl;
        
        a++;
    }

    return (0);
}