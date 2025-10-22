#include<iostream>
using namespace std;

int main (){
	char ulang;

	do{ int bilangan, i=1, faktorial=1;
	cout<<"Masukkan bilangan: ";
	cin>>bilangan;

	while (i<=bilangan) {
		faktorial*= i;
		i++;
	}
	cout<<"Hasil "<<bilangan<<"! = "<<faktorial<<endl;
	cout<<"Ulangi? (Y/N): ";
	cin>>ulang;

	} while (ulang == 'y'|| ulang== 'Y');

return 0;
}
