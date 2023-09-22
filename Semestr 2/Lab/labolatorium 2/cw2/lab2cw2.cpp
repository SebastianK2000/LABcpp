#include <iostream>

using namespace std;

class Samochod
{

private:

    string marka, model;
    int przebieg, paliwo;
    float spalanie;

public:

    void wypisz()
    {
        cout << marka << " " << model << ", przebieg: "
             << przebieg << ", paliwo: " << paliwo << ", spalanie: " << spalanie << endl;
    }
    void wczytaj()
    {
        cout << "Podaj Marke: ";
        cin >> marka;
        cout << "Podaj model: ";
        cin >> model;
        cout << "Podaj przebieg: ";
        cin >> przebieg;
        cout << "Podaj paliwo: ";
        cin >> paliwo;
        cout << "Podaj spalanie: ";
        cin >> spalanie;
    }
    void Inicjalizuj(string model, string marka, int przebieg,
                     int paliwo, float spalanie)
    {
        this->model=model;
        this->marka=marka;
        this->przebieg=przebieg;
        this->paliwo=paliwo;
        this->spalanie=spalanie;
    }
};

int main()
{
    Samochod prl;

    prl.Inicjalizuj("Mercedes", "AMG", 100000, 15, 25);
    prl.wczytaj();
    prl.wypisz();
}