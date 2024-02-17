/*
void generujLiczby(const string& nazwa, int n)
{
	ofstream plik;
	int a = 0;
	srand(time(NULL));
	plik.open(nazwa);
	for (int i = 0; i < n; i++) {
		if (!plik.is_open()) {
			break;
		}
		else {
			a = rand() % 101;
			plik << a << endl;
		}
	}
	plik.close();
}
void pobierzLiczby(const std::string& nazwapliku, int* tab, int n)
{
	
	ifstream in(nazwapliku);
	if (in.is_open()) {
		for (int i = 0;i < n;i++) {
			int liczba;
			if (in >> liczba)
				tab[i] = liczba;
			else
				return;
		}
		in.close();
	}
}
void przepis(const std::string& nazwapliku,int n)
{
	string dane;
	ifstream plik1(nazwapliku);
	if (plik1.is_open()){
		for (int i = 0;i < n;i++) {
			getline(plik1, dane);
			cout << dane<<endl;
		}
		plik1.close();
	}
}
void wypisz_podmien_znak(const string& nazwapliku, char oryginalny, char podstawienie,int linijek)
{
	
	string dane;
	ifstream plik1(nazwapliku);
	if (plik1.is_open()) {
		
		for (int i = 0;i < linijek;i++)
		{
			
			getline(plik1, dane);
			vector <char> v(dane.begin(), dane.end());
			
			for (int j = 0;j < v.size();j++)
			{
				
				if (v[j] == oryginalny) {
					v[j] = podstawienie;
				}
				cout << v[j] << " ";

			}
			cout << endl;
			
		}
	} 
	plik1.close();
}
void zlicz(const string& nazwapliku)// poprawna wersja ze nie podajemy ilosci linijek tylko robi tyle ile po prostu jest tych linijek tekstu
{
	int ilosc=0;
	string dane;
	ifstream plik1(nazwapliku);
	if (plik1.is_open()) {
		while( getline(plik1, dane))
		{

			getline(plik1, dane);
		   // vector <char> v(dane.begin(), dane.end());
			for (int j = 0;j < dane.size();j++)
			{

				if (dane[j] == 'a' || dane[j] == 'A') {
					ilosc++;
				}

			}

		}
		plik1.close();
	}
	cout <<endl<< ilosc << endl;

}
void rozmiar(const string& nazwapliku)
{
	int wielkosc;
	ifstream plik1(nazwapliku);
	if (plik1.is_open()) {
		plik1.seekg(0, ios::end);
		wielkosc = plik1.tellg();
		plik1.seekg(0, ios::beg);
		cout << endl<< wielkosc;
	}
	plik1.close();
}
void zapisz_liczby_bin(const string& nazwapliku, int * tab)
{
	ofstream plik2(nazwapliku, std::ios_base::binary);
	if (!plik2.is_open()) {
		return;
	}
	for (int i = 0;i < 30;i++) {
		plik2.write((char*)&tab[i], sizeof(int));
		plik2.close();
	}
	
}
void odczyt_liczby_bin(const string& nazwapliku, int* tab)
{
	ifstream plik2(nazwapliku, std::ios_base::binary);
	if (!plik2.is_open()) {
		return;
	}
	for (int i = 0;i < 30;i++) {
		plik2.read((char*)&tab[i], sizeof(int));
		plik2.close();
	}
	
	
}
int main()
{
	int tablica[30];
	int tablica1[30];
	generujLiczby("losowe.txt", 30);
	pobierzLiczby("losowe.txt", tablica, 30);
	for (int i = 0;i < 30;i++)
		cout << tablica[i]<<endl;
	przepis("asd.txt", 5);
	rozmiar("asd.txt");
	zlicz("asd.txt", 5);
	wypisz_podmien_znak("asd.txt", 'a', 'x',5);
	for (int i = 0;i < 30;i++)//uzupelnianie tablicy do zapisu binarnego 
	{
		tablica[i] = i+10;
	}
	zapisz_liczby_bin("binarnie.txt", tablica);
	odczyt_liczby_bin("binarnie.txt", tablica1);
	for (int i = 0;i < 30;i++) {//sprawdzanie czy tablica nam sie odczyta³a
		cout << tablica1[i] << endl;
	}
}



Program.exe aaa 123 ttt X

int main(int argc, const char* argv[])
{
	//ofstream zapis("testowy.txt");
	cout << argc << endl;
	for (int i = 0;i < argc; i++)
		//zapis << i << argv[i] << endl;
		cout << i << argv[i] << endl;



}

zad inne 
	ofstream out;
	out.open("testowy_plik.txt");
	if (!out.is_open())
	{
		cerr << "nie otworzyl sie";
		return 1;
	}
	out<<"hello world"<<endl;
	out.close();


	*/

