#include <iostream>

using namespace std;

class Pracownik
{
private:
    string imie, nazwisko, miejscowosc;
    float placa;
public:
    void wypisz()
    {
        cout << imie << " " << nazwisko << ", miejscowosc: "
        << miejscowosc << ", placa: " << placa << endl;
    }
    void wczytaj()
    {
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj miejscowosc: ";
        cin.ignore();
        getline(cin,miejscowosc);
        cout << "Podaj place: ";
        cin >> placa;
    }
};

int main()
{
    Pracownik prl[10];
    prl[10].wczytaj();
    prl[10].wypisz();

}
