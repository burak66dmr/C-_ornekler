#include <iostream>
using namespace std;

int main()
{
    int sayi;

    cout << "sayi gir: ";
    cin >> sayi;

    if (sayi < 0)
    {
        cout << "hata";
        return (0);
    }

    if (sayi % 2 == 0)
    {
        cout << "sayi cift";
        return (0);
    }
    cout << "sayi tek";
    

    return (0);
}