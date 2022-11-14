#include <iostream>
 
using namespace std;
//Faris Rasyid
//50421483
//2IA22
int main()
{
  int pilihan,jumlah_deret,i;
  char ulang;
  string nama, npm, kelas, jurusan,matakuliah;

  do
  {
    cout << "==============================" << endl;
    cout << "<<       MASUKAN MENU       >>" << endl;
    cout << "==============================" << endl;
    cout << "1. Biodata                     " << endl;
    cout << "2. Deret Bilangan Ganjil                  " << endl;
    cout << "3. Matrix {3x4}                 " << endl;
    cout << "4. Segitiga Siku-Siku               " << endl;
    cout << "5. Keluar                     " << endl;
    cout << "Pilihan Menu [1-5]:                     " << endl;
    cout << endl;
 
    cout << "Masukan Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "--------------------BIODATA--------------------\n" << endl;
        cout << "Nama           : ";
        scanf("%s", &nama);
        cout << "NPM            : ";
        cin  >> npm;
        cout << "Kelas          : ";
        cin  >> kelas;
        cout << "jurusan        : ";
        cin  >> jurusan;
        cout << "Mata Kuliah    : ";
        cin  >> matakuliah;
        cout << "\n";

        cout << "---------------BIODATA MAHASISWA---------------\n";
        printf("\tNama\t\t:%s\n", &nama);
        cout << "\tNPM\t\t:"           << npm << endl;
        cout << "\tKelas\t\t:"         << kelas << endl;
        cout << "\tjurusan\t\t:"       << jurusan << endl;
        cout << "\tMata Kuliah\t:"     << matakuliah <<endl;
        cout << "------------------------------------------------";
        break;
    case 2:
        cout << "##  Program C++ Deret Angka Ganjil  ##" << endl;
        cout << "=====================================" << endl;
        cout << endl;
        
        
        cout << "Jumlah deret yang diinginkan: ";
        cin >> jumlah_deret;
        
        for (i=1;i<=jumlah_deret;i++) {
        cout << (i * 2) -1 << " ";
        }
        break;

    case 3:
        int M[4][5];
	    printf("\n\nFaris Rasyid - 50421483 \n\n");
	
        for(int a=0;a<3;a++){
            for(int j=0; j<4; j++){
                printf("k[%d][%d] = ",a,j);
                scanf("%d",&M[a][j]);
            }
            printf("\n\n");
        }
        for (int a=0; a<3; a++){
            for (int j=0; j<4; j++){
                printf("%d ", M[a][j]);
            }
            printf("\n");
        }
    break;
        
         
    case 4:
        int  i, j, baris;
        cout << "Segitiga Bintang Siku Siku\n";
        cout << "Masukkan jumlah baris:  ";
        cin >> baris;
        for (i = 1; i <= baris; i++)
        {
            for (j = 1; j <= i; j++)
            {
            cout << "* ";
            }
            cout << "\n";
        }
    break;
    
    case 5:
        cout << "=============================================" << endl;
        cout << "              KAMU Nanyeaaaa?                " << endl;
        cout << "=============================================" << endl;
        return 0;
    break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "Kamu Yakin Mau Ke Menu (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << "==============";
  cout << "Terimakasih :)";
  cout << "==============";
  cout << endl;
  return 0;
}
