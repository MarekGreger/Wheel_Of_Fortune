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

void losowanieNaKole(int& konto, int& wylosowanie)
{
    srand(time(NULL));
    int podstawienie;
    int tab[8] = { 0,10,50,100,150,200,500,1000 };
    std::cout << "Losujemy sposrod:" << std::endl;
    for (int i = 0;i < 8;i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << "Wylosowales:" << std::endl;
    podstawienie = rand() % 8;
    wylosowanie = tab[podstawienie];
    if (wylosowanie == tab[0]) {
        std::cout << "BANKRUT- utraciles wszystkie punkty" << std::endl;
        konto = 0;
    }
    else
    {
        std::cout << wylosowanie << std::endl;


    }
}
std::string pobierzNazwe(std::string nazwa)
{
    std::cout << "Podaj nazwe pod ktora chcesz grac:" << std::endl;
    getline(std::cin, nazwa);
    std::cout << "Twoja nazwa to:" << nazwa << std::endl;
    return nazwa;
}
void wczytywanieHasel(const std::string& nazwapliku, std::map<std::string, std::vector<std::string>>* mapa)
{
    std::vector<std::string>hasla;
    std::string linia;
    std::ifstream plik(nazwapliku);
    if (plik.is_open()) {
        while (getline(plik, linia) && linia != "")
        {
            std::string klucz;
            klucz = linia;


            //std::cout << linia << " klucz" << std::endl;
            while (getline(plik, linia) && linia != "***")
            {
                hasla.push_back(linia);

                // std::cout << linia << " haslo" << std::endl;
            }
            mapa->insert(make_pair(klucz, hasla));
            hasla.clear();
        }

        plik.close();
    }
    else
        std::cerr << "Nie udalo sie otworzyc pliku sprawdz czy zostaly podane prawidlowe nazwy plikow." << std::endl;
}
void zgadywanieLitery(int& konto, int wylosowanie, std::string wyraz, std::vector<char>* puste)
{
    int iloscliter = 0;
    char znak;
    std::cout << std::endl << "Podaj spolgloske" << std::endl;
    std::cin >> znak;
    znak = toupper(znak);
    if (znak == 'A' || znak == 'E' || znak == 'I' || znak == 'O' || znak == 'U' || znak == 'Y') {
        std::cout << "To nie spolgloska!" << std::endl;
    }
    else {
        for (int i = 0;i < wyraz.size();i++) {
            if (znak == wyraz[i]) {
                iloscliter++;
                puste->at(i) = znak;
            }
            else if (wyraz[i] == wyraz[i])
            {
                puste[i] = puste[i];
            }
            else if (i == puste->size() - 1 && iloscliter == 0)
            {
                std::cout << "Niestety nie ma w tym hasle tego znaku" << std::endl;
            }
            else {
                std::cout << "Nie ma w tym hasle tego znaku" << std::endl;
            }


        }
        konto = konto + (iloscliter * wylosowanie);
        std::cout << "Twoj wynik to: " << konto;
        std::cout << std::endl;
        for (int i = 0;i < puste->size();i++)
        {
            std::cout << puste->at(i);
        }
        std::cout << std::endl;

    }
}
void zgadywanieHasla(std::string przyklad, int& czyzgadniete)
{
    std::string proba;
    std::cout << "Sprobuj odganac haslo." << std::endl;
    getline(std::cin, proba);
    std::cin >> proba;
    transform(proba.begin(), proba.end(), proba.begin(), ::toupper);
    if (proba == przyklad) {
        std::cout << "Gratulacje udalo ci sie zgadnac haslo!" << std::endl;
        czyzgadniete++;
    }
    else {
        std::cout << "Niestety to nie jest poprawna odpowiedz." << std::endl;
    }
}
void kupnoSamogloski(int& konto, std::string wyraz, std::vector<char>* puste)
{
    char znak;
    int iloscliter = 0;
    if (konto < 200) {
        std::cout << "Niestety nie mozesz kupic spolgloski, nie masz pieniedzy!";
    }
    else {
        std::cout << std::endl << "Podaj jaka samogloske chcesz kupic" << std::endl;
        std::cin >> znak;
        znak = toupper(znak);
        if (znak == 'A' || znak == 'E' || znak == 'I' || znak == 'O' || znak == 'U' || znak == 'Y') {
            konto = konto - 200;
            for (int i = 0;i < wyraz.size();i++) {
                if (znak == wyraz[i]) {
                    iloscliter++;
                    puste->at(i) = znak;
                }
                else if (wyraz[i] == wyraz[i])
                {
                    puste[i] = puste[i];
                }
                else if (i == puste->size() - 1 && iloscliter == 0)
                {
                    std::cout << "Niestety nie ma w tym hasle tego znaku" << std::endl;
                }
                else {
                    std::cout << "Nie ma w tym hasle tego znaku" << std::endl;
                }
            }

        }
        else {
            std::cout << "nie podales samogloski, pieniadze nie zostaly zabrane" << std::endl;
        }
        std::cout << "Twoj wynik to: " << konto;
        iloscliter = 0;
        std::cout << std::endl;
        for (int i = 0;i < puste->size();i++)
        {
            std::cout << puste->at(i);
        }
        std::cout << std::endl;
    }
}
void wczytywanieWynikow(const std::string& nazwapliku)
{
    std::string linia;
    std::fstream plik(nazwapliku, std::ios::in | std::ios::out);

    if (plik.is_open()) {
        while (getline(plik, linia))
        {
            std::cout << linia << std::endl;
        }

        plik.close();
    }
    else
        std::cerr << "Nie udalo sie otworzyc pliku sprawdz czy zostaly podane prawidlowe nazwy plikow." << std::endl;
}
void instrukcja()
{

    std::cout << "Aby zaczac gre wpisz w parametrach programu-\nnajpierw przelacznik po czym nazwe pliku tekstowego." << std::endl;
    std::cout << "Przelacznik -i odpowiada plikowi z haslami. " << std::endl;
    std::cout << "Przelacznik -w odpowiada plikowi z wynikami " << std::endl;
    std::cout << "Kolo fortuny to gra w ktorej twoim celem jako gracza \njest uzyskanie jak najwiekszego wyniku." << std::endl;
    std::cout << "Wybierasz kategorie i bedzie wylosowane haslo." << std::endl;
    std::cout << "Program na koncu pokaze z jakim wynikiem zakonczona zostala gra. " << std::endl;

}
void wyswietlenieKategorii(std::map<std::string, std::vector<std::string>>mapa, std::string klucz1)
{
    // std::cout << klucz1 << std::endl;
    std::map<std::string, std::vector<std::string>>::iterator it = mapa.find(klucz1);
    if (it != mapa.end()) {
        std::vector<std::string>v = it->second;
        for (auto i = v.begin();i != v.end();i++) {
            // std::cout << *i << std::endl;
        }std::cout << std::endl;
    }
}
void losowanieHasla(std::map<std::string, std::vector<std::string>>mapa, std::string kategoria, std::string& wyraz)
{
    srand(time(NULL));
    std::map<std::string, std::vector<std::string>>::iterator it = mapa.find(kategoria);
    if (it != mapa.end()) {
        std::vector<std::string>v = it->second;
        wyraz = v[rand() % v.size()];
        //std::cout << wyraz;
    }std::cout << std::endl;
}
void zapisWynikow(const std::string nazwapliku, std::string gracz, int wynik)
{
    std::fstream plik(nazwapliku, std::ios::app);
    std::string linia;
    if (plik.is_open()) {
        plik << gracz << std::endl;
        plik << wynik << std::endl;
        plik.close();
    }
    else
        std::cerr << "Nie udalo sie otworzyc pliku sprawdz czy zostaly podane prawidlowe nazwy plikow." << std::endl;
}
bool pobierzParametry(int argc, const char** argv, std::string& in_nazwa, std::string& out_nazwa)
{
    const int IN_OK = 1;
    const int OUT_OK = IN_OK << 1;
    const int WYNIK_OK = IN_OK | OUT_OK;

    int wynik = 0;
    if (argc > 5) {
        std::cout << "Podano zbyt wiele parametrow.";
    }
    else if (argc < 3) {
        std::cout << "Podano za malo parametrow.";
    }
    for (int i = 0; i < argc - 1; i++) {
        std::string arg(argv[i]);
        if (arg == "-i") {
            in_nazwa = argv[i + 1];
            wynik |= IN_OK;
        }
        if (arg == "-w") {
            out_nazwa = argv[i + 1];
            wynik |= OUT_OK;
        }
    }
    if (wynik == WYNIK_OK)
        return true;
    return false;
}
void tworzenie(std::vector<char>* puste, std::string wyraz)
{
    for (int j = 0;j < wyraz.size();j++) {


        std::cout << "_";
        puste->push_back('_');

    }
}