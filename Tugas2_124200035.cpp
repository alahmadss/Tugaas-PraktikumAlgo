#include <iostream>
using namespace std;

main(){
	int umurayah,umuribu,umuranak1,umuranak2;
	//int umur;
	int totaltagihan;
	int biayaanak = 15000, biayaremaja = 20000, biayadewasa = 30000;
	float kategori1,kategori2,kategori3,kategori4;
	
	
	cout<<"Umur Ayah   = ";cin>>umurayah;
	if(umurayah <= 12){
		kategori1 = biayaanak;
	}else if(umurayah >12 && umurayah<20){
			kategori1 = biayaremaja;
	}
	else{
		kategori1 = biayadewasa;
	}
	cout<<endl;
	cout<<"Umur Ibu    = ";cin>>umuribu;
	if(umuribu <= 12){
		kategori2 = biayaanak;
	}else if(umuribu >12 && umuribu<20){
			kategori2 = biayaremaja;
	}
	else{
		kategori2 = biayadewasa;
	}
	cout<<endl;
	cout<<"Umur Anak 1 = ";cin>>umuranak1;
	if(umuranak1 <= 12){
		kategori3 = biayaanak;
	}else if(umuranak1 >12 && umuranak1<20){
			kategori3 = biayaremaja;
	}
	else{
		kategori3 = biayadewasa;
	}
	cout<<endl;
	cout<<"Umur Anak 2 = ";cin>>umuranak2;
	if(umuranak2 <= 12){
		kategori4 = biayaanak;
	}else if(umuranak2 >12 && umuranak2<20){
			kategori4 = biayaremaja;
	}
	else{
		kategori4 = biayadewasa;
	}
	cout<<endl;
	
	totaltagihan = (kategori1*30)+(kategori2*30)+(kategori3*30)+(kategori4*30);
	
	cout<<"Tagihan satu bulan adalah Rp."<<totaltagihan;
}
