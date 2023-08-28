#include <iostream>
#include <iomanip>
using namespace std;
main ()

{
 int i, s;
 char nama[5][20];
 string nilai1[5];
 string nilai2[5];
 string nilai3[5];
 double hasil[5];

    cout <<"---------------------------------------------------------------------------------\n";
    cout <<"----------------- [ Program Pembelian Tiket Pesawat PT.LOSKIT ]-----------------\n";
    cout <<"\n";
    cout<<"==================---| Daftar Harga Tiket Pesawat PT.LOSKIT |---================== \n";
    cout<<"\n==================================================================================|\n";
    cout<<"|  Maskapai    |       Destinasi    | Ekonomi(PPN 2)|Bisnis(PPN 5)|Eksekutif(PPN 10)|\n";
    cout<<"==================================================================================  |\n";
    cout<<"    Rose Air         London,New York         50            70           120         |\n";
    cout<<"   Tulips Air        Ohio,Saint John         70            90           160         |\n";
    cout <<"---------------------------------------------------------------------------------\n";
    cout<<"=================================================================================== |\n";

    cout<<"Masukkan Jumlah Tiket :\t";
 cin >> s;
 for (i = 1; i <= s; i++)

 {
  cout << "Data Ke - " << i << endl;
  cout << "Nama Maskapai : "; cin >> nama[i];
  cout << "Destinasi : "; cin >> nilai1[i];
  cout << "Kelas : "; cin >> nilai2[i];
  cout << endl;
 }
 cout << "---------------------------------" << endl;
 cout << "No. Nama    Destinasi     Kelas" << endl;
 cout << "---------------------------------" << endl;

 for (i = 1; i <= s; i++)
 {
  cout << setiosflags (ios::left) << setw (4) << i;
  cout << setiosflags (ios::left) << setw (6) << nama[i];
  cout << setprecision (2) << "     " << nilai1[i];
  cout << setprecision (4) << "     " << nilai2[i]<< endl;
 }
  cout << "---------------------------------";
  cout << "------" << endl;

 return 0;
}
