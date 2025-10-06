#include <iostream>
using namespace std;

int main() {
	// inisiasi variabel
	
	int x=50;
	
	int a,b,c,d,e;

	//proses

	a= x>5+5; // a = 50 > 10 = true -> 1 karena 50 lebih besar dari 10
	b= x>100; // b = 50 > 100 = false -> 0 karena 50 lebih kecil dari 100
	c= a && b; // c = 1 dan 0 = false -> 0 karena operator "and" harus true 2 2 nya
	d= a||b; // d = 1 dan 0 = true -> 1 karena operator "or" akan menghasilkan nilai true kalau terdapat operasi yang bernilai 1 atau true
	e=!(c); // e = 1 = true -> 1 karena variabel c = 0 yang dianggap false di ubah memakai "not" menjadi true yang intinya e adalah kebalikan dari c (karena c salah maka di e jadi benar)
	
	// output berupa 1 (benar) dan 0 (salah)

	cout<<"\nNilai a = x > 5 + 5 = " << a << endl; // disini adalaah output dari nilai a
	cout<<"\nnilai b = x > 100 = " << b << endl; // disini adalaah output dari nilai b
	cout<<"\nNilai c = a && b = " << c << endl; // disini adalaah output dari nilai c
	cout<<"\nNilai d = a || b = " << d << endl; // disini adalaah output dari nilai d
	cout<<"\nNilai e = !(c) = " << e << endl; // disini adalaah output dari nilai e

	getchar(); // untuk menahan tampilan dan jika ingin di selesaikan harus menekan enter
}
