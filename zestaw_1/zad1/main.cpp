#include <iostream>

using namespace std;

int main()
{
    cout << "Podaj wzrost Jacka, wymagany wzrost, wysokosc guza" << endl;
    float wysokoscJacka, wymaganyWzrost, wysokoscGuza = 0;
    cin >> wysokoscJacka >> wymaganyWzrost >> wysokoscGuza;

    //cout << wysokoscJacka << wymaganyWzrost << wysokoscGuza;

    int iloscGuzow = 0;
    while(wysokoscJacka < wymaganyWzrost)
    {
        wysokoscJacka += wysokoscGuza;
        iloscGuzow++;
    }

    cout << "Ilosc guzow to:" << iloscGuzow << endl;

    return 0;
}
