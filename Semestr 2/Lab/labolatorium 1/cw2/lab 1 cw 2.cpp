#include <iostream>

using namespace std;

struct Pracownik
{
    string imie, nazwisko;
    float placa;

    void wypisz()
    {
        cout << imie << " " << nazwisko << " " << placa << endl;

   }
};

void wczytaj(Pracownik *);
void wczytaj(Pracownik &);
void wypisz(Pracownik);

int main()
{
    Pracownik k1={"Daniel","Kosciolek",2500};
    Pracownik *p1=new Pracownik;

    k1.wypisz();
    k1.imie="Sebastian";

    k1.wypisz();

    wczytaj(k1);
    wypisz(k1);

    wczytaj(p1);
    wypisz(*p1);

}
void wczytaj(Pracownik *k)
{
    cout << "Podaj imie: ";
    cin >> k->imie;

    cout << "Podaj nazwisko: ";
    cin >> k->nazwisko;

    cout << "Podaj placa: ";
    cin >> k->placa;
}

void wczytaj(Pracownik &k)
{
    cout << "Podaj imie: ";
    cin >> k.imie;

    cout << "Podaj nazwisko: ";
    cin >> k.nazwisko;

    cout << "Podaj placa: ";
    cin >> k.placa;
}

void wypisz(Pracownik k)
{
    cout << k.imie << " " << k.nazwisko << " " << k.placa << endl;
}
