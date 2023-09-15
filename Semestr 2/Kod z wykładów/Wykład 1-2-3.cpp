#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Samochod
{
private:
    string marka;
    string numerRejestracyjny;
public:
    Samochod(string marka,string numerRejestracyjny)
    : marka(marka),numerRejestracyjny(numerRejestracyjny)
    {
    }

    void Wyswietl()const
    {
        cout<<endl<<"Marka: "<<marka;
        cout<<endl<<"Numer rejestracyjny: "<<numerRejestracyjny;
    }
};

class Samochody
{
private:
    Samochod** tab; //wskaznik do pierwszego elementu tablicy
    int liczbaSamochodow;
    int maxSamochodow;

public:
    Samochody(int max)
    {
        maxSamochodow = max;
        tab = new Samochod*[maxSamochodow];
        liczbaSamochodow = 0;
    }
    void Dodaj(Samochod* nowy)
    {
        if (liczbaSamochodow < maxSamochodow)
        {
            tab[liczbaSamochodow]=nowy;
            liczbaSamochodow++;
        }
        else
        {
            cout << "Baza samochodow jest pelna." << endl;
        }

    }

    void WyswietlWszystkie() const
    {
        for (int i = 0; i < liczbaSamochodow; i++)
        {
            tab[i]->Wyswietl();
        }
    }
};

int main(int argc, char* argv[])
{
    Samochody bazaSamochodow(20);

    Samochod s1 ("BMW 1", "1");
    bazaSamochodow.Dodaj(&s1);

    Samochod s2 ("BMW 2", "2");
    bazaSamochodow.Dodaj(&s2);

    Samochod s3 ("BMW 3", "3");
    bazaSamochodow.Dodaj(&s3);

    Samochod s4 ("BMW 4", "4");
    bazaSamochodow.Dodaj(&s4);

    bazaSamochodow.WyswietlWszystkie();

    return 0;
}
