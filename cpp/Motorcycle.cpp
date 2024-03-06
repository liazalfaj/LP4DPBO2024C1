#pragma once

#include <iostream>
#include <string>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

class Motorcycle : public Vehicle{
	private:
	string jenisMotor;
	string kapasitasTanki;

	public:
	Motorcycle(){
		
	}

	Motorcycle(string jenisMotor, string plat, string merk, string tahunProduksi, string warna) : Vehicle(plat, merk, tahunProduksi, warna){
		this->jenisMotor = jenisMotor;
		kapasitasTanki = "";
	}

	Motorcycle(string jenisMotor, string kapasitasTanki, string plat, string merk, string tahunProduksi, string warna) : Vehicle(plat, merk, tahunProduksi, warna) {
		this->jenisMotor = jenisMotor;
		this->kapasitasTanki = kapasitasTanki;
	}

	// Getter and Setter
	// Get jenis motor
	string getJenisMotor() {
		return jenisMotor;
	}

	// Set jenis motor
	void setJenisMotor(string jenisMotor) {
		this->jenisMotor = jenisMotor;
	}

	// Get kapasitas tanki
	string getKapasitasTanki() {
		return kapasitasTanki;
	}

	// Set kapasitas tanki
	void setKapasitasTanki(string kapasitasTanki) {
		this->kapasitasTanki = kapasitasTanki;
	}

	~Motorcycle(){
		
	}
};
