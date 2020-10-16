#include <iostream>
using namespace std;

main(){
	char nama[20];
	int nim, uts, uas,nilaiakhir;
	
	cout<<"Nama :";cin.getline(nama,sizeof(nama));
	cout<<"NIM  :";cin>> nim;
	cout<<"UTS  : ";cin>> uts;
	cout<<"UAS  :";cin>> uas;
	cout<<endl;
	
	nilaiakhir = (uts+uas)/2;
	cout<<"Hai, Nama saya"<<nama<<"NIM "<<nim<<endl;
	cout<<"Nilai akhir saya "<<nilaiakhir<<endl;
}
