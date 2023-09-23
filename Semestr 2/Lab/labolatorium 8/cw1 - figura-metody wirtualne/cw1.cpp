using namespace std;

class Figura
{
public:
    virtual void policzPole()
    {
        cout << "Licze pole figury." << endl;
    }
};

class Trojkad:public Figura
{
private:
    float podstawa, wysokosc;

public:
    Trojkad(float _podstawa, float _wysokosc)
    :podstawa(_podstawa), wysokosc(_wysokosc)
    {

    }
    void policzPole()
    {
        cout << "Pole trojkata = " << (podstawa*wysokosc)/2 << endl;
    }
};

class Prostokad:public Figura
{
private:
    float wysokosc, szerokosc;

public:
    Prostokad(float _wysokosc, float _szerokosc)
    :wysokosc(_wysokosc), szerokosc(_szerokosc)
    {

    }
    void policzPole()
    {
        cout << "Pole prostokata = " << wysokosc*szerokosc << endl;
    }

};

class Trapez:public Figura
{
private:
    float podstawa1, podstawa2, wysokosc;

public:
    Trapez(float _podstawa1, float _podstawa2, float _wysokosc)
    :podstawa1(_podstawa1), podstawa2(_podstawa2), wysokosc(_wysokosc)
    {

    }

    void policzPole()
    {
        cout << "Pole trapezu = " << ((podstawa1+podstawa2)/2)*wysokosc << endl;
    }

};
