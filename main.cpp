#include <iostream>

using namespace std;

int main()
{
    double i,t,r,b,k;
    string nama;
    cout << "================================================================================" << endl;
    cout << "|||||||||||||||||||||PROGRAM PENGUKUR BERAT BADAN IDEAL|||||||||||||||||||||||||" << endl;
    cout << "================================================================================" << endl;
    cout << "|  Masukkan Nama Panggilan Anda         :    ";
    getline(cin,nama);
    cout << "|  Masukkan Tinggi Badan Anda Saat Ini  :    ";
    cin >> t ;
    cout << "|  Masukkan Berat badan Anda Saat Ini   :    ";
    cin >> b ;
    i=t-100;
    r=b-i;
    k=i-b;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Berat Ideal Badan Anda Adalah   =  " <<i<< " kg"<<endl;
    cout << endl;
    if (b>i)
        cout << "Maka Berat Badan Anda Telalu berat sebanyak  " << r << " kg"<<endl;
     if (b<i)
        cout << "Maka Berat Badan Anda Kurang berat sebanyak  " << k << " kg"<<endl;
     if (b==i)
    cout << "SELAMAT BERAT BADAN ANDA SUDAH IDEAL, Yaitu  " << i << " kg"<<endl;
    return 0;
}
