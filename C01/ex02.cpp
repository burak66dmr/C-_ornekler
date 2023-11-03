#include <iostream>
using namespace std;

int tam_kare_mi(int a)
{
    int i = 1;

    if (i <= a / 2)
    {
        if (a == i * i)
            return (1);
        i++;
    }
    return (0);
}

int main()
{
    int a, b;
    cout << "baslangic sayi: ";
    cin >> a;
    cout << "son sayi: ";
    cin >> b;

    while (a < b)
    {
        if (tam_kare_mi(a))
            cout << a;
        a++;
    }
    return (0);
}