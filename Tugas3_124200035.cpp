#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
	string username = "granblue";
	int pass, matakuliah;
	float a, b, c, sum_1, x, y, z, sum_2;
	
	cout << "-------------------------------------" << endl;
	cout << "Masukan Username : "; cin >> username;
	cout << "Masukan Password : "; cin >> pass;
	cout << "-------------------------------------" << endl;
	
	if (username == "granblue" && pass == 69420) {
		cout << "Login Berhasil" << endl;
	} else if (username != "granblue" && pass == 69420) {
		cout << "Username Anda Salah!" << endl;
		exit (0);
	} else if (username == "granblue" && pass != 69420) {
		cout << "Password Anda Salah!" << endl;
		exit (0);
	} else {
		cout << "Username dan Password Anda Salah!" << endl;
		exit (0);
	} 
	cout << endl;
	
	cout << "Input Nilai Mata Kuliah" << endl;
	cout << "\n1 Algoritma dan Pemrograman\n2 Kalkulus\n" << endl;
	cout << "Pilih : "; cin >> matakuliah;
	cout << endl;
	
	switch (matakuliah) {
		case 1 :
			cout << "Nilai Harian : "; cin >> a;
			cout << "Nilai UTS    : "; cin >> b;
			cout << "Nilai UAS    : "; cin >> c;
			cout << endl;
			
			sum_1 = (a + b + c) / 3;

			if (sum_1 >= 80) {
				cout << setprecision(2) << fixed << "Anda Lulus Algoritma dan Pemrograman dengan nilai " << sum_1;
			} else if (sum_1 < 80) {
				cout << setprecision(2) << fixed << "Anda Tidak Lulus Algoritma dan Pemrograman dengan nilai " << sum_1;
			}
			break;

		case 2 :
			cout << "Nilai Harian : "; cin >> x;
			cout << "Nilai UTS    : "; cin >> y;
			cout << "Nilai UAS    : "; cin >> z;
			cout << endl;

			sum_2 = (x + y + z) / 3;

			if (sum_2 >= 80) {
				cout << setprecision(2) << fixed << "Anda Lulus Kalkulus dengan nilai " << sum_2;
			} else if (sum_2 < 80) {
				cout << setprecision(2) << fixed << "Anda Tidak Lulus Kalkulus dengan nilai " << sum_2;
			} 
			break;
		default :
			matakuliah = 0;
			cout << "Input Anda Salah!" << endl;
		}
	return 0;
}
