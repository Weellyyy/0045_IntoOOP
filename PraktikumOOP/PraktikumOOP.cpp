#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifer
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};

class Matakuliah {
	private:
		string kodeM;
		string namaMk;
		int sks;
	public :
		void input() {
			cout << "Nama Mk: ";
			cin >> namaMk;
			cout << "Nama Mk: ";
			cin >> namaMk;
			cout << "SKS: ";
			cin >> sks;
		}

};
