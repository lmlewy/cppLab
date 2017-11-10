#include <iostream>

using namespace std;

#define ILOSCLICZB 1000

int main()
{
    int tablicaLiczb[ILOSCLICZB];

    cout << "Podaj ilosc liczb" << endl;
    int n = 0;
    cin >> n;

    cout << "Podaj liczby" << endl;
    string ciagLiczb;
    getline(cin, ciagLiczb);


    for(int i = 1; i < ILOSCLICZB; i++)
   {
        tablicaLiczb[i] = 0;
    }
    //string temp;





    cin >> n;

    return 0;
}
