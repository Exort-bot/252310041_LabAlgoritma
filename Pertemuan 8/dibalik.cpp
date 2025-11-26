#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char kalimat[]="KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
	int panjang=strlen(kalimat);

	cout<<"kalimat terbalik dari KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN adalah "<<endl;
	for (int i=panjang-1; i>=0;i--){
		cout<<kalimat[i];
	}
cout<<endl;
}
