// zad3VS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

#define ILOSCLICZB 1000

int _tmain(int argc, _TCHAR* argv[])
{

	cout << "Podaj ilosc liczb" << endl;
    int n = 0;
    cin >> n;

    cout << "Podaj liczby" << endl;
    string ciagLiczb;
    std::getline(std::cin, ciagLiczb);
	cout << ciagLiczb << endl;

    int tablicaLiczb[ILOSCLICZB];
    for(int i = 1; i < ILOSCLICZB; i++)
        tablicaLiczb[i] = 0;



    string temp = "";
    string delimiter = " ";
    size_t pos = 0; //It is a type able to represent the size of any object in bytes: size_t is the type returned by the sizeof operator and is widely used in the standard library to represent sizes and counts.
    int elementTablicy, wynikKonwersji = 0;








	return 0;
}

