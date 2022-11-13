
#include <iostream>
#include <string>
using namespace std;
int main(){
    //nama:Faris Rasyid
    //Kelas;2IA22
    //Npm:50421483
    int p,l,t,v; // Deklarasi variabel panjang,lebar,tinggi,volume
    string dimensi;

    cout<<"      MENGHTUNG VOLUME BALOK      "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukan Panjang : "; 
    cin>>p;
    cout<<"Masukan Lebar   : ";
    cin>>l;
    cout<<"Masukan Tinggi  : ";
    cin>>t;
    cout<<"Masukan Satuan (mm,cm,m) Dimensi Balok : ";
    cin>>dimensi;
    cout<<endl;
    
    v=p*l*t;
    
    cout<<"Volume Balok    = "<<v<<" "<<dimensi<<"3"; //Tampilkan hasil
    return 0;

}
