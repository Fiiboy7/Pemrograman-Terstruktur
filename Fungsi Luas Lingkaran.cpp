#include <iostream>
#include <cmath>
using namespace std;

double luasLingkaran (double r){
	double pi = M_PI;
	return pi*r*r;
}

int main (){
	double r;
	
	cin >> r;
	cout << luasLingkaran(r);
	return 0;
}