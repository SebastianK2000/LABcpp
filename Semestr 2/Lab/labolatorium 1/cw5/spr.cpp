#include <iostream>
#include <string>

using namespace std;

class Firma {
public:
    string nazwa;
    string NIP;
    string adresKodPocztowy;
    string adresMiasto;
    string adresUlica;
    string adresNr;
    int liczbaPracownikow;


    Firma(string _nazwa, string _nip, string _adresKodPocztowy, string _adresMiasto, string _adresUlica, string _adresNr, int _liczbaPracownikow) {
        nazwa = _nazwa;
        NIP = _nip;
        adresKodPocztowy = _adresKodPocztowy;
        adresMiasto = _adresMiasto;
        adresUlica = _adresUlica;
        adresNr = _adresNr;
        liczbaPracownikow = _liczbaPracownikow;
    }

    void prezentuj() {
        cout << "Nazwa: " << nazwa << " " << "NIP: " << NIP << " " << "Adres: "
            << adresKodPocztowy << " " << adresMiasto << " " << ", ul. "
            << adresUlica << " " << adresNr << " " << "Liczba pracownikow: "
            << liczbaPracownikow << endl;
    }
};

int main() {
    Firma Firma1("Adidass Sp. z o.o.", "1234567890", "00-000", "Krakow", "XYZ", "123", 8);
    Firma1.prezentuj();
    Firma Firma2("NJKE", "0987654321", "11-111", "Warszawa", "XYZXYZ", "321", 10);
    Firma2.prezentuj();

    return 0;
}