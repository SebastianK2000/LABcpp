#include <iostream>

using namespace std;

class samochod
{
    string marka, model;
    int przebieg;
    float spalanie;
public:
    samochod()
    {
        cout << "Tworzenie obiektu klasy samochod" << endl;
        marka="brak";
        model="brak";
        przebieg=0;
    }

    samochod(string marka, string model, int przebieg)
    {
        this->marka=marka;
        this->model=model;
        this->przebieg=przebieg;
    }

    samochod(string marka, string model)
    :przebieg(0)
    {
        marka=marka;
        model=model;
    }

    void wypisz();
};

void samochod::wypisz()
{
    cout << marka << " " << model << ", przebieg: " << przebieg << endl;
}

int main()
{
    samochod s1;
    samochod s2("BMW", "M4", 10000);
    samochod s3("Fiat", "500");

    s1.wypisz();
    s2.wypisz();
    s3.wypisz();
}

