#include <iostream>
#include <string>   //  ¿eby dzia³a³o getline, stoi nie dzia³a z CB
#include <sstream>  // ¿eby dzia³a³o convert

using namespace std;

#define ILOSCLICZB 100

int sprawdz(int tablica[], int wielkosc);

int main()
{
    cout << "Podaj ilosc liczb" << endl;
    int n = 0;
    cin >> n;

    cout << "Podaj liczby" << endl;
    string ciagLiczb;
    cin.ignore();
    getline(cin, ciagLiczb);
    ciagLiczb += ' ';

    //char ciagLiczb[ILOSCLICZB];
    //cin.getline(ciagLiczb, ILOSCLICZB); //to  dzia³a tylko jak ciagLiczb musia³by byæ tablica char

    int tablicaLiczb[ILOSCLICZB] = { };
    string temp = "";
    string delimiter = " ";
    size_t pos = 0; //It is a type able to represent the size of any object in bytes: size_t is the type returned by the sizeof operator and is widely used in the standard library to represent sizes and counts.
    int elementTablicy = 0, wynikKonwersji = 0;

    while ((pos = ciagLiczb.find(delimiter)) != string::npos)
    {
        temp = ciagLiczb.substr(0, pos);
        //std::cout << temp << std::endl;
        //tablicaLiczb[elementTablicy++] = stoi(temp); //to nie dzia³a w Code Blocks
        //tablicaLiczb[elementTablicy++] = std::atoi(temp); // to nie dzia³a w Code Blocks
        stringstream convert(temp);
        if ( !(convert >> wynikKonwersji) )//give the value to Result using the characters in the string
            wynikKonwersji = 0;
        tablicaLiczb[elementTablicy++] = wynikKonwersji;
        ciagLiczb.erase(0, pos + delimiter.length());
    }

    sprawdz(tablicaLiczb, n);
    return 0;
}

int sprawdz(int tablica[], int wielkosc)
{
    for(int i = 0; i < wielkosc - 1; i++)
    {
        for(int j = i + 1; j < wielkosc - 1; j++)
        {
            if( tablica[i] == tablica[j])
            {
                cout << "NIE" << endl;
                return 0;
            }
        }
    }
    cout << "TAK" << endl;
    return 0;
}
