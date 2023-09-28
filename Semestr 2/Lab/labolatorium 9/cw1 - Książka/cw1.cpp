#include <iostream>
#include <vector>

using namespace std;

class Ksiazka
{
protected:
    string tytul, autor;
    int rokWydania;
    float cena;

public:
    Ksiazka(string _tytul, string _autor, int _rokWydania, float _cena)
    :tytul(_tytul), autor(_autor), rokWydania(_rokWydania), cena(_cena)
    {

    }

    string GetTytul() const
    {
        return tytul;
    }

    Ksiazka()
    {

    }

    int GetRokWydania()
    {
        return rokWydania;
    }

    void SetRokWydania(int _rokWydania)
    {
        rokWydania = _rokWydania;
    }

    float GetCena()
    {
        return cena;
    }

    void SetCena(float _cena)
    {
        cena=_cena;
    }

    void prezentuj()
    {
        cout << "Tytul: " << tytul << ", autor: " << autor << ", rok wydania: " << rokWydania << ", cena: " << cena << endl;
    }

    friend void ZmienTytul(Ksiazka& ksiazka, string nowyTytul);
    friend void ZmienRokWydania(Ksiazka& ksiazka, int nowyRok);

};

void ZmienTytul(Ksiazka& ksiazka, string nowyTytul);

void ZmienRokWydania(Ksiazka& ksiazka, int nowyRok);

void ZmienTytul(Ksiazka& ksiazka, string nowyTytul)
{
    ksiazka.tytul = nowyTytul;
}

void ZmienRokWydania(Ksiazka& ksiazka, int nowyRok)
{
    ksiazka.rokWydania = nowyRok;
}



class Podrecznik:public Ksiazka
{
protected:
    string przedmiot;
    float przeznaczonyDlaKlas;
public:
    Podrecznik(string _tytul, string _autor, int _rokWydania, float _cena, string _przedmiot, float _przeznaczonyDlaKlas)
    : Ksiazka(_tytul, _autor, _rokWydania, _cena), przedmiot(_przedmiot), przeznaczonyDlaKlas(_przeznaczonyDlaKlas)
    {

    }

    Podrecznik() {}

    void prezentuj()
    {
        cout << "Tytul: " << tytul << ", autor: " << autor << ", rok wydania: " << rokWydania << ", cena: " << cena <<
        ", przedmiot: " << przedmiot << ", przeznaczony dla klas: " << przeznaczonyDlaKlas << endl;
    }

};


class Biblioteka: public Ksiazka
{
private:
    vector<Ksiazka> kolekcja;

public:
    void DodajKsiazke(Ksiazka ksiazka)
    {
        kolekcja.push_back(ksiazka);
        cout << "Ksiazka dodana do biblioteki." << endl;
    }

    void UsunKsiazke(string tytul)
    {
        for (auto it = kolekcja.begin(); it != kolekcja.end(); ++it)
        {
            if (it->GetTytul() == tytul)
            {
                kolekcja.erase(it);
                cout << "Ksiazka usunieta z biblioteki." << endl;
                return;
            }
        }
        cout << "Ksiazka o tytule '" << tytul << "' nie znaleziona w bibliotece." << endl;
    }

    void WyszukajKsiazke(string tytul)
    {
        for (Ksiazka &ksiazka : kolekcja)
        {
            if (ksiazka.GetTytul() == tytul)
            {
                ksiazka.prezentuj();
                return;
            }
        }
        cout << "Ksiazka o tytule '" << tytul << "' nie znaleziona w bibliotece." << endl;
    }
};



int main()
{
    Ksiazka k1("Kosiarze", "Neal Armstrong", 2020, 39.89);

    ZmienTytul(k1, "Wiedzmin: Wieza Jaskolki");
    ZmienRokWydania(k1, 2005);

    k1.prezentuj();

    Podrecznik p1("Biologia z humorem", "Dr. Adams", 1990, 49.99, "Biologia", 7.8);

    Biblioteka biblioteka;
    biblioteka.DodajKsiazke(k1);
    biblioteka.DodajKsiazke(p1);

    biblioteka.WyszukajKsiazke("Kosiarze");
    biblioteka.WyszukajKsiazke("Inny tytul");

    biblioteka.UsunKsiazke("Biologia z humorem");



    return 0;

}
