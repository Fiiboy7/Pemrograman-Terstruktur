#include <iostream>
using namespace std;

class Mahasiswa{
	private:
		string nama, npm;
};

int main(){
	Mahasiswa Mhs;
	
	cin >> Mhs.nama;
	cin >> Mhs.npm;
	
	cout << Mhs.nama << " " << Mhs.npm;
}
