#include <iostream>
using namespace std;

// Deklarasi function dengan paramter
int tambah (int a, int b){
	return a + b;
}

int main(){
	int x = 7;
	int y = 8;
	int hasil;
	
	// Memanggil fungsi dan menyimpan ke variabel
	hasil = tambah(x, y);
	
	// Menampilkan hasil
	cout << "Hasil: " << hasil << endl;
	return 0;
}
