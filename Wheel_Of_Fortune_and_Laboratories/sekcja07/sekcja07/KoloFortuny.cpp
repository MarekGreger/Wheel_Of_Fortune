#include<iostream>    
#include <ctime>
#include <string>
#include <conio.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include<fstream>
#include"Naglowek.h"
#include<map>


int main(int argc, const char** argv)
{

    using namespace std;
    string plikwe, plikwy;
    vector<char>puste;
    if (pobierzParametry(argc, argv, plikwe, plikwy))
        cout << plikwe << endl << plikwy << endl;
    else instrukcja();
    int czyzgadniete = 0;
    string nazwa;
    string wyraz;
    string imie;
    int los = 0;
    map<string, vector<string>>mapa;
    map<string, vector<int>>gracze;
    string kategoria;
    int konto = 0;
    imie=pobierzNazwe(nazwa);
    cout << "Podaj jaka kategorie chcesz wybrac sposrod: MIASTA/FILMY/INFORMATYKA/CZLOWIEK/PANSTWA/GOTHIC" << endl;
    do {
        cin >> kategoria;
        transform(kategoria.begin(), kategoria.end(), kategoria.begin(), ::toupper);
        if (kategoria != "MIASTA" && kategoria != "FILMY" && kategoria != "INFORMATYKA" && kategoria != "GOTHIC" && kategoria != "CZLOWIEK" && kategoria != "PANSTWA") {
            cout << endl << "Niepoprawna kategoria wybierz jedna sposrod trzech podanych" << endl;
        }
    } while (kategoria != "MIASTA" && kategoria != "FILMY" && kategoria != "INFORMATYKA" && kategoria != "GOTHIC" && kategoria != "CZLOWIEK" && kategoria != "PANSTWA");
    wczytywanieHasel(plikwe, &mapa);
    wyswietlenieKategorii(mapa, kategoria);
    losowanieHasla(mapa, kategoria, wyraz);
    tworzenie(&puste, wyraz);
    char cyfra;
    do {

        std::cout << "  Co chcesz zrobic?" << std::endl;
        std::cout << "1- Zgadywanie litery" << std::endl;
        std::cout << "2- Kupno samogloski " << std::endl;
        std::cout << "3- Zgadniecie hasla " << std::endl;
        std::cout << "4- Wyjscie " << std::endl;
        std::cin >> cyfra;
        switch (cyfra)
        {
        case '1':
        {
            losowanieNaKole(konto, los);
            zgadywanieLitery(konto, los, wyraz, &puste);
            break;
        }
        case '2':
        {
            kupnoSamogloski(konto, wyraz, &puste);
            break;
        }
        case '3':
        {

            zgadywanieHasla(wyraz, czyzgadniete);
            break;
        }

        }
    } while (cyfra != '4' && czyzgadniete != 1);


    cout << "Wynik gracza " << imie << " wyniosl: " << konto << endl;
    zapisWynikow(plikwy,imie, konto);
    wczytywanieWynikow(plikwy);

    return 0;
}