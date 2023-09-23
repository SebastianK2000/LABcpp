#include <iostream>

using namespace std;

class osoba
{

    string imie, nazwisko;
public:
    osoba(string _imie, string _nazwisko)
    :imie(_imie),nazwisko(_nazwisko){}

    osoba() {}

    void prezentuj () const
    {
        cout << imie << " " << nazwisko << endl;
    }
    friend void ZmienNazwisko(osoba &o, string noweNazwisko);
};

void ZmienNazwisko(osoba &o,string noweNazwisko)
{
    o.nazwisko=noweNazwisko;
}

int main()
{
    osoba os1("Jan", "Kowalski");
    os1.prezentuj();
    ZmienNazwisko(os1, "Nowak");
    os1.prezentuj();
}
