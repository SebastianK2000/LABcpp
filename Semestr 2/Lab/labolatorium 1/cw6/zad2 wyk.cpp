#include<iostream>

using namespace std;

class Osoba
{
    string imie, nazwisko;
public:
    Osoba(string _imie, string _nazwisko)
            :imie(_imie),nazwisko(_nazwisko){}

    Osoba(){}

    void Prezentuj() const
    {
        cout << imie << " " << nazwisko << endl;
    }
    friend void ZmienNazwisko(Osoba &o, string noweNazwisko);
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
}
