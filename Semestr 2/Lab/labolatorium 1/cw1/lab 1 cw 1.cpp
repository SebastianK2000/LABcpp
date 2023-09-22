#include <iostream>

using namespace std;

struct Klient
{
    string imie, nazwisko, miejscowosc;
    int telefon;

    void wypisz()
    {
        cout << imie << " " << nazwisko << ", miejscowosc: " << miejscowosc << ", telefon: " << telefon << endl;

   }
};

void wczytaj(Klient *);
void wczytaj(Klient &);
void wypisz(Klient);

int main()
{
    Klient k1={"Jan","Kowalski","Krakow",123123123};
    Klient *p1=new Klient;

    k1.wypisz();
    k1.imie="Tomasz";

    k1.wypisz();

    wczytaj(k1);
    wypisz(k1);

    wczytaj(p1);
    wypisz(*p1);

}
void wczytaj(Klient *k)
{
    cout << "Podaj imie: ";
    cin >> k->imie;

    cout << "Podaj nazwisko: ";
    cin >> k->nazwisko;

    cout << "Podaj miejscowosc: ";
    cin >> k->miejscowosc;

    cout << "Podaj telefon: ";
    cin >> k->telefon;
}

void wczytaj(Klient &k)
{
    cout << "Podaj imie: ";
    cin >> k.imie;

    cout << "Podaj nazwisko: ";
    cin >> k.nazwisko;

    cout << "Podaj miejscowosc: ";
    cin >> k.miejscowosc;

    cout << "Podaj telefon: ";
    cin >> k.telefon;
}

void wypisz(Klient k)
{
    cout << k.imie << " " << k.nazwisko << ",miejscowosc: " << k.miejscowosc << ", telefon:" << k.telefon << endl;
}
