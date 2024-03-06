#pragma once

//memasukkan library yang digunakan

#include <iostream>
#include <string>

//deklarasi namespace
#
using namespace std;

class Vehicle {
	private:
	string plat;
	string merk;
	string tahunProduksi;
	string warna;

	public:

	Vehicle(){

	}

	Vehicle(string plat) {
		this->plat = plat;
		merk = "";
		tahunProduksi = "";
		warna = "";
	}

	Vehicle(string plat, string merk) {
		this->plat = plat;
		this->merk = merk;
		tahunProduksi = "";
		warna = "";
	}

	Vehicle(string plat, string merk, string tahunProduksi){
		this->plat = plat;
		this->merk = merk;
		tahunProduksi = tahunProduksi;
		warna = "";
	}

	Vehicle(string plat, string merk, string tahunProduksi, string warna){
		this->plat = plat;
		this->merk = merk;
		this->tahunProduksi = tahunProduksi;
		warna = warna;
	}

	// Getter and Setter

	// Get plat
	string getPlat() {
		return plat;
	}

	// Set plat
	void set_plat(string plat) {
		this->plat = plat;
	}

	// Get merk
	string get_merk() {
		return merk;
	}

	// Set merk
	void set_merk(string merk) {
	 	this->merk = merk;
	}

	// Get tahunProduksi
	string get_tahunProduksi() {
		return tahunProduksi;
	}

	// Set tahunProduksi
	void set_tahunProduksi(string tahunProduksi) {
		this->tahunProduksi = tahunProduksi;
	}

	// Get warna
	string get_warna() {
		return warna;
	}

	// Set warna
	void set_warna(string warna) {
		warna = warna;
	}

	~Vehicle(){

	}
};
