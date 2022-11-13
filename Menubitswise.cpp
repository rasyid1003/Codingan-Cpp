#include <iostream> 
using namespace std;

int main()
{
    //farisrasyid
    //50421483
    int pilihan; 
    int a, b, temp1, temp2, temp3, temp4; 
    int i, j, baris;

    cout<<"Menu Nama kalian"<<endl; 
    cout<<"1. Operasi Bitwise"<<endl; 
    cout<<"2. Segitiga Siku - Siku "<<endl; 
    cout<<"Masukan Pilihan : "; 
    cin>>pilihan;

    switch(pilihan){
        case 1:
            cout<<"------Operasi Bitwise-----"<<endl; 
            cout << "Masukkan bilangan 1: "; 
            cin >> a; 
            cout << "Masukkan bilangan 2: "; 
            cin >> b; 
            cout<< "----------Hasil ----------"<<endl; 
            temp1 = a&b; 
            temp2 = a|b; 
            temp3 = a^b ; 
            temp4 = ~a; 
            cout<<"Operasi AND :"<<temp1<<endl; 
            cout<<"Operasi OR : "<<temp2<<endl; 
            cout<<"Operasi XOR : "<<temp1<<endl; 
            cout<<"Operasi NOT a : "<<temp4<<endl;

            break; 
        case 2:
            cout<<"----- Segitiga Bintang ------"<<endl; 
            cout << "Masukkan jumlah baris: "; 
            cin >> baris;//baris =2 
            for (i = 1; i <= baris; i++)
            {
                for(j = 1; j <= i; j++)//{=3
                {
                    cout << "* ";
                }
                cout << "\n";
              }       
            break; 
        default:
            cout << "Pilihan Tidak Ada!!"<< endl;
    }
        
    return 0;
}
