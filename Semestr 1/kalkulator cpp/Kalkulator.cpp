#include <iostream>

 using namespace std;



 int a, b;
 int wynik;
 char x;

 int main ()
 {
     cout << "podaj pierwsza liczbe : " << endl;
     cin >> a;
     cout << "podaj druga liczbe : " << endl;
     cin >> b;
     cout << "podaj operator dzialania : " << endl;
     cin >> x;
     if (x == '+') {
        wynik = a + b;
    cout << "wynik = " << wynik << endl;
     }

     if (x == '-') {
        wynik = a - b;
    cout << "wynik = " << wynik << endl;
     }

     if (x == '*') {
        wynik = a * b;
    cout << "wynik = " << wynik << endl;
     }

     if (x == '/') {
        wynik = a / b;
    cout << "wynik = " << wynik << endl;

        return 0;
    }

 }
