#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}

	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() {	return;}
	virtual void input() { return; }

	void setP(float nilai) {
		this->presensi = nilai;
	}
	float getP() {
		return presensi;
	}
	void setA(float nilai) {
		this->activity = nilai;
	}
	float getA() {
		return activity;
	}

	void setE(float nilai) {
		this->exercise = nilai;
	}
	float getE() {
		return exercise;
	}
	void setUA(float nilai) {
		this->tugasAkhir = nilai;
	}
	float getUA() {
		return tugasAkhir;
	}
	
};


class Pemrograman : public MataKuliah { 
public:
	float hitungNilaiAkhir() {
		return ((getP() * 0.1) + (getA() * 0.2) + (getE() * 0.3) + (getUA() * 0.4));
	}

	void cekKelulusan() {
		float nilai_akhir = hitungNilaiAkhir();
		if (nilai_akhir >= 75) {
			cout << "Selamat, anda lulus mata kuliah pemrograman dengan nilai akhir : " << nilai_akhir << "\n";
			
		}
		else {
			cout << "Maaf, anda tidak lulus mata kuliah pemrograman dengan nilai akhir : " << nilai_akhir << "\n";
		}
		
	}

	void input() {
		cout << "Masukkan nilai Presensi: ";
		float presensi;
		cin >> presensi;
		setP(presensi);

		cout << "Masukkan nilai Activity: ";
		float activity;
		cin >> activity;
		setA(activity);

		cout << "Masukkan nilai Exercise: ";
		float exercise;
		cin >> exercise;
		setE(exercise);

		cout << "Masukkan nilai Tugas Akhir: ";
		float tugasAkhir;
		cin >> tugasAkhir;
		setUA(tugasAkhir);
	}

};

int main() { 
	char ulang;

	do 
	{
		cout << "Program dibuat\n";
		Pemrograman pemrograman;
		pemrograman.input();
		pemrograman.cekKelulusan();

		cout << "Apakah Anda ingin mengulang program?? Tekan Y/N \n";
		cin >> ulang;
	


	} while (ulang == 'Y' || ulang == 'y');

	return 0;

}