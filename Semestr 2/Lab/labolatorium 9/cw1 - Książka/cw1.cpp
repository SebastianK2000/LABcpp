#include <iostream>

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

    Ksiazka()
    {

    }

    int GetRokWydania()
    {
        return rokWydania;
    }

    void SetRokWydania()
    {
        rokWydania=_rokWydania;
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

};



int main()
{
    Ksiazka k1("Kosiarze", "Neal Armstrong", 2020, 39.89);
    k1.prezentuj();
}
