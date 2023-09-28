#include <iostream>

using namespace std;

class Pojazd
{
protected:
    string marka, model;
    int rokProdukcji, przebieg;
    float spalanie;
public:
    Pojazd(string _marka, string _model,  int _rokProdukcji, int _przebieg, float _spalanie)
    :marka(_marka), model(_model), rokProdukcji(_rokProdukcji), przebieg(_przebieg), spalanie(_spalanie)
    {

    }

    Pojazd() {}

    void wyswietl()
    {
        cout << "Marka: " << marka << ", model: " << model <<  ", rok produkcji: " << rokProdukcji <<
        ", przebieg: " << przebieg << ", spalanie " << spalanie << endl;
    }

};

class Samochod:public Pojazd
{
private:
    bool oponaZapasowa;
public:
    Samochod(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, bool _oponaZapasowa)
    :Pojazd(_marka, _model, _rokProdukcji, _przebieg, _spalanie), oponaZapasowa(_oponaZapasowa)
    {

    }

    Samochod() {}

};

class Autobus:public Pojazd
{
private:
    int iloscMiejsc;
public:
    Autobus(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, int _iloscMiejsc)
    :Pojazd(_marka, _model, _rokProdukcji, _przebieg, _spalanie), iloscMiejsc(_iloscMiejsc)
    {

    }

    Autobus() {}

};

class Motor:public Pojazd
{
private:
    string rodzajPaliwa;
public:
    Motor(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, string _rodzajPaliwa)
    :Pojazd(_marka, _model, _rokProdukcji, _przebieg, _spalanie), rodzajPaliwa(_rodzajPaliwa)
    {

    }

    Motor() {}

};

class SamochodElektryczny:public Samochod
{
private:
    string kolor;
public:
    SamochodElektryczny(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, string _kolor)
    :Samochod(_marka, _model, _rokProdukcji, _przebieg, _spalanie, true), kolor(_kolor)
    {

    }

    SamochodElektryczny() {}

};

class SamochodSpalinowy:public Samochod
{
private:
    string paliwo;
public:
    SamochodSpalinowy(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, string _paliwo)
    :Samochod(_marka, _model, _rokProdukcji, _przebieg, _spalanie, false), paliwo(_paliwo)
    {

    }

    SamochodSpalinowy()  {}

};

class SamochodHybrydowy:public Samochod
{
private:
    bool eko;
public:
    SamochodHybrydowy(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, bool _eko)
    :Samochod(_marka, _model, _rokProdukcji, _przebieg, _spalanie, false), eko(_eko)
    {

    }

    SamochodHybrydowy() {}

};

class AutobusElektryczny:public Autobus
{
private:
    bool miejscaDlaNiepelnosprawnych;
public:
    AutobusElektryczny(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, bool _miejscaDlaNiepelnosprawnych)
    : Autobus(_marka, _model, _rokProdukcji, _przebieg, _spalanie, 0), miejscaDlaNiepelnosprawnych(_miejscaDlaNiepelnosprawnych)
    {

    }

    AutobusElektryczny() {}

};

class AutobusSpalinowy:public Autobus
{
private:
    int iloscWejsc;
public:
    AutobusSpalinowy(string _marka, string _model, int _rokProdukcji, int _przebieg, float  _spalanie, int _iloscWejsc)
    :Autobus(_marka, _model, _rokProdukcji, _przebieg, _spalanie, 0), iloscWejsc(_iloscWejsc)
            {

            }

            AutobusSpalinowy() {}
};

int main()
{
    Pojazd p1("Mercedes", "SLS", 2023, 10000, 20);
    p1.wyswietl();

    Samochod s1("VW", "Polo", 2005, 200000, 5, true);
    s1.wyswietl();

    Autobus a1("Volvo", "XYZ", 1995, 350000, 15, 50);
    a1.wyswietl();

    Motor m1("Kawasaki", "500", 2015, 50000, 8, "Benzyna");
    m1.wyswietl();

    SamochodElektryczny se1("Tesla", "Sport Carbon", 2022, 30000, 0, "Bialy");
    se1.wyswietl();

    SamochodHybrydowy sh1("Toyota", "Yaris", 2020, 75000, 2, true);
    sh1.wyswietl();

    SamochodSpalinowy ss1("Porshe", "911", 2015, 230000, 26, "Benzyna");
    ss1.wyswietl();

    AutobusSpalinowy as1("Scania", "DDDDD", 1989, 500000, 20, 3);
    as1.wyswietl();

    AutobusElektryczny ae1("Solaris", "sssss", 2013, 200000, 0, true);
    ae1.wyswietl();

}