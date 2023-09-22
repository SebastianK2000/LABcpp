#include <iostream>
#include <string>

using namespace std;

class Towar {
private:
    string nazwa;
    double cena;
    double waga;

public:
    void wypisz() {
        cout << "Nazwa: " << nazwa << ", Cena: " << cena << " zl, Waga: " << waga << " kg" << endl;
    }

    void wczytaj() {
        cout << "Podaj nazwe: ";
        cin >> nazwa;
        cout << "Podaj cene: ";
        cin >> cena;
        cout << "Podaj wage: ";
        cin >> waga;
    }

    void ustawNazwe(string n) {
        nazwa = n;
    }

    void ustawCene(double c) {
        cena = c;
    }

    void ustawWage(double w) {
        waga = w;
    }

    void ustawDaneTowaru(string n, double c, double w) {
        nazwa = n;
        cena = c;
        waga = w;
    }

    void zwiekszCene(double kwota) {
        cena += kwota;
    }
};

int main() {
    Towar t1;
    t1.ustawNazwe("Ksiazka");
    t1.ustawCene(39.99);
    t1.ustawWage(0.5);
    t1.wypisz();
    t1.zwiekszCene(5);
    t1.wypisz();

    Towar t2;
    t2.wczytaj();
    t2.wypisz();
    t2.ustawDaneTowaru("Dlugopis", 2.5, 0.01);
    t2.wypisz();

    return 0;
}
