#include <iostream>

using namespace std;
struct Student {
    string imie;
    string nazwisko;
    int numerIndeksu;
    int ocena[5];
};

void wczytaj(Student &s) {
    cout << "Podaj imie: ";
    cin >> s.imie;
    cout << "Podaj nazwisko: ";
    cin >> s.nazwisko;
    cout << "Podaj numer indeksu: ";
    cin >> s.numerIndeksu;
    cout << "Podaj oceny: ";
    for (int i = 0; i < 5; i++) {
        cin >> s.ocena[i];
    }
}

void wypisz(Student &s) {
    cout << "Imie: " << s.imie << endl;
    cout << "Nazwisko: " << s.nazwisko << endl;
    cout << "Numer indeksu: " << s.numerIndeksu << endl;
    cout << "Oceny: ";
    for (int i = 0; i < 5; i++) {
        cout << s.ocena[i] << " ";
    }
    cout << endl;
}

float sredniaOcen(Student &s) {
    float suma = 0;
    for (int i = 0; i < 5; i++) {
        suma += s.ocena[i];
    }
    return suma/5;
}

int main() {
    Student s;
    wczytaj(s);
    wypisz(s);
    cout << "Srednia ocen: " << sredniaOcen(s) << endl;

    Student *s2 = new Student;
    wczytaj(*s2);
    wypisz(*s2);
    cout << "Srednia ocen: " << sredniaOcen(*s2) << endl;

    delete s2;

    return 0;
}