/* void zgadywanielitery(int& konto, int wylosowanie)
{
    std::vector<char>odg;
    int iloscliter = 0;
    char znak, odpowiedz;
    std::string przyklad;
    std::string przyklad2;
    przyklad = "DOM WIELORODZINNY";
    for (int j = 0;j < przyklad.size();j++) {
        if (przyklad[j] == ' ') {
            std::cout << " ";
            odg.push_back('-');
        }
        else {
            std::cout << "_";
            odg.push_back('_');
        }
    }
    do {
        std::cout << std::endl << "Podaj spolgloske" << std::endl;
        std::cin >> znak;
        znak = toupper(znak);
        for (int i = 0;i < przyklad.size();i++) {
            if (znak == przyklad[i]) {
                iloscliter++;
                odg[i] = znak;
            }
            else if (przyklad[i] == ' ') {
                odg[i] = odg[i];
            }
            else if (i == przyklad.size()- 1 && iloscliter == 0)
                std::cout << "Niestety nie ma w tym hasle twojej litery";
            else {
                odg[i] = odg[i];
            }
            konto = konto + (iloscliter * wylosowanie);
            iloscliter = 0;
        }
        std::cout << std::endl;
        for (int i = 0;i < odg.size();i++)
        {
            std::cout << odg[i];
        }
        std::cout << std::endl;
        std::cout << "\n czy chcesz zgadnac literke" << std::endl;
        std::cin >> odpowiedz;
        std::cout << std::endl;
    } while (odpowiedz != 'n');*/
/*
* #include <ctime>
#include <string>
#include <conio.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include"Naglowek.h"
static int los;
void menu()
{
    std::cout << std::endl << "1- Instrukcja do gry kolo fortuny" << std::endl;
    std::cout << std::endl << "2- Graj" << std::endl;
    std::cout << std::endl << "3- Wyjscie " << std::endl;
}
void losowanienakole(int &konto)
{
    srand(time(NULL));
    int wylosowanie, podstawienie;
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
        los = wylosowanie;
         
    }


}
void pobierznazwe()
{
    
    std::string nazwa;
    std::cout << "Podaj nazwe pod ktora chcesz grac:" << std::endl;
    getline(std::cin, nazwa);
    std::cout << "Twoja nazwa to:" << nazwa << std::endl;
   
    

}
void wczytywaniehasel(const std::string& nazwapliku)
{
    
    std::string linia;
    std::ifstream plik(nazwapliku);
    if (plik.is_open()) {
        for (int i = 0;i < 3;i++)
        {
            getline(plik, linia);
            std::cout << linia << " klucz" << std::endl;
                while (getline(plik, linia))
                {
                    if (linia == "***")
                        break;
                    std::cout << linia << " haslo" << std::endl;
                }    
        }
    plik.close();
    }
}
void zgadywanielitery(int& konto, int wylosowanie)
{
    std::vector<char>odg;
    int iloscliter = 0;
    char znak;
    std::string przyklad;
    przyklad = "SHEFFIELD";
    for (int j = 0;j < przyklad.size();j++) {
        if (przyklad[j] == ' ') {
            std::cout << " ";
            odg.push_back('-');
        }
        else {
            std::cout << "_";
            odg.push_back('_');
        }
    }
        std::cout << std::endl << "Podaj spolgloske" << std::endl;
        std::cin >> znak;
        znak = toupper(znak);
        for (int i = 0;i < przyklad.size();i++) {
            if (znak == przyklad[i]) {
                iloscliter++;
                odg[i] = znak;
            }
            else if (przyklad[i] == ' ') {
                odg[i] = odg[i];
            }
            else if (i == przyklad.size()- 1 && iloscliter == 0)
                std::cout << "Niestety nie ma w tym hasle twojej litery";
            else {
                odg[i] = odg[i];
            }
            
            
        }
        konto = konto + (iloscliter * wylosowanie);
        std::cout << "twoj wynik to:" << konto;
        iloscliter = 0;
        std::cout << std::endl;
        for (int i = 0;i < odg.size();i++)
        {
            std::cout << odg[i];
        }
        std::cout << std::endl;
        
}
void losowaniehasla(std::vector<std::string>cos)
{
    int wielkosc, los;
    int* wsk_wielkosc;
    srand(time(NULL));
    wielkosc=cos.size();
    //los = rand % wsk_wielkosc + 1;
    
}
void wyborkategorii()
{

}
void wybor()
{
    char cyfra;
    std::cout << "Co chcesz zrobic?" << std::endl;
    std::cout << "1- Wybor kategorii" << std::endl;
    std::cout << "2- Kupno samogloski" << std::endl;
    std::cout << "3- Zgadniecie litery " << std::endl;
    std::cout << "4- Zgadniecie hasla " << std::endl;
    std::cin >> cyfra;
    switch (cyfra)
    {
        case '1':
        {
            break;
        }
        case '2':
        {

            break;
        }
        case '3':
        {

            break;
        }
    }
}
void zgadywaniehasla() 
{
    std::string haslo = "ALEKSIEJ";
    std::string proba;
    std::cout << "Sprobuj odganac haslo.";
    getline(std::cin, proba);
    if (proba == haslo) {
        std::cout << "Gratulacje udalo ci sie zgadnac haslo!";
    }
    else {
        std::cout << "Niestety to nie jest poprawna odpowiedz.";
    }
}
void kupnosamogloski(int&konto)
{
    char znak;
    int iloscliter = 0;
    std::vector<char>odg;
    std::string przyklad;
    przyklad = "SHEFFIELD";
    for (int j = 0;j < przyklad.size();j++) {
        if (przyklad[j] == ' ') {
            std::cout << " ";
            odg.push_back('-');
        }
        else {
            std::cout << "_";
            odg.push_back('_');
        }
    }
    if (konto < 200) {
        std::cout << "Niestety nie mozesz kupic spolgloski, nie masz pieniedzy!";
    }
    else {
        konto = konto - 200;
        
         
            std::cout << std::endl << "Podaj jaka samogloske chcesz kupic" << std::endl;
            std::cin >> znak;
            znak = toupper(znak);
        
            for (int i = 0;i < przyklad.size();i++) {
                if (znak == przyklad[i]) {
                    iloscliter++;
                    odg[i] = znak;
                }
                else if (przyklad[i] == ' ') {
                    odg[i] = odg[i];
                }
                else if (i == przyklad.size() - 1 && iloscliter==0) {
                    std::cout << "Niestety nie ma w tym hasle twojej litery";
                    break;
                }
                else {
                    odg[i] = odg[i];
                }
            }
            std::cout << std::endl;
            for (int i = 0;i < odg.size();i++)
            {
                std::cout << odg[i];
            }
            std::cout << std::endl;
            std::cout << "stan konta:" << konto;

    }
}


bool pobierzParametry(int argc, const char** argv, std::string & in_nazwa, std::string & out_nazwa)
{
    const int IN_OK = 1;                            
    const int OUT_OK = IN_OK << 1;                
    const int WYNIK_OK = IN_OK | OUT_OK;  

    int wynik = 0;
    for (int i = 0; i < argc - 1; i++) {  
       
        if (!strcmp(argv[i], "-i")) {
            in_nazwa = argv[i + 1];
            wynik |= IN_OK;
        }
        if (!strcmp(argv[i], "-o")) {
            out_nazwa = argv[i + 1];
            wynik |= OUT_OK;
        }
    }

    if (wynik == WYNIK_OK)
        return true;
    return false;

}
int main(int argc, char*argv[])
{
    using namespace std;
    
    using namespace std;
    int konto = 200;
    string odpowiedz;
    kupnosamogloski(konto);
    //zgadywanielitery(konto, los);
   /* pobierznazwe();

    do {
        losowanienakole(konto);
        zgadywanielitery(konto, los);
        cout << "Czy chcesz ponownie zakrecic? tak/nie";
            cin >> odpowiedz;
        

    } while (odpowiedz != "nie");
   
    
    cout << "Argumenty " << argc << endl;
    for (int i = 0; i < argc; ++i)
            cout << argv[i] << endl;
            
    wczytywaniehasel("kategorie.txt");
    */
    
    
    //string linia;
    //map<string, vector<string>>hasla;
    //ifstream plik;
    //plik.open("kategorie.txt");
    //if (plik.is_open())
    //{
    //    getline(plik, linia);

    //    while (getline(plik, linia))
    //     {

    //        getline(plik1, dane);
    //        
    //        for (int j = 0;j < dane.size();j++)
    //        {

    //           if (dane[j] == 'a' || dane[j] == 'A') {
    //                  ilosc++;
    //           }

    //        }

    //    }
    //       
    //    
    //    }

//    char wybor;
//    menu();
//    cout << endl << "Podaj cyfre:" << endl;
//
//    do
//    {
//
//
//
//        cin >> wybor;
//        switch (wybor)
//        {
//        case '1':cout << "Kolo fortuny to gra w ktorej twoim celem jako gracza jest uzyskanie jak najwiekszego wyniku.\n Gra sklada sie z 3 rund. W kazdej rundzie zostanie wylosowane haslo.\n W kazdej rundzie haslo jest losowane z kategorii:\n/Przyslowie/Tytul Filmu/Miasto\n W kazdej z poszczegolnych rund gracz najpierw kreci kolem fortuny \n a potem moze odgadywac spolgloske lub tez cale haslo. \n Runda konczy sie dopiero wtedy gdy uzytkownik poda prawidlowe haslo.\n Program na koncu pokaze z jakim wynikiem zakonczona zostala gra.\n Powodzenia!" << endl;
//            break;
//        case '2':cout << "Gre czas zaczac!" << endl;
//        {
//
//            break;
//        }
//
//
//        }
//
//    } while (wybor != '3');
//    cout << "Poprawnie zamknieto gre.";
//}


