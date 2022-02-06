#include <iostream>
using namespace std;

int main(){

  float L, K, r, d;
  const float phi = 3.14;
  
  cout << "=================================\n";
  cout << "Menghitung Luas Lingkaran\n";
  cout << "Menghitung Keliling Lingkaran\n";
  cout << "=================================\n\n";

  cout << "Masukkan panjang jari-jari lingkaran \t: ";
  cin >> r;
  cout << "Masukkan panjang diameter lingkaran \t: ";
  cin >> d;

  L = phi * r * r;
  K = phi * d;
  
  cout << "\n";
  
  cout << "Luas lingkaran : " << endl;
  cout << "L = phi x r x r = (" << phi << " x " << r<< " x "<< r <<")" << endl;
  cout << "L = " << L << " cm " << endl;
  cout << "Jadi, luas lingkaran adalah " << L << " cm " << endl;
  
  cout << "\n";
  
  cout << "Keliling lingkaran : " << endl;
  cout << "K = phi x d = (" << phi<< " x " << d << ")" << endl;
  cout << "K = " << K << " cm " << endl;
  cout << "Jadi, keliling lingkaran adalah " << K << " cm " << endl;

  return 0;
}