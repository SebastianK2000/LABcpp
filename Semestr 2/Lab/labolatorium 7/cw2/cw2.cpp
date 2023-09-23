#include <iostream>

using namespace std;

class Czlowiek
{
protected:
    string imie;
    string nazwisko;
    int wiek;
public:
    Czlowiek(string _imie,  string _nazwisko, int _wiek)
    :imie(_imie), nazwisko(_nazwisko), wiek(_wiek)
    {

    }
    Czlowiek()
    {

    }
    void wypisz()
    {
        cout << "Imie: " << imie << ", nazwisko: " << nazwisko << ", wiek: " << wiek << endl;
    }
};


class Anastasia:public Czlowiek
{
protected:
    string plec;
public:
    Anastasia(string _imie,  string _nazwisko, int _wiek, string _plec)
    :Czlowiek(_imie, _nazwisko, _wiek), plec(_plec)
    {

    }
    Anastasia()
    {

    }
    void wypisz()
    {
        Czlowiek::wypisz();
        cout << ", plec: " << plec << endl;
    }
};

class Franio:public Anastasia
{
protected:
    string zawod;
public:
    Franio(string _imie,  string _nazwisko, int _wiek, string _plec, string _zawod)
    :Anastasia(_imie, _nazwisko, _wiek, _plec), zawod(_zawod)
    {

    }
    Franio()
    {

    }
    void wypisz()
    {
        Anastasia::wypisz();
        cout << " Zawod: " << zawod << endl;
    }
};

int main()
{
    Czlowiek c1("Sebastian", "Kosciolek", 22);
    c1.wypisz();

    Anastasia a1("Anastasia", "Kowalska", 25, "Kobieta");
    a1.wypisz();

    Franio f1("Franio", "Doe", 21, "Mezczyzna", "Streamer");
    f1.wypisz();
}
