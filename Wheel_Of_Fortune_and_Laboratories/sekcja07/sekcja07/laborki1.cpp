
/* 
 zad 9
	for (int i = 1; i <= 15; i++)
	{
		for (int j = 1; j <= 15; j++)
		{
			

			cout << j * i<<"\t";
				

		}
		cout << endl;
		
	}

	return 0;
zad8
	int min, zast, t[10];
	zast = 0;
	cout << "tablica ma rozmiar 10"<<endl;
	srand(time(NULL));
	for (int i = 0;i < 10;i++)
	{
		min = 100;
		t[i] = rand() % 101;

	}
	for (int i = 0;i < 10;i++)
	{
		if (t[i] < min)
			min = t[i];
	}
	cout << "minimalna wartosc to:"<< endl << min << endl;
	cout << "przed sortowaniem";
	for (int i = 0;i < 10;i++)
		cout << t[i] << " ";
	cout << "po sortowaniu";
	sort(t, t + 10);
	for (int i = 0;i < 10;i++)
		cout << t[i] << " ";

zad 7

		int liczba;
	char odpowiedz;
	cout << "podaj liczbe" << endl;
	cin >> liczba;
	cout << "czy chcesz podac kolejna liczbe t/n " << endl;
	cin >> odpowiedz;
	if (odpowiedz = 't')
		do
		{
			cout << "podaj liczbe" << endl;
			cin >> liczba;
			if (!(cin >> liczba)) //<- wazne lepiej to zapamietaj!
			{
				cerr << "nie podales liczby ";
				exit(0);
			}
			else 
			cout << "czy chcesz podac kolejna liczbe t/n " << endl;
			cin >> odpowiedz;
		} while (odpowiedz != 'n');
	else
		return  0;

zad 1
double a, b; //zmienne calkowitoliczbowe
cin >> a;
cin >> b;
cout << a << " + " << b << " = " << a + b << endl;
cout << a << " - " << b << " = " << a - b << endl;
cout << a << " * " << b << " = " << a * b << endl;
cout << a << " / " << b << " = " << a / b << endl;


return 0;

zad 3 
	int N;
	cin >> N;
	for (int i = 1;i <= N;i++)
		cout << i<<"  ";



		int start, stop, dzielnik;
	for(start;start<stop;start++)



	zad 5 
	#include <iostream>

using namespace std;

int main() {

    int podstawa, wykladnik;
    podstawa = 2;
    wykladnik = 3;
    int wynik = 1;
    for (int i = 0;true;i++)
    {
        if (i == wykladnik)
            break;
        wynik *= podstawa;  //wynik = wynik * podstawa
    }
    cout << wynik <<endl;
    
    return 0;
}


	zad 6 
		int liczba;
	srand(time(NULL));
	liczba = rand() % 101;;
	int x;
	cout << "zgadnij liczbe z przedzialu 0-100 \n";
	do {
		cin >> x;
	if (x == liczba)
		cout << "gratki zgadles!";
	else
	{
		if (x < liczba)
			cout << "liczba jest wieksza \n";
		else
			cout << "liczba jest mniejsza \n ";
	}
	} while (x != liczba);
*/

