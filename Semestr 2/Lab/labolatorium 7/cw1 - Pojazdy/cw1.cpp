#include <iostream>

using namespace std;

class Silnik
{
private:
    int pojemnosc;
    string rodzajPaliwa;
public:
    Silnik(int _pojemnosc, string _rodzajPaliwa)
    :pojemnosc(_pojemnosc), rodzajPaliwa(_rodzajPaliwa)
    {

    }
    Silnik()
    {
        pojemnosc=1000;
        rodzajPaliwa="ON";
    }

    string GetRodzajPaliwa()
    {
        return rodzajPaliwa;
    }
    int GetPojemnosc()
    {
        return pojemnosc;
    }
};

class pojazd
{
protected:
    string marka;
    int rokProdukcji;
public:
    pojazd(string _marka, int _rokProdukcji)
    :marka(_marka), rokProdukcji(_rokProdukcji)
    {

    }
    pojazd()
    {

    }
        void prezentuj()
    {
        cout << "Marka: " << marka << ", rok produkcji: " << rokProdukcji << endl;
    }
};


class samochodOsobowy: public pojazd
{
private:
    string model, nrRejestracyjny;
    Silnik silnik;
public:
    samochodOsobowy(string _marka, int _rokProdukcji, string _model, string _nrRejestracyjny)
    :pojazd(_marka, _rokProdukcji), model(_model), nrRejestracyjny(_nrRejestracyjny)
    {

    }
    samochodOsobowy()
    {

    }
    void prezentuj()
    {
        pojazd::prezentuj();
        cout << "Model: " << model << ", Pojemnosc: " << silnik.GetPojemnosc() << ", Silnik: " << silnik.GetRodzajPaliwa() << ", nr rejestracyjny: " << nrRejestracyjny << endl;
    }
};

class taksowka: public samochodOsobowy
{
protected:
    int nrBoczny;
public:
    taksowka(string _marka, int _rokProdukcji, string _model, string _nrRejestracyjny, int _nrBoczny)
    :samochodOsobowy(_marka, _rokProdukcji, _model, _nrRejestracyjny), nrBoczny(_nrBoczny)
    {

    }
    taksowka()
    {

    }
    void prezentuj()
    {
        samochodOsobowy::prezentuj();
        cout << "nr boczny: " << nrBoczny << endl;
    }
};

class Autobus:public pojazd
{
protected:
    int iloscMiejsc;
    bool dlaNiepelnosprawnych;
public:
    Autobus(string _marka, int _rokProdukcji, int _iloscMiejsc, bool _dlaNiepelnosprawnych)
    :pojazd(_marka, _rokProdukcji), iloscMiejsc(_iloscMiejsc), dlaNiepelnosprawnych(_dlaNiepelnosprawnych)
    {

    }
    Autobus()
    {

    }
    void prezentuj()
    {
        cout << "Marka: " << marka << ", rok produkcji: " << rokProdukcji << ", iloscMiejsc: " << iloscMiejsc << ", dlaNiepelnosprawnych: " << dlaNiepelnosprawnych << endl;

    }

};

int main()
{
    pojazd p1("Volvo", 2020);
    p1.prezentuj();

    samochodOsobowy s1("Mercedes", 2023, "GLS", "WW123456");
    s1.prezentuj();

    taksowka t1("VW", 2002, "Polo", "KTA123G67J", 5);
    t1.prezentuj();
    taksowka t2 ("Skoda", 2003, "Octavia", "KR12K34J", 6);
    t2.prezentuj();

    Autobus a1("Solaris", 2015, 88, true);
    a1.prezentuj();
}
