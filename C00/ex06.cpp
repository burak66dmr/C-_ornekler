#include <iostream>
using namespace std;

int main()
{
    int sayi;
    int size = 0;

    cout << "sayi gir: ";
    cin >> sayi;

    while (0 < sayi)
    {
        sayi /= 10;
        size++;
    }

    cout << size;
    
    return (0);
}