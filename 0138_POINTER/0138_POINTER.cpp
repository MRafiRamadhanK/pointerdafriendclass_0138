#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim() {
		cout << "No Induk = " << nim << endl;
	}
};
int main() {
	mahasiswa mhs{ 1 }; //objecct mhs
	mhs.showNim(); // member accsess operator

	mahasiswa& refmhs = mhs; // pointer reference refmhs
	refmhs.nim = 2; // member accsess operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs; //pointer dereference pMhs
	pMhs->nim = 3; //Arrow operator
	mhs.showNim();
	return 0;
}