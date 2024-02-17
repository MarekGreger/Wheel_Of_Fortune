#ifndef naglowek_h
#define naglowek_h
#include <map>
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <conio.h>
#include <vector>
#include <iomanip>
#include <algorithm>


void losowanieNaKole(int& konto, int& wylosowanie);
std::string pobierzNazwe(std::string nazwa);
void wczytywanieHasel(const std::string& nazwapliku, std::map<std::string, std::vector<std::string>>* mapa);
void zgadywanieLitery(int& konto, int wylosowanie, std::string wyraz, std::vector<char>* puste);
void zgadywanieHasla(std::string przyklad, int& czyzgadniete);
void kupnoSamogloski(int& konto, std::string wyraz, std::vector<char>* puste);
void wczytywanieWynikow(const std::string& nazwapliku);
void instrukcja();
void wyswietlenieKategorii(std::map < std::string, std::vector<std::string >> mapa, std::string klucz1);
void losowanieHasla(std::map<std::string, std::vector<std::string>>mapa, std::string kategoria, std::string& wyraz);
void zapisWynikow(const std::string nazwapliku, std::string gracz, int wynik);
bool pobierzParametry(int argc, const char** argv, std::string& in_nazwa, std::string& out_nazwa);
void tworzenie(std::vector<char>* puste, std::string wyraz);


#endif /* naglowek_h */