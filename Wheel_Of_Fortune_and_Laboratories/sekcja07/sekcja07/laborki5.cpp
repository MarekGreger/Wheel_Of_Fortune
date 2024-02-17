/*#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <conio.h>
#include<vector>
using namespace std;
double* initTab(int n)
{
    double* tab = new double[n];
    //    double *temp = tab;

    for (int i = 0; i < n; i++)
        *(i + tab) = rand() % 101;

    return tab;
}
void printTab(double* tab, int n)
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}
void revPrintTab(double* tab, int n)
{
    for (int i = n - 1; i >= 0; i--)
        cout << *(i + tab) << " ";
}
double* dwuwymiarowa(int n, int m)
{
    double* tab = new double[n];
    for (int i = 0; i < n; i++)
        *(i + tab) = i;
    for (int j = 0; j < m; j++)
        *(j + tab) = j;
    return tab;
}
void dwuwymiarowydruk(double* tab, int n,int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++) {
            cout << *(i + tab)<< * (j + tab)<<"\t";
        }
        cout << endl;
    }
} // ta funkcja jest niepoprawna, poprawna znajduje sie na teamsach 27.11.2020
void my_swap_1(int* a, int* b)
{
    cout << " przed zamiana " << *a << " " << *b;
    int* zast=a;
    a = b;
    b = zast;
    cout << "pozamianie" << *a <<" " << *b;
}
void my_swap_2( int& q, int& w)
{
    cout << " przed zamian " << &q << " " << &w;
    int &zast =q;
    q= w;
    w = zast;
    cout << "pozamianie" << &q << " " << &w;

}

int main()
{
    srand(time(NULL));
    int rozmiar = 10;
    double* tablica2 = dwuwymiarowa(rozmiar, rozmiar);
    dwuwymiarowa(rozmiar, rozmiar);
    dwuwymiarowydruk(tablica2, rozmiar, rozmiar);
    delete[]tablica2;
    double* tablica1 = initTab(rozmiar);
    printTab(tablica1, rozmiar);
    revPrintTab(tablica1, rozmiar);
    delete[] tablica1;
    int x = 9;
    int y = 10;
    int* a;
    int* b;
    a = &x;
    b = &y;
    my_swap_1(a, b);
    
  
   
}*/