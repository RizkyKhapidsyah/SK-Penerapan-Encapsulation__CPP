#pragma warning(disable:4996)

#include <conio.h>
#include <iostream>

using namespace std;

/* Created by Rizky Khapidsyah */

class satu_kandang {
	int kandang;

public:
	void atur(int nilai);
	int hasil(void);
};

void satu_kandang::atur(int nilai) {
	kandang = nilai;
}

int satu_kandang::hasil(void) {
	return kandang;
}

int main() {
	satu_kandang ayam1, ayam2, ayam3;
	int bebek;

	ayam1.atur(5);
	ayam2.atur(7);
	ayam3.atur(2);
	bebek = 20;
	
	cout << " Nilai dari ayam1 adalah " << ayam1.hasil() << endl;
	cout << " Nilai dari ayam2 adalah " << ayam2.hasil() << endl;
	cout << " Nilai dari ayam3 adalah " << ayam3.hasil() << endl;
	cout << " Nilai dari bebek adalah " << bebek << endl;
	
	_getch();
	return 0;
}