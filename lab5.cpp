#include <iostream>
using namespace std;

void zadanie1();
void zadanie2();
void zadanie3(int tab[], int n);
void srednia(int tab[], int n);
void minimum(int tab[], int n);
void zadanie4(int tab[], int n, int x);

int main()
{
	zadanie1();
	zadanie2();
	const int n = 10;
	int tab[n];
	zadanie3(tab, n);
	srednia(tab, n);
	minimum(tab, n);
	int x;
	cout << "podaj ilosc liczb do wpisania: ";
	cin >> x;
	zadanie4(tab, n, x);

	
}

//zadanie 1
void zadanie1() {
	cout << "Zadanie 1" << endl;
	int tab[10];
	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe: ";
		cin >> tab[i];
	}
	cout << "Tablica w odwrotnej kolejnosci: ";
	for (int i = 9; i >=0; i--) {
		cout << tab[i] << " ";
	}
}

//zadanie 2
void zadanie2() {
	cout << "Zadanie 2" << endl;
	cout << "Podaj liczbe rozmiar: ";
	int n;
	cin >> n;
	int* tab = new int[n];
	tab[0] = 0;
	tab[1] = 1;
	for (int i = 2; i < n; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	cout << "Ciag Fibonacciego: ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	
}

void zadanie3(int tab[], int n) {
	for (int i = 0; i < n; i++) {
		tab[i] = rand() % 100;
	}
	cout << "Tablica losowych liczb: ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
}

void srednia(int tab[], int n) {
		int suma = 0;
	for (int i = 0; i < n; i++) {
		suma += tab[i];
	}
	cout << endl << "Srednia: " << suma / 10 << endl;
}

void minimum(int tab[], int n) {
	int min = tab[0]; 
	for (int i = 0; i < n; i++) {
		if (tab[i] < min) {
			min = tab[i];
		}
	}
	cout << "Minimum: " << min << endl;
}

void zadanie4(int tab[], int n, int x) {
	for (int i = 0; i < n; i++) {
		if (i < x) {
			cin >> tab[i];
		}
		else {
			tab[i] = 0;
		}
	}
	cout << "Tablica: ";
	for (int i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
}





