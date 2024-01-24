#include <iostream>

using namespace std;

int main() {
  int ilustrasi[3] = {85, 70, 75};

  // Ubah nilai indeks ke-0 menjadi 20
  ilustrasi[0] = 20;

  // Cetak nilai array
  for (int i = 0; i < 3; i++) {
    cout << ilustrasi[i] << " ";
  }
  
  return 0;
}