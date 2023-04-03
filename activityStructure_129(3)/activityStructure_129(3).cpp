#include <iostream>

using namespace std;
struct AlamatDetail
{
	char desa[20];
	char kota[20];

};

struct Mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;

};

int main() {
	
	Mahasiswa mhs[3];

	for (int  i = 0; i < 3; i++)
	{
		cout << "masukkan Nim: ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukkan Nama: ";
		cin.getline(mhs[i].nama, 20);
		cout << "Masukkan Alamat: " << endl;
		cout << "\tNama desa: ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tNama kota: ";
		cin.getline(mhs[i].alamat.kota, 20);
		cout << "Masukkan umur: ";
		cin.ignore(1, '\n');

	}
	for (int i = 0; i < 3; i++)
	{

	}
}