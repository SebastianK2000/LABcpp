#include <cstdlib>
#include <iostream>

using namespace std;

class Osoba
{
protected:
    string imie;
    string nazwisko;
public:
    Osoba(string imie, string nazwisko)
    : imie(imie), nazwisko(nazwisko)
    {

    }

    void wyswietl()
    {
        cout<<endl<<"Imie: "<<imie;
        cout<<endl<<"Nazwisko: "<<nazwisko;
    }
};



class Pracownik: public Osoba
{

protected:
    string stanowisko;

public:
    Pracownik(string imie,string nazwisko,string stanowisko)
    : Osoba(imie, nazwisko),stanowisko(stanowisko)
    {
    }

    void wyswietl()
    {
        Osoba::wyswietl();
        cout<<endl<<"Stanowisko: "<<stanowisko;
    }

    void wyswietlNazwiskoIStanowisko()
    {
        cout<<endl<<"Nazwisko: "<<nazwisko;
        cout<<endl<<"Stanowisko: "<<stanowisko;
    }
};

class PracownikB2B: public Pracownik
{
protected:
    string typUmowy;

public:

    PracownikB2B(string imie, string nazwisko, string stanowisko, string typUmowy)
    : Pracownik(imie, nazwisko, stanowisko), typUmowy(typUmowy)
    {

    }
    void wyswietl()
    {
        Pracownik::wyswietl();
        cout<<endl<<"Typ umowy to: "<<typUmowy;
    }

};

int main(int argc, char* argv[])
{
    Osoba o1("Adam", "Rak");
    o1.wyswietl();

    Pracownik p1("John", "Doe", "Intern");
    p1.wyswietl();

    PracownikB2B p2 ("John", "Silwerheand", "Junior", "B2B");
    p2.wyswietl();

    return 0;
}
