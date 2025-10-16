#include<iostream>
using namespace std;

int main()
{
	string a;
	float b, c, d, e;
	cout<<"Nama Siswa: ";
	cin>>a;

	cout<<"\nNilai Pertandingan I: ";
	cin>>b;

	cout<<"Nilai Pertandingan II: ";
	cin>>c;

	cout<<"Nilai Pertandingan III: ";
	cin>>d;

	e=(b+c+d)/3;
	cout<<"rata rata nilai "<<a<<" adalah "<<e<<",";

	if(e>=85){
		cout<<" Ia mendapatkan Hadiah komputer core i5";
	} else if(e>=70){
		cout<<" Ia mendapatkan Hadiah Uang Sebesar Rp2.500.000";
	} else if(e<70){
		cout<<" Ia mendapatkan hadiah hiburan";
	}
  return 0;
}
