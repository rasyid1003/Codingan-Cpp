#include <iostream>
 
using namespace std;
//farisrasyid
//50421483
//2IA22
int main()
{
  int pilihan;
  char ulang;
  do
  {
    cout << "==============================" << endl;
    cout << "<<       MASUKAN MENU       >>" << endl;
    cout << "==============================" << endl;
    cout << "1. Matrix                     " << endl;
    cout << "2. Segitiga                   " << endl;
    cout << "3. Tentang Saya               " << endl;
    cout << "4. Keluar                     " << endl;
    cout << endl;
 
    cout << "Masukan Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        int M[4][5];
	    printf("\n\nFaris Rasyid - 50421483 \n\n");
	
        for(int a=0;a<4;a++){
            for(int j=0; j<5; j++){
                printf("k[%d][%d] = ",a,j);
                scanf("%d",&M[a][j]);
            }
            printf("\n\n");
        }
        for (int a=0; a<4; a++){
            for (int j=0; j<5; j++){
                printf("%d ", M[a][j]);
            }
            printf("\n");
        }
        break;
    case 2:
        int space, rows;
 
    cout <<"Masukan Jumlah Baris: ";
    cin >> rows;
 
    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }
 
        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
        break;
    case 3:
        cout << "==============================" << endl;
        cout << "         Tentang Saya         " << endl;
        cout << "==============================" << endl;
        cout << "                              " << endl;
        cout << "Nama   :Faris Rasyid"  << endl;
        cout << "Kelas  :2IA22"         << endl;
        cout << "Npm    :50421483"      << endl;
        
        break;
    case 4:
        cout << "=============================================" << endl;
        cout << "         TerimaKasih Sudah Berkunjung        " << endl;
        cout << "=============================================" << endl;
        return 0;
    break;
    default:
        cout << "Menu tidak tersedia" << endl;
    }
    cout << endl;
 
    cout << "Ingin memilih menu lain (y/t)? ";
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