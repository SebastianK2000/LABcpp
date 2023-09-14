#include <iostream>
#include <cmath>
#include <stdio.h>
#include <math.h>
using namespace std;



int main() {

    int a;
    int b;
    int c;
    double x =2;


    cout << "Podaj a: " << endl;
    cin >> a;

    cout << "Podaj b: " << endl;
    cin >> b;

    cout << "Podaj c: " << endl;
    cin >> c;

    double obw = (a+c+b)/x;

    cout << sqrt(obw*(obw-a)*(obw-b)*(obw-c)) << endl;

    cout << obw << endl;

    return 0;
}





