#include <iostream>
#include <iomanip>
using namespace std;
main () {
	int hasil,n,m,operasi;
	
	
	cout<<"Al Ahmad Syah Huud Sharifudin"<<endl;
	cout<<"124200035"<<endl;
	cout<<"=============================="<<endl;
	cout<<endl;
	
	cout<<"1.Perkalian"<<endl;
	cout<<"2.Perpangkatan"<<endl;
	cout<<"Pilih = ";cin>>operasi;
	switch(operasi){
		case 1 :
			cout<<"Input angka N = ";cin>>n;
			cout<<endl;
			cout<<"Input angka M = ";cin>>m;
			cout<<endl;
			
			hasil = 0;
			for (int ulang = 1; ulang<=m; ulang++){
				hasil += n;
				if(ulang !=m){
					cout<<n<<"+";
				}else{
					cout<<n<<"="<<hasil;
				}
			}
		break;
		
		case 2 :
			cout<<"Input angka N = ";cin>>n;
			cout<<endl;
			cout<<"Input angka M = ";cin>>m;
			cout<<endl;
			
			hasil=1;
			
			for(int ulang=1; ulang<=m; ulang++){
				hasil *=n;
				if(ulang !=n){
					cout<<n<<"x";
				}else{
					cout<<setprecision (999999)<<n<<"="<<hasil;
				}
			}
		break;
		
		default :
			cout<<"Salah input!";
		break;
	}
	cout<<endl;
	cout<<endl;
	cout<<"Terima kasih ya :)";
}
