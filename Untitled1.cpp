// Membuat sebuah file
#include <iostream>
#include <fstream>

using namespace std;
int main(){
	ofstream outFile("example.txt");
	
	outFile << "Nama saya Aiku";
	
	outFile.close();
}
