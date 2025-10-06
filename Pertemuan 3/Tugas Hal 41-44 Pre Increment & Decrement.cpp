#include <iostream> //header untuk melakukan operasi input dan output
using namespace std; // untuk mempermudah dalam setiap barisnya kode baru (tidak perlu memakai std:: pada setiap baris)
int main() { //fungsi utama yang akan dijalankan pada pertama kali dalam program
	int a = 10, b = 5; // mendeklarasikan variabel a dan b

	//clrscr();
	printf("Nilai A = %d",a); // menampilkan nilai a = 10
	// %d akan digantikan menjadi nilai variabel a
	printf("\nNilai ++A = %d",++a);// menampilkan nilai ++A (pre-increment yaitu a ditambah dlu lalu ditampilkan
	// %d akan digantikan menjadi nilai variabel a
    printf("\nNilai A = %d",a); // menampilkan nilai a yang sudah di tambah menjadi 11
	// %d akan digantikan menjadi nilai variabel a
    printf("\nNilai B = %d",b); // menampilkan nilai b
	// %d akan digantikan menjadi nilai variabel a
    printf("\nNilai --B = %d",--b); // menampilkan nilai --B (pre-decreament yaitu b dikurang dlu lalu di tampilkan
	// %d akan digantikan menjadi nilai variabel a
    printf("\nNilai B = %d",b); // menampilkan nilai b yang sudah di kurang b=4
	// %d akan digantikan menjadi nilai variabel a
    getchar(); // untuk menahan tampilan layar sampai user menekan enter

	return 0; // menandakan program sudah benar atau tidak memiliki error
}
