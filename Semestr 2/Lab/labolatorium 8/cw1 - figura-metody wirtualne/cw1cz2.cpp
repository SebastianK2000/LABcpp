#include <iostream>
#include"cw1.cpp"

using namespace std;

int main()
{
    Trojkad tr1(2,3);
    tr1.policzPole();

    Prostokad pr1(2,6);
    pr1.policzPole();

    Trapez tz1(2,4,3);
    tz1.policzPole();

    cout << "*******************************************" << endl;

    Figura *wskFigura;

    wskFigura=&tr1;
    wskFigura->policzPole();

    wskFigura=&pr1;
    wskFigura->policzPole();

    wskFigura=&tz1;
    wskFigura->policzPole();
}
