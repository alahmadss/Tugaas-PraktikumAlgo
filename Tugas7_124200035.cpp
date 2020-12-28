#include <iostream>
using namespace std;


main (){
	int x,nilai[x],selisih[x],selisihmax;
	float max,min,rata,total=0;
	
	cout<<"Masukan banyak angka : ";
	cin>>x;
	
	for (int i=0;i<x;i++){
	cout<<"Angka ke-"<<i+1<<": ";cin>>nilai[i];
	total += nilai[i];
}

	cout<<endl;
	cout<<"Hasil"<<endl;
	cout<<endl;
	cout<<"Deret        : ";
	for (int i=0;i<x;i++){
	cout<<nilai[i]<<" ";
}
	
		
	cout<<endl;
	for(int i=0;i<x;i++){
	if(nilai[i]>max){
	max=nilai[i];
	}
}
	cout<<"Maksimum     : "<<max;
	cout<<endl;
	min=nilai[0];
	for(int i=0;i<x;i++){
	if(nilai[i]<min){
	min=nilai[i];
	}
}

cout<<"Minimum      : "<<min;
cout<<endl;

rata=total/x;

cout<<"Rata-Rata    : "<<rata;
cout<<endl;

for(int i=0;i<x;i++){
	
		selisih[i]=nilai[i]-nilai[i+1];
		if(selisih[i]<0){
		selisih[i]=selisih[i]*-1;
		}else if(x<=1){
		selisih[i]=0;
	}
}

		selisihmax=selisih[0];
		for(int i=0;i<x-1;i++){
		if(selisihmax<selisih[i]){
		selisihmax=selisih[i];
	}
}

cout<<"Selisih Max   : "<<selisihmax;


}

