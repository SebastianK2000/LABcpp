#include <iostream>

using namespace std;

class Samochod
{
private:
    string marka, model;
    int paliwo, przebieg;
    float spalanie;
public:

    string getMarka()
    {
        return marka;
    }

    void setMarka(string nowaMarka)
    {
        marka = nowaMarka;
    }

    string getModel()
    {
        return model;
    }

    void setModel(string nowaModel)
    {
        model = nowaModel;
    }

    int getPaliwo()
    {
        return paliwo;
    }

    void setPaliwo(int nowaPaliwo)
    {
        paliwo = nowaPaliwo;
    }

    int getPrzebieg()
    {
        return przebieg;
    }

    void setPrzebieg(int nowaPrzebieg)
    {
        przebieg = nowaPrzebieg;
    }

    float getSpalanie()
    {
        return spalanie;
    }

    void setSpalanie(float nowaSpalanie)
    {
        spalanie = nowaSpalanie;
    }

    void Inicjalizuj(string nowaMarka, string nowaModel, int nowaPaliwo, int nowaPrzebieg, float nowaSpalanie)
    {
        this->marka=nowaMarka;
        this->model=nowaModel;
        this->paliwo=nowaPaliwo;
        this->przebieg=nowaPrzebieg;
        this->spalanie=nowaSpalanie;
    }

    void tankuj(int litry)
    {
        paliwo += litry;
    }

    void jedz(int kilometry)
    {
        float zuzytePaliwo = kilometry / spalanie;

        if (paliwo >= zuzytePaliwo)
        {
            przebieg += kilometry;
            paliwo -= zuzytePaliwo;
        }
        else
        {
            cout << "Brak wystarczajacej ilosci paliwa!" << endl;
        }
    }

    void wczytaj()
    {
        cout << "Podaj marke: ";
        cin >> marka;
        cout << "Podaj model: ";
        cin >> model;
        cout << "Podaj ilosc paliwa: ";
        cin >> paliwo;
        cout << "Podaj przebieg: ";
        cin >> przebieg;
        cout << "Podaj spalanie: ";
        cin >> spalanie;
    }

        void wypisz()
    {
        cout << "Marka samochodu: " << marka << ", model: " << model <<
        ", ilosc paliwa: " << paliwo << ", przebieg: " << przebieg <<
        ", spalanie: " << spalanie << endl;
    }

};

int main()
{
    Samochod s1;

    s1.Inicjalizuj("BMW", "E60", 40, 150000, 7.5);

    s1.tankuj(20);

    s1.jedz(100);

    s1.wypisz();

    Samochod s2;

    s2.wczytaj();
    s2.wypisz();


}
