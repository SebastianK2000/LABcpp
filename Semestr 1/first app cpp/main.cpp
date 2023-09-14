#include <iostream>
using namespace std;
int main()
{

    int a = 0, b = 0;
    cout << "Wpisz a\n";
    cin >> a;
    cout << "Wpisz b\n";
    cin >> b;
    float pole = a*b;
    cout <<  "pole: "<<pole<<endl;
    cout << "Wpisz a\n";
    cin >> a;
    cout << "Wpisz b\n";
    cin >> b;

    int dzielenie = a/b;
    int reszta_z_dzielenia = a%b;

    cout <<  "dzielenie: "<<dzielenie<<endl;
    cout <<  "reszta: "<<reszta_z_dzielenia<<endl;
return 0;
}
/*


#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cout << "Wpisz a\n";
    cin >> a;
    cout << "Wpisz b\n";
    cin >> b;

    int dodawanie = a+b;
    int odejmowanie = a-b;
    int mnozenie = a*b;
    int dzielenie = a/b;

    int dzialanie;
    cout << "wybierz dzialanie sposrod 1 -dodawanie, 2-odejmowanie, 3-mnozenie, 4-dzielenie: ";
    cin >> dzialanie;

    switch( dzialanie )
    {
    case 1:
        cout << dodawanie << endl;
        break;
    case 2:
        cout << odejmowanie << endl;
        break;
    case 3:
        cout << mnozenie << endl;
        break;
    case 4:
        cout << dzielenie << endl;
        break;
    }

return 0;
}



int main()
{
    cout << "Podaj liczbe linijek choinki: ";
    int rozmiar;
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < i + 1; j++)
            cout << "*";
        cout << endl;
    }
return 0;
}










#include <iostream>

using namespace std;

int main()
{
    cout << "Tabliczka mnozenia do 100" << endl;


    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=10; j++)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
    }

    return 0;
}







int main()
{
    for (char i='a'; i<='z'; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;

    for (char j='A'; j<='Z'; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;

    for (char j='z'; j>='a'; --j)
        {
            cout<<j<<" ";
        }
           cout<<endl;

    for (char j='Z'; j>='A'; --j)
        {
            cout<<j<<" ";
        }

return 0;
}






#include <cstdlib>

int main()

{

    int tab [10][10];
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            tab[i][j]=rand();
            cout<<tab[i][j]<<" " ;
        }
        cout<<endl;
    }

    return 0;
}







????
#include<iostream>
#include<cstdlib>



using namespace std;

#define LEN 10

int main(){
    int tab[LEN];


for(int i=0; i<LEN;i++){
    tab[i]=rand()%100;

   cout<<tab[i]<<endl;
}
if(tab[i]>18){
    int suma;

}


    return 0;
}
????












#include <iostream>
using namespace std;

#define LEN 20

int main()
{

for(int i = 0; i<LEN;  i++)
{
    for(int k = i; (k%2==1); k++)
    cout << k << endl;

}

    }














#include<iostream>
using namespace std;
#define LEN 10
int main()
{
    int temp;
    int tab[LEN] = {3,5,7,1,8,0,8,2,4,6};  // nieposortowana tabelka
    for(int i=0; i<LEN; i++)
        cout<<tab[i]<<" ";
    cout<<endl;

    for(int i=0; i<(LEN-1); i++)
    {
        for(int j=0; j<(LEN-i-1); j++)
        {
            if(tab[j]>tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
//posortowana tabelka
    for(int i=0; i<LEN; i++)
        cout<<tab[i]<<" ";
    cout<<endl;
    return 0;
}







#include<iostream>
using namespace std;

int main() {
    int a, b;
    a=rand()%20;
    cout << "zgadnij liczbe od 1 do 10" << endl;

    do {
            cin >> b;
            if(b<a){
                cout << "za malo" <<endl;
            }
            if(b>a){
                cout << "za duzo" <<endl;
            }
            if(b==a) {
                cout << "zgadles" <<endl;
            }
    }
    while(a!=b);



   return 0;
}




int main(){

    for (int i=0; i>6; i++)
    cout << i;


return 0;
}
*/
/*
int add(int a, int b) {
    int result;
    result = a + b;
    cout << "Wynik dodawania: " << result << "\n";
    return result;
}



int main() {
    int sum; //Deklatacja
    sum = add(27,18);
    cout << "W zmiennej sum znajduje sie: " << sum << "\n";
}

int main() {
    int number1;
    int number2;
    cout << "wpisz pierwsza liczbe: ";
    cin >> number1;
    cout << "wpisz druga liczbe: ";
    cin >> number2;
    cout << "pierwsza liczba: " << number1 << endl;
    cout << "druga liczba: " << number2 << "\n";
    add(number1, number2);
}


int add(int a, int b) {
    int result;
    result = a - b;
    cout << "Wynik odejmowania: " << result << "\n";
    return result;
}

int main() {
    int number1;
    int number2;
    cout << "wpisz pierwsza liczbe: ";
    cin >> number1;
    cout << "wpisz druga liczbe: ";
    cin >> number2;
    cout << "pierwsza liczba: " << number1 << endl;
    cout << "druga liczba: " << number2 << "\n";
    add(number1, number2);
}



int main() {

int hp= 19;

if(hp>20) {
    cout << "HP: " << hp << endl;
}

else if (hp <= 20 && hp > 0)
{
    cout << "Uwazaj! NISKIE HP!!!" << " " << hp << endl;
}
else
{
    cout << "Game over" << endl;
}
}


#include <iostream>
using namespace std;
int main ()
{
int a, b; //tworzymy zmienne
int wynik; //tworzymy zmienn¹
cout << "Podaj liczbê: "; //wypisujemy komunikat
cin >> a; //wczytujemy liczbê wprowadzon¹ z klawiatury
cout << "Podaj liczbê: "; //wypisujemy komunikat
cin >> b; //wczytujemy liczbê wprowadzon¹ z klawiatury
wynik = a+b; //obliczamy sumê
cout << "Suma podanych liczby wynosi:"; //wypisujemy komunikat
cout << wynik<<endl; //wypisujemy wartoœæ zmiennej wynik
return 0;
}


int main()
{
    int a, b;
    int wynik;
    cout << "Podaj liczbe:";
    cin >> a;
    cout << "Podaj liczbe:";
    cin >> b;
    wynik = a+b;
    cout << "suma podanych liczb wynosi:";
    cout << wynik<<endl;
    return 0;
}



// Kalkulator + - * /

int a;
int b;


int main ()
{
    cout << "podaj dwie liczby" << endl;
    cout << "pierwsza liczba : " << endl;
    cin >> a;
    cout << "druga liczba : " << endl;
    cin >> b;
    cout << "wynik = " << a+b << endl;
    cout << "wynik = " << a-b << endl;
    cout << "wynik = " << a*b << endl;
    cout << "wynik = " << a/b << endl;
    return 0;
}



// oblicznaie obwodu koła

int f, p, o;
float PI = 3.14;

int main ()
{
    cin >> f;
    p = 3.14*f*f;
    cout << p << endl;
    o = 2*PI*f;
    cout << o << endl;

    return 0;
}


// wypisanie liczb w przedziale 0-9 if & switch

int main (){
    int a;
    cout << "Podaj cyfre :"<<endl;
    cin >> a;
    switch (a) {
    case 0:
    cout <<"zero"<<endl;
    break;
    case 1:
    cout <<"jeden"<<endl;
    break;
    case 2:
    cout <<"dwa"<<endl;
    break;
    case 3:
    cout <<"trzy"<<endl;
    break;
    case 4:
    cout <<"cztery"<<endl;
    break;
    case 5:
    cout <<"piec"<<endl;
    break;
    case 6:
    cout <<"szczesc"<<endl;
    break;
    case 7:
    cout <<"siedem"<<endl;
    break;
    case 8:
    cout <<"osiem"<<endl;
    break;
    case 9:
    cout <<"dziewiec"<<endl;
    break;
    default:
    cout << "Wartosc zmiennej x jest rozna od 0-9" << endl;
}

//if (a > 9 || a < 0)
//{
//    cout << "bledna liczba" << endl;
//}
    return 0;
}
*/






