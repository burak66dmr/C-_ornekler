#include <iostream>
using namespace std;

// nagatif degerler dahil degildir
int main()
{
    int a, b;

    cout << "modunu alacagin sayi: ";
    cin >> a;
    cout << "modun: ";
    cin >> b;

    if (b <= 0 || a <= 0)
    {
        cout << "hata";
        return (0);
    }

    while (b < a)
    {
        a -= b;
    }
    cout << a;

    return (0);
}