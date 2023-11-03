#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int cift = 0;
    int tek = 0;
    float oran;
    int sayi = 0;

    cout << "kac adet sayi girmek istersiniz: ";
    cin >> sayi;

    int dizi[sayi];
    while (i < sayi)
    {
        cout << i + 1 << ". sayiyi girin: ";
        cin >> dizi[i];
        i++;
    }

    i = 0;

    while (i < sayi)
    {
        if (dizi[i] % 2 == 0)
        {
            cift += dizi[i];
            i++;
        }
        else
        {
            tek += dizi[i];
            i++;
        }
    }

    oran = (cift / tek);

    std::cout << oran;



    return (0);
}