
#include <iostream>

using namespace std;

int main()
{
    double i,t,r,b,k,u;
    int v,a;
    char x;
    string nama;
    do {
    cout << endl;
    cout << "========================================================================================================================" << endl;
    cout << "|                                              IDEAL WEIGHT GAUGE PROGRAM                                              |" << endl;
    cout << "========================================================================================================================" << endl;
    cout << "***                                      *** PASTIKAN CAPSLOCK ANDA MENYALA ***                                      ***" << endl;
    cout << "************************************************************************************************************************" << endl;
    cout << endl;
    cout << " MASUKKAN KETEGORI :" << endl;
    cout << "           1. LAKI LAKI REMAJA-DEWASA" << endl;
    cout << "           2. WANITA REMAJA-DEWASA" << endl;
    cout << "           3. ANAK-ANAK 1-10 TH " << endl;
    cout << "           4. BAYI 0-12 BULAN " << endl;
    cout << "           5. IBU HAMIL " << endl;
    cin >> a ;
    if (a == 1){
        cout << "***********************************PENGUKURAN UNTUK LAKI LAKI REMAJA DAN DEWASA*************************************" << endl;
        cout << endl;
        cout << "|                                            MASUKKAN DATA DIRI ANDA                                               |";
        getline(cin,nama);
        cout << endl;
        cout << endl;
        cout << "|  Masukkan Nama                        :    ";
        getline(cin,nama);
        cout << endl;
        cout << "|  Masukkan Tinggi Badan Anda Saat Ini  :    ";
        cin >> t ;
        cout << endl;
        cout << "|  APAKAH ANDA MENGETAHUI BERAT BADAN ANDA (Y/T)    ";
        cin >> x ;
        if (x=='t'||x=='T'){
            i=(t-100)-((t-100)*10/100);
            cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
            cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
            goto akhir;
        }
        cout << endl;
        cout << "|  Masukkan Berat badan Anda Saat Ini   :     ";
        cin >> b ;
        i=(t-100)-((t-100)*10/100);
        r=b-i;
        k=i-b;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
        cout << endl;
        if (b>i)
            cout << "Maka Berat Badan Anda Telalu berat sebanyak  " << r << " kg"<<endl;
            cout << endl;
        if (b<i)
            cout << "Maka Berat Badan Anda Kurang berat sebanyak  " << k << " kg"<<endl;
            cout << endl;
        if (b==i)
            cout << "SELAMAT BERAT BADAN ANDA SUDAH IDEAL, Yaitu  " << i << " kg"<<endl;
            cout << endl;
        cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
        cout << endl;
    }
    if (a == 2){
        cout << "***********************************PENGUKURAN UNTUK WANITA REMAJA DAN DEWASA****************************************" << endl;
        cout << endl;
        cout << "|                                            MASUKKAN DATA DIRI ANDA                                               |";
        getline(cin,nama);
        cout << endl;
        cout << endl;
        cout << "|  Masukkan Nama                        :    ";
        getline(cin,nama);
        cout << endl;
        cout << "|  Masukkan Tinggi Badan Anda Saat Ini  :    ";
        cin >> t ;
        cout << endl;
        cout << "|  APAKAH ANDA MENGETAHUI BERAT BADAN ANDA (Y/T)    ";
        cin >> x ;
        if (x=='t'||x=='T'){
            i=(t-100)-((t-100)*15/100);
            cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
            cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
            goto akhir;
        }
        cout << endl;
        cout << "|  Masukkan Berat badan Anda Saat Ini   :     ";
        cin >> b ;
        i=(t-100)-((t-100)*15/100);
        r=b-i;
        k=i-b;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
        cout << endl;
        if (b>i)
            cout << "Maka Berat Badan Anda Telalu berat sebanyak  " << r << " kg"<<endl;
            cout << endl;
        if (b<i)
            cout << "Maka Berat Badan Anda Kurang berat sebanyak  " << k << " kg"<<endl;
            cout << endl;
        if (b==i)
            cout << "SELAMAT BERAT BADAN ANDA SUDAH IDEAL, Yaitu  " << i << " kg"<<endl;
            cout << endl;
        cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
        cout << endl;
        }
    if (a == 3){
        cout << "***************************************PENGUKURAN UNTUK ANAK-ANAK 1-10 TAHUN***************************************" << endl;
        cout << endl;
        cout << "|                                           MASUKKAN DATA DIRI ANDA                                               |";
        getline(cin,nama);
        cout << endl;
        cout << endl;
        cout << "|  Masukkan Nama                        :    ";
        getline(cin,nama);
        cout << endl;
        cout << "|  APAKAH ANDA MENGETAHUI BERAT BADAN ANDA (Y/T)    ";
        cin >> x ;
        if (x=='t'||x=='T'){
            i=(2*u)+8;
            cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
            cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
            goto akhir;
        }
        cout << endl;
        cout << "|  Masukkan Berat badan Anda Saat Ini   :     ";
        cin >> b ;
        cout << endl;
        cout << "|  Masukkan Umur Anda Saat Ini          :     ";
        cin >> u ;
        i=(2*u)+8;
        r=b-i;
        k=i-b;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
        cout << endl;
        if (b>i)
            cout << "Maka Berat Badan Anda Telalu berat sebanyak  " << r << " kg"<<endl;
            cout << endl;
        if (b<i)
            cout << "Maka Berat Badan Anda Kurang berat sebanyak  " << k << " kg"<<endl;
            cout << endl;
        if (b==i)
            cout << "SELAMAT BERAT BADAN ANDA SUDAH IDEAL, Yaitu  " << i << " kg"<<endl;
            cout << endl;
        cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
        cout << endl;
        }
    if (a == 4){
        cout << "****************************************PENGUKURAN UNTUK BAYI 0 - 12 BULAN******************************************" << endl;
        cout << endl;
        cout << "|                                            MASUKKAN DATA DIRI ANDA                                               |";
        getline(cin,nama);
        cout << endl;
        cout << endl;
        cout << "|  Masukkan Nama                        :    ";
        getline(cin,nama);
        cout << endl;
        cout << "|  APAKAH ANDA MENGETAHUI BERAT BADAN ANDA (Y/T)    ";
        cin >> x ;
        cout << "|  Masukkan Usia Anda Saat Ini <BULAN>  :     ";
        cin >> u ;
        if (x=='t'||x=='T'){
            i=(u/2)+4;
            cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
            cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
            goto akhir;
        }
        cout << endl;
        cout << "|  Masukkan Berat badan Anda Saat Ini   :     ";
        cin >> b ;
        i=(u/2)+4;
        r=b-i;
        k=i-b;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
        cout << endl;
        if (b>i)
            cout << "Maka Berat Badan Anda Telalu berat sebanyak  " << r << " kg"<<endl;
            cout << endl;
        if (b<i)
            cout << "Maka Berat Badan Anda Kurang berat sebanyak  " << k << " kg"<<endl;
            cout << endl;
        if (b==i)
            cout << "SELAMAT BERAT BADAN ANDA SUDAH IDEAL, Yaitu  " << i << " kg"<<endl;
            cout << endl;
        cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
        cout << endl;
        }
    if (a == 5){
        cout << "********************************************PENGUKURAN UNTUK IBU HAMIL**********************************************" << endl;
        cout << endl;
        cout << "|                                            MASUKKAN DATA DIRI ANDA                                               |";
        getline(cin,nama);
        cout << endl;
        cout << endl;
        cout << "|  Masukkan Nama                        :    ";
        getline(cin,nama);
        cout << endl;
        cout << "|  Masukkan Tinggi Badan Anda Saat Ini  :    ";
        cin >> t ;
        cout << endl;
        cout << "|  APAKAH ANDA MENGETAHUI BERAT BADAN ANDA (Y/T)    ";
        cin >> x ;
        if (x=='t'||x=='T'){
            i=((t-100)-((t-100)*15/100))+(u*0.35);
            cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
            cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
            goto akhir;
        }
        cout << endl;
        cout << "|  Masukkan Berat badan Anda Saat Ini   :     ";
        cin >> b ;
        cout << endl;
        cout << "|  Masukkan Umur Kehamilan Anda (MINGGU):     ";
        cin >> u ;
        i=((t-100)-((t-100)*15/100))+(u*0.35);
        r=b-i;
        k=i-b;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Berat Ideal Badan Anda Adalah   =  "<< i <<" kg"<<endl;
        cout << endl;
        if (b>i)
            cout << "Maka Berat Badan Anda Telalu berat sebanyak  " << r << " kg"<<endl;
            cout << endl;
        if (b<i)
            cout << "Maka Berat Badan Anda Kurang berat sebanyak  " << k << " kg"<<endl;
            cout << endl;
        if (b==i)
            cout << "SELAMAT BERAT BADAN ANDA SUDAH IDEAL, Yaitu  " << i << " kg"<<endl;
            cout << endl;
        cout << " TERIMAKASIH TELAH BERKUNJUNG " <<nama;
        cout << endl;
        }
    akhir:
    cout << endl;
    cout << " APAKAH ANDA AKAN MENGUKUR BERAT BADAN LAGI " <<endl;
    cout << endl;
    cout << "(Y/T)"<< endl;
    cin >> x;
    }
    while( x=='Y'||x=='y' );

    cout << endl;
    return 0;
}
