#include <iostream> 
#include <stdio.h> 
using namespace std;
int main ()
{
    //nama Lengkap:farisrasyid
    int panjang, lebar, tinggi,x;
    cout<<"====Volume balok====="<<endl;
    cout<<"Panjang\t: "; 
    cin>> panjang;
    cout<<"Lebar\t: ";
    cin>> lebar;
    cout<<"Tinggi\ta: "; 
    cin>> tinggi;
    cout<<"----Hasil Nama----\n";
    cout<<"Rumus\t- P X L X T"<<endl; 
    cout<<"Hitung\t= "<<panjang<<" X "<<lebar<<" X "<<tinggi<<endl; 
    x = panjang*lebar*tinggi; 
    cout<<"Hasil\t= "<<x<<endl;
    cout<<"======================";

}
