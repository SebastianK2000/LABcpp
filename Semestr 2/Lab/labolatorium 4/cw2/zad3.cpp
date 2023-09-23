#include<iostream>

using namespace std;

class Osoba
{
    string imie, nazwisko;
public:
    Osoba(string _imie, string _nazwisko)
            :imie(_imie),nazwisko(_nazwisko){}

    Osoba(){}

    Osoba(Osoba &o)
    {
        imie=o.imie;
        nazwisko=o.nazwisko;
    }

    void Prezentuj() const
    {
        cout << imie << " " << nazwisko << endl;
    }
    friend void ZmienNazwisko(Osoba &o, string noweNazwisko);
};

class Pracownik:public Osoba
{
    string stanowisko;
    float wynagrodzenie;
public:
    Pracownik(string i, string n, string s, float w)
    :Osoba(i,n)
    {
//        imie=i;
//        nazwisko=n;
        stanowisko=s;
        wynagrodzenie=w;
    }
    Pracownik(Osoba &o, string s, float w)
    :Osoba(o)
    {
        stanowisko=s;
        wynagrodzenie=w;
    }

    string GetStanowisko()
    {
        return stanowisko;
    }

    void SetStanowisko(string _stanowisko)
    {
        stanowisko = _stanowisko;
    }
    float GetWynagrodzenie()
    {
        return wynagrodzenie;
    }
    void SetWynagrodzenie(float _wynagrodzenie)
    {
        if(_wynagrodzenie<0) wynagrodzenie=0;
        else wynagrodzenie=_wynagrodzenie;
    }
    void PrezentujPracownika()
    {
        Prezentuj();
        cout << "stanowisko: " << stanowisko << "; wynagrodzenie: " << wynagrodzenie
        << endl;
    }
};

void ZmienNazwisko(Osoba &o,string noweNazwisko)
{
    o.nazwisko=noweNazwisko;
}

int main()
{
    Osoba os1("Jan","Kowalski");
    os1.Prezentuj();
    ZmienNazwisko(os1,"Nowak");
    os1.Prezentuj();

    Pracownik pr1(os1, "kierownik",7000);
    pr1.PrezentujPracownika();

    Pracownik pr2("Anna", "Grzyb", "dyrektor", 9000);
    pr2.PrezentujPracownika();
}
