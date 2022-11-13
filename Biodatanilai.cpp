#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "====================================" << endl;
  cout << "##         Data Mahasiswa         ##" << endl;
  cout << "====================================" << endl;
  cout << endl;
 
  string nama, npm, kls, jurusan,kul,nilai;
 
  cout << "Nama Mahasiswa: ";
  getline(cin,nama);
 
  cout << "NPM: ";
  getline(cin,npm);
 
  cout << "KELAS: ";
  getline(cin,kls);
 
  cout << "JURUSAN: ";
  getline(cin,jurusan);
  cout << "MATA KULIAH: ";
  getline(cin,kul);

  cout << "MASUKAN NILAI: ";
  getline(cin,nilai);
 
 
 
  cout << endl;
 
  cout << "# Data Mahasiswa #"<< endl;
  cout << "=================="<< endl;
  cout << "Nama: "          << nama      << endl;
  cout << "NPM: "           << npm       << endl;
  cout << "KELAS: "         << kls       << endl;
  cout << "JURUSAN: "       << jurusan   << endl;
  cout << "MATAKULIAH: "       << kul   << endl;
  cout << "MASUKAN NILAI: "       << nilai   << endl;
