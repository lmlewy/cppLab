#include <iostream>

using namespace std;

int main()
{
    cout << "podaj liczbe naturalna" << endl;

    int n, licznik = 1;
    cin >> n;

    for(int linia = 0; linia < n; linia++)
    {
        if(linia%2 == 0)
        {
            for(int i = 0; i < n; i++)
            {
                cout << licznik << " ";
                licznik++;
            }
            licznik += n;
            cout << endl;
        }
        else
        {
            for(int i = 0; i < n; i++)
            {
                licznik--;
                cout << licznik << " ";
            }
            licznik += n;
            cout << endl;
        }
    }

    return 0;
}
