#include <iostream>
#include <math.h>

using namespace std;

double luas_lingkaran(double);
double keliling_lingkaran(double);
double volume_tabung(double, double);

int main()
{
    char ulang;
    int menu;
    double jari, tinggi;

    do
    {
        cout << "Hitung Lingkaran" << endl;
        cout << "Al Ahmad Syah Huud Sharifudin" << endl;
        cout << "124200035" << endl;
        cout << endl;
        cout << " 1. Luas Lingkaran" << endl;
        cout << " 2. Keliling Lingkaran" << endl;
        cout << " 3. Volume Tabung" << endl;
        cout << endl;
        cout << "Pilih: ";
        cin >> menu;
        cout << endl;

        switch(menu)
        {
            case 1:
                cout << "Jari-jari: ";
                cin >> jari;
                cout << endl;
                cout << "Luas Lingkaran: " << luas_lingkaran(jari) << endl;
                break;
            case 2:
                cout << "Jari-jari: ";
                cin >> jari;
                cout << endl;
                cout << "Keliling Lingkaran: " << keliling_lingkaran(jari) << endl;
                break;
            case 3:
                cout << "Jari-jari: ";
                cin >> jari;
                cout << "Tinggi   : ";
                cin >> tinggi;
                cout << endl;
                cout << "Volume Tabung: " << volume_tabung(jari, tinggi) << endl;
                break;
            default:
                cout << "Opsi tidak tersedia!" << endl;
        }

        cout << endl;
        cout << "Ulangi program? [y/n]: ";
        cin >> ulang;
        cout << endl;

    } while(ulang == 'Y' || ulang == 'y');

    return 0;
}

double luas_lingkaran(double jari)
{
    return M_PI * jari * jari;
}

double keliling_lingkaran(double jari)
{
    return 2 * M_PI * jari;
}

double volume_tabung(double jari, double tinggi)
{
    return luas_lingkaran(jari) * tinggi;
}
