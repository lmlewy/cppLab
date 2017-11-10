#include <iostream>

using namespace std;

int main()
{
    cout << "Obliczanie pola trojkata" << endl;

    cout << "podaj wysokosc - h:" << endl;
    float wysokosc = 0;
    cin >> wysokosc;
    cout<< "wysokosc to:" << wysokosc << endl;

    cout << "podaj dlugosc podstawy - a:" << endl;
    float dlugoscPodstawy = 0;
    cin >> dlugoscPodstawy;
    cout<< "wysokosc to:" << dlugoscPodstawy << endl;

    float pole = (dlugoscPodstawy*wysokosc)/2;

    cout << "Pole trojkata to: " << pole << endl;

    return 0;
}
