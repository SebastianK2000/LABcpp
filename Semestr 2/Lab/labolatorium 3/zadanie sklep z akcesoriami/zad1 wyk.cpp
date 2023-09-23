#include<iostream>

using namespace std;

class Towar
{
    static int licznik;
    string nazwaTowaru;
    float cena;
public:
    Towar(string _nawaTowaru, float _cena);
    ~Towar();
    void Drukuj() const;
    void SetCena(float _cena);
    string GetNazwaTowaru();
};

int Towar::licznik=0;

Towar::Towar(string _nazwaTowaru,float _cena)
{
    nazwaTowaru=_nazwaTowaru;
    cena=_cena;
    licznik++;
}

Towar::~Towar()
{
    cout << "Obiekt o nazwie " << nazwaTowaru << " zostal usuniety." << endl;
    licznik--;
}

void Towar::Drukuj() const
{
    cout << "Towar o nazwie " << nazwaTowaru << " kosztuje: " << cena << " PLN." << endl;
    cout << "Stan obiektow klasy Towar: " << licznik << endl;
}

void Towar::SetCena(float _cena)
{
    if(_cena<0) cena=0;
    else cena=_cena;
}

string Towar::GetNazwaTowaru()
{
    return nazwaTowaru;
}

int main()
{
    Towar t1("zeszyt",5.50);
    t1.Drukuj();
    t1.SetCena(6.50);
    t1.Drukuj();

    Towar *t2=new Towar("cyrkiel",7.90);

    {
        Towar t3("linijka",4.70);
    }

    delete t2;

    Towar t4("dlugopis",4.50);
    t4.Drukuj();
    cout << "Obiekt nr 4 nazywaja sie: " << t4.GetNazwaTowaru() << endl;
}
