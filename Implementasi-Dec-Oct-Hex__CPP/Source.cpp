#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main() {
	int nilai;

	cout << "Masukkan Nilai  : "; cin >> nilai;

	cout << "Nilai Awal            = " << nilai << endl;
	cout << "Nilai ke Octal        = " << oct << nilai << endl;
	cout << "Nilai ke Hexadesimal  = " << hex << nilai << endl;
	cout << "Nilai ke Desimal      = " << dec << nilai << endl;

	_getch();
	return 0;
}