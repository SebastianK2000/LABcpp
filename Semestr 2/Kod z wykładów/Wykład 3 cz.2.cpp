#include <cstdlib>
#include <iostream>

using namespace std;

class Osoba
{
private:
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

private:
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
};

int main(int argc, char* argv[])
{
    Pracownik p1("John", "Doe", "Intern");
    p1.wyswietl();

    return 0;
}
