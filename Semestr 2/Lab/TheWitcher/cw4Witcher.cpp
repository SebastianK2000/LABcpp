#include <iostream>
#include <cstdlib>

using namespace std;

class postac
{
private:
    string nazwa;
    int hp;

public:
    postac(string nazwa)
    :nazwa(nazwa),hp(5)
    {

    }

    string przedstawSie()
    {
        return "Nazywam sie "+nazwa;
    }

    int getHp()
    {
        return hp;
    }

    void utracHp()
    {
        hp--;
    }
};

class wiedzmin:public postac
{
private:
    double eliksir;
public:
    wiedzmin(string nazwa)
    :postac(nazwa), eliksir(10)
    {

    }

    void uzyjEliksiruDoUleczenia(double liczba)
    {
        eliksir-=liczba;
    }

    double getEliksir()
    {
        return eliksir;
    }

    string okrzykBojowy()
    {
        return "uaaaa";
    }
};

int main(int argc, char *argv[])
{
    postac p1("Zoltan");
    cout << endl << p1.przedstawSie();
    cout << endl << "HP: " << p1.getHp();
    p1.utracHp();
    cout << endl << "HP po utracie: " << p1.getHp();

    cout << endl;

    wiedzmin w1("Geralt");
    cout << endl << w1.przedstawSie();
    cout << endl << "Eliksir: " << w1.getEliksir();
    w1.uzyjEliksiruDoUleczenia(2);
    cout << endl << "Eliksir: " << w1.getEliksir();
    cout << endl << w1.okrzykBojowy();

    cout << endl;

    wiedzmin w2("Sebastian");
    cout << endl << w2.przedstawSie();
    cout << endl << "HP: " << w2.getHp();
    w2.utracHp();
    cout << endl << "HP po utracie: " << w2.getHp();
    cout << endl << "Eliksir: " << w2.getEliksir();
    w2.uzyjEliksiruDoUleczenia(5);
    cout << endl << "Eliksir: " << w2.getEliksir();

}
