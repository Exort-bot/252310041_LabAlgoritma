#include <iostream>
using namespace std;

int main() {
	int n;

	cout<<"Masukkan Bilangan: ";
	cin>>n;
	
	if (n<2) {
		cout<<"Bukan Termasuk bilangan prima";
	}

	for (int i=2; i < n; i++) {
		if(n%i==0){
			cout<<"Bukan termasuk bilangan prima";
			return 0;
		}
	}
	cout<<"Termasuk bilangan prima"<<endl;
}
