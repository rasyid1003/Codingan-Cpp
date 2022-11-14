#include <iostream>

 
using namespace std;

int main()
{
  int pilihan,jumlah_deret,i,j = 0;
  char ulang,aldi[50];
  string nama, npm, kelas, jurusan,matakuliah;
  FILE *fp;
  fp=fopen("aldi.txt", "w+");

  do
  {
    cout << "------------------------------"        << endl;
    cout << "         MASUKAN MENU         "        << endl;
    cout << "------------------------------"        << endl;
    cout << "1. Kalkulator                 "        << endl;
    cout << "2. Matrix {3x3}               "        << endl;
    cout << "3. Segitiga Siku-Siku         "        << endl;
    cout << "4. Operasi menulis Data       "        << endl;
    cout << "5. Keluar                     "        << endl;
    cout << "Masukan Menu [1-5]:           "        << endl;
    cout << endl;
 
    cout << "Masukan Pilihan anda: ";
    cin >> pilihan;
 
    switch(pilihan){
    case 1:
        cout << "          Kalkulator Sederhana          " << endl;
        cout << "----------------------------------------" << endl;
        cout << endl;
        
        int pilihan;
        float num1, num2;
        
        cout << "1. Penjumlahan"<< endl;
        cout << "2. Pengurangan"<< endl;
        cout << "3. Perkalian"  << endl;
        cout << "4. Pembagian"  << endl;
        cout << "5. Modulus"    << endl;
        cout << endl;
        
        cout << "Input pilihan operasi: ";
        cin >> pilihan;
        cout << "Angka pertama: ";
        cin >> num1;
        cout << "Angka kedua: ";
        cin >> num2;
        cout << endl;
 
  switch (pilihan) {
   case 1:
     cout << "Hasil dari " << num1 << " + " << num2 << " = " << num1+num2;
     break;
   case 2:
     cout << "Hasil dari " << num1 << " - " << num2 << " = " << num1-num2;
     break;
   case 3:
     cout << "Hasil dari " << num1 << " * " << num2 << " = " << num1*num2;
     break;
   case 4:
     cout << "Hasil dari " << num1 << " / " << num2 << " = " << num1/num2;
     break;
   case 5:
     cout << "Hasil dari " << num1 << " % " << num2 << " = " << 
             (int)num1 % (int)num2;
     break;
   default :
     printf("Maaf, pilihan menu tidak tersedia");
  }
        break;
    case 2:
        int M[4][5];
	    printf("\n\naldi Syahputra H - 50421107 \n\n");
	
        for(int a=0;a<3;a++){
            for(int j=0; j<3; j++){
                printf("k[%d][%d] = ",a,j);
                scanf("%d",&M[a][j]);
            }
            printf("\n\n");
        }
        for (int a=0; a<3; a++){
            for (int j=0; j<3; j++){
                printf("%d ", M[a][j]);
            }
            printf("\n");
        }
        break;

    case 3:
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
        
         
    case 4:
    for (j=0; j<3; j++){
        printf ("masukkan data ke %i : ", j+1);
        scanf ("%s", &aldi);
        fprintf(fp, "%s\n", aldi);
    }
    fclose(fp);

    printf("\n\n Data berhasil dimasukkan");
    break;
    
    case 5:
        cout << "---------------------------------------------" << endl;
        cout << "                   *SIUUUUU*                 " << endl;
        cout << "---------------------------------------------" << endl;
        return 0;
    break;
    default:
        cout << "Menu tidak ada" << endl;
    }
    cout << endl;
 
    cout << "Yakin Mau Ke Menu (y/t)? ";
    cin >> ulang;
    cout << endl;
  }
  while (ulang!= 't');
 
  cout << "==============";
  cout << "      Ok :)   ";
  cout << "==============";
  cout << endl;
  return 0;
}
