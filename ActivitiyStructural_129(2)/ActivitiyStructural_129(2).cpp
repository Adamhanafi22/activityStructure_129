#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;

}; 

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;


};

int main()
{
	Mahasiswa mhs; 

	cout << "masukkan Nim: ";
	cin >> mhs.nim;
	cout << "Masukkan Nama: ";
	cin >> mhs.nama;
	cout << "Masukkan Alamat: " << endl;
	cout << "\tNama desa: ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota: ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur: ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\nNdesa : " << mhs.alamat.desa;
	cout << "\nNkota : " << mhs.alamat.kota;
	cout << "\nUmur : " << mhs.umur;


}