#include <iostream>

using namespace std;

class Pracownik
{
private:
    string imie, nazwisko, miejscowosc;
    float placa;
public:

    void zwiekszPensje(float podwyzka)
    {
        placa += podwyzka;
    }

    void inicjalizuj(string imie, string nazwisko, string miejscowosc, float placa)
    {
        this->imie=imie;
        this->nazwisko=nazwisko;
        this->miejscowosc=miejscowosc;
        this->placa=placa;
    }

    void wypisz()
    {
        cout << "Imie pracownika: " << imie << ", nazwisko: " << nazwisko << ", miejscowosc: " << miejscowosc << ", placa: " << placa << endl;
    }

    string GetImie()
    {
        return imie;
    }

    void setImie(string noweImie)
    {
        imie = noweImie;
    }

    string GetNazwisko()
    {
        return nazwisko;
    }

    void setNazwisko(string noweNazwisko)
    {
        nazwisko = noweNazwisko;
    }

    string GetMiejscowosc()
    {
        return miejscowosc;
    }

    void setMiejscowosc(string noweMiejscowosc)
    {
        miejscowosc = noweMiejscowosc;
    }

    float GetPlaca()
    {
        return placa;
    }

    void setPlaca(float nowePlaca)
    {
        placa = nowePlaca;
    }

   /* void wczytaj()
    {
        cout << "Podaj imie: ";
        cin >> imie;
        cout << "Podaj nazwisko: ";
        cin >> nazwisko;
        cout << "Podaj miejscowosc: ";
        cin >> miejscowosc;
        cout << "Podaj place: ";
        cin >> placa;
    }*/
};


int main()
{
    Pracownik p1;

    /*cout << "Imie pracownika: " << p1.GetImie() << endl;

    p1.wczytaj();

    p1.setImie("Wlodek");*/

    p1.inicjalizuj("Jan", "Nowak", "Warszawa", 5000.0);

    p1.zwiekszPensje(2000.0);

    p1.wypisz();

    Pracownik p2;

    p2.inicjalizuj("Wlodek", "Markowicz", "Krakow", 15000.0);
    p2.wypisz();
}
