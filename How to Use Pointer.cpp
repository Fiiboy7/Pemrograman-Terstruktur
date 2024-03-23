// tipe _data* nama_pointer; >> Bentuk umum deklarasi variabel pointer
// Contoh deklarasi pointer = int* ptr1, *ptr2, *ptr3;
// Contoh inisialisasi pointer dengan memberi alamt memori dari sebuah variabel :
// int a = 5;
// int* ptr = &a;
// Contoh inisialisasi pointer dgn alokasi memori secara dinamis :

// Berikut cara print value and memory address of variables :
#include <iostream>
using namespace std;
int main(){
	int ip;
	double db;
	float fp;
	char ch;
	cout << "Integer Value : " << ip << ", Memory Address: " << ip << endl;
	cout << "Double Value : " << ip << ", Memory Address: " << db << endl;
	cout << "Float Value : " << ip << ", Memory Address: " << fp << endl;
	cout << "Char Value : " << ip << ", Memory Address: " << (void*)ch << endl;
	return 0;
}
