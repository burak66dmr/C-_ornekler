#include <iostream>
using namespace std;

int main()
{
    int toplam = 0;
    int i = 1;
    while (i < 101)
    {
        toplam += (i * i * i);
        i++;
    }
    cout << toplam;

    return (0);
}