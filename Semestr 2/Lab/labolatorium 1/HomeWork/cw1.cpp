#include <iostream>
#include <string>

using namespace std;

struct Klient
{
    string imie, nazwisko, miejscowosc;
    int telefon;

    void wypisz()
    {
        cout << "Imie: " << imie << ", nazwisko: " << nazwisko << ", miejsce zamieszkania " << miejscowosc << ", telefon: " << telefon << endl;
    }
};

void wczytaj(Klient *);
void wypisz(Klient *);

int main()
{
    Klient k1={"Maja", "Stasko", "Warszawa", 533787854};
    k1.wypisz();

    Klient *p1=new Klient;

    wczytaj(p1);
    wypisz(p1);
}

void wczytaj(Klient *p)
{
    cout << "Podaj imie: ";
    cin >> p->imie;

    cout << "podaj nazwisko: ";
    cin >> p->nazwisko;

    cout << "podaj miejscowosc: ";
    cin >> p->miejscowosc;

    cout << "podaj telefon: ";
    cin >> p->telefon;
}

    void wypisz(Klient *p)
    {
        cout << "Klient P. Imie: " << p->imie << ", nazwisko: " << p->nazwisko << ", miejscowosc: " << p->miejscowosc << ", telefon: " << p->telefon << endl;
    }
