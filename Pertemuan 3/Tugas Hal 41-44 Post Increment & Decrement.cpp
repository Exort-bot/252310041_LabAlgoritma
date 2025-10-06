#include <iostream> //header untuk melakukan operasi input dan output
using namespace std; // untuk mempermudah dalam setiap barisnya kode baru (tidak perlu memakai std:: pada setiap baris)
int main() { //fungsi utama yang akan dijalankan pada pertama kali dalam program
	int a = 10, b = 5; // mendeklarasikan variabel a dan b

	//clrscr();
	
	printf("Nilai A =%d",a); // menampilkan nilai a
	// %d akan digantikan menjadi nilai variabel a
	printf("\nNilai A++ = %d", a++); // menampilkan nilai a yang sudah di tambah (post-increment yaitu nilai a tampil dlu baru di tambah) A = 10
	// %d akan digantikan menjadi nilai variabel a
	printf("\nNilai A = %d",a); // menampilkan  nilai a yang udah di tambah (karna dia dipanggil lagi jdinya nilainya berubah menjadi 11) A = 11
	// %d akan digantikan menjadi nilai variabel a
	printf("\nNilai B = %d",b); // menampilkan nilai b
	// %d akan digantikan menjadi nilai variabel a
	printf("\nNilai B-- = %d",b--); // menampilkan nilai b yang sudah dikurang (post-decrement yaitu nilai b di tampilkan dlu baru dikurang) B = 5
	// %d akan digantikan menjadi nilai variabel a
	printf("\nNilai B = %d",b); // menampilkan nilai b yang sudah di kurang (karna si b dipanggil lagi maka nilai nya berubah menjadi 4) B = 4
	// %d akan digantikan menjadi nilai variabel a
		getchar; // untuk menaham tampilan program
		}
