/* #include <iostream>
#include <string>

using namespace std;

 class ksiazka {
private:
    string tytul, autor;
    float cena;
    int rokWydania;

public:
    void wypisz() {
        cout << "Tytul: " << tytul << "autor" << autor << ", Cena: " << cena << " zl, rok wydania: " << rokWydania << " kg" << endl;
    }

    void wczytaj() {
        cout << "Podaj tytul: ";
        cin >> tytul;
        cout << "podaj autora: ";
        cin >> autor;
        cout << "Podaj cene: ";
        cin >> cena;
        cout << "Podaj rok wydania: ";
        cin >> rokWydania;
    }

    void ustawtytul(string n) {
        tytul= n;
    }

    void ustawautor(string n) {
        autor = n;
    }

    void ustawCene(float c) {
        cena = c;
    }

    void ustawrok(int w) {
        rokWydania = w;
    }

    void ustawDaneTowaru(string n, float c, int w) {
        tytul = n;
        autor = n;
        cena = c;
        rokWydania = w;
    }

    void zwiekszCene(float kwota) {
        cena += kwota;
    }

    void ustawDaneksiazki(const char *string, float d, int d1) {

    }
};

int main() {
    ksiazka t1;
    t1.ustawtytul("Ksiazka");
    t1.ustawautor("xyz");
    t1.ustawCene(39.99);
    t1.ustawrok(1555);
    t1.wypisz();
    t1.zwiekszCene(5);
    t1.wypisz();

    ksiazka t2;
    t2.wczytaj();
    t2.wypisz();
    t2.ustawDaneksiazki("Dlugopis", 2.5, 0.01);
    t2.wypisz();

    return 0;
}



class ksiazka
{
    string tytul, autor;
    int rokWydania;
    float cena;
public:
    ksiazka(string _tytul, string _autor, int _rokWydania, float _cena)
    {
        tytul= _tytul;
        autor= _autor;
        rokWydania= _rokWydania;
        cena= _cena;
    }

    ksiazka(string _tytul, string _autor, int _rokWydania)
    :tytuł(_tytul), autor(_autor), rokWydania(_rokWydania) {}

    void Prezentuj ()
    {
        cout << tytul << ";" << autor << ";" << rokWydania << ";" << cena << endl;

    };

};

int main ()
{
    ksiazka ksiazka1("ABC", "Jan Kowalski", 2022, 30,99);

    ksiazka1.prezentuj ();
};
 */

#include<iostream>
#include<iomanip>

using namespace std;

class Ksiazka
{
    string tytul, autor;
    int rokWydania;
    float cena;
public:
    Ksiazka(string _tytul, string _autor, int _rokWydania, float _cena)
    {
        tytul=_tytul;
        autor=_autor;
        rokWydania=_rokWydania;
        cena=_cena;
    }

    Ksiazka(string _tytul, string _autor, int _rokWydania)
            :tytul(_tytul),autor(_autor),rokWydania(_rokWydania),cena(0){}

    void SetCena(float _cena)
    {
        cena=_cena;
    }

    void Prezentuj()
    {
        cout << tytul << "; " << autor << "; " << rokWydania << "; ";
        cout << fixed << setprecision(2) << cena << " PLN"<< endl;
    }
};

int main()
{
    Ksiazka ksiazka1("ABC","Jan Kowalski",2021,29.50);
    Ksiazka ksiazka2("Tytul2","Anna Grzyb", 2022);

    ksiazka1.Prezentuj();
    ksiazka2.Prezentuj();

    ksiazka2.SetCena(30.99);
    ksiazka2.Prezentuj();
}

