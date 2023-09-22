#include <iostream>

using namespace std;

class samochod
{
    string marka, model;
    int przebieg;
public:
    samochod()
    {
        cout << "Tworzenie obiektu klasy samochod." << endl;
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

    samochod(string marka, string mnodel)
    :przebieg(0)
    {
        marka=marka;
        model=model;
    }

    void wypisz() const;
    void jedz(int ileKm);
};

void samochod::wypisz() const
{
    cout << marka << " " << model << ", przebieg: " << przebieg << endl;
}
void samochod::jedz(int ileKm)
{

}


int main()
{
    samochod s1;
    samochod s2("Ford", "Mustang", 12222);
    samochod s3("Fiat", "500");

    s1.wypisz();
    s2.wypisz();
    s3.wypisz();

    s3.jedz(300);
    s3.wypisz();
}