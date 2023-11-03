#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    int a = 0;
    
    cout << "sayi git: ";
    cin >> a;

    if (a < 2)
    {
        cout << "asal degil";
        return (0);
    }

    while (i < a)
    {
        if (a % i == 0)
        {
            cout << "asal degil";
            return (0);
        }
        i++;
    }
    cout << "asaldir";


    return (0);
}