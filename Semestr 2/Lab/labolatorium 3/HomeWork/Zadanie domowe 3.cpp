#include <iostream>
using namespace std;

class KlasaBazowa {
protected:
    int x;
    static int licznikObiektow;
    int numerowanieObiektow;

public:
    KlasaBazowa() {
        x = 0;
        licznikObiektow++;
        numerowanieObiektow = licznikObiektow;
    }

    KlasaBazowa(int value) {
        x = value;
        licznikObiektow++;
        numerowanieObiektow = licznikObiektow;
    }

    KlasaBazowa(const KlasaBazowa& other) {
        x = other.x;
        licznikObiektow++;
        numerowanieObiektow = licznikObiektow;
    }

    friend void PrzyjaznaFunkcja(KlasaBazowa& obj);

    int getX() const {
        return x;
    }

    void setX(int value) {
        x = value;
    }

    static int getLicznikObiektow() {
        return licznikObiektow;
    }

    int getNumerowanieObiektow() const {
        return numerowanieObiektow;
    }
};

int KlasaBazowa::licznikObiektow = 0;

void PrzyjaznaFunkcja(KlasaBazowa& obj) {
    cout << "Wartosc x: " << obj.x << endl;
}

class KlasaPierwsza : public KlasaBazowa {
public:
    KlasaPierwsza() : KlasaBazowa() {}

    KlasaPierwsza(int value) : KlasaBazowa(value) {}

    KlasaPierwsza(const KlasaPierwsza& other) : KlasaBazowa(other) {}
};

class KlasaDruga : public KlasaBazowa {
public:
    KlasaDruga() : KlasaBazowa() {}

    KlasaDruga(int value) : KlasaBazowa(value) {}

    KlasaDruga(const KlasaDruga& other) : KlasaBazowa(other) {}
};

int main() {
    KlasaPierwsza pierwsza;
    KlasaDruga druga(10);

    pierwsza.setX(5);
    cout << "Wartosc x w pierwsza: " << pierwsza.getX() << endl;
    cout << "Numerowanie obiektu pierwsza: " << pierwsza.getNumerowanieObiektow() << endl;

    druga.setX(15);
    cout << "Wartosc x w druga: " << druga.getX() << endl;
    cout << "Numerowanie obiektu druga: " << druga.getNumerowanieObiektow() << endl;

    PrzyjaznaFunkcja(pierwsza);
    PrzyjaznaFunkcja(druga);

    cout << "Licznik obiektow: " << KlasaBazowa::getLicznikObiektow() << endl;

    const int rozmiarTablicy = 3;
    KlasaBazowa* tablicaObiektow[rozmiarTablicy];

    for (int i = 0; i < rozmiarTablicy; i++) {
        tablicaObiektow[i] = new KlasaPierwsza(i + 1);
    }

    for (int i = 0; i < rozmiarTablicy; i++) {
        cout << "Wartosc x w obiekcie " << i + 1 << ": " << tablicaObiektow[i]->getX() << endl;
        cout << "Numerowanie obiektu " << i + 1 << ": " << tablicaObiektow[i]->getNumerowanieObiektow() << endl;
    }

    for (int i = 0; i < rozmiarTablicy; i++) {
        delete tablicaObiektow[i];
    }

    return 0;
}

