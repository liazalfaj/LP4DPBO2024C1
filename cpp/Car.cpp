#pragma once

//memasukkan llibrary yang digunakan, termasuk kelas induk (kelas Human) dari kelas Ssivitas  Akademink

#include <iostream>
#include <string>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;

class Car : public Vehicle{
	private:


	string jumlahKursi;
	string jumlahPintu;

	public:

	//constructor

	Car(){

	}

	//Constructor : overloading
	Car(string jumlahKursi, string plat, string merk, string tahunProduksi, string warna) : Vehicle(plat, merk, tahunProduksi, warna){
		this->jumlahKursi = jumlahKursi;	
		jumlahPintu = "";
	}

	//constructor : overloading
	Car(string jumlahKursi, string jumlahPintu, string plat, string merk, string tahunProduksi, string warna) : Vehicle(plat, merk, tahunProduksi, warna){
		this->jumlahKursi = jumlahKursi;	
		this->jumlahPintu = jumlahPintu;
	}

	void setJumlahKursi(string jumlahKursi){
		this->jumlahKursi = jumlahKursi;
	}

	void setJumlahPintu(string jumlahPintu){
		this->jumlahPintu = jumlahPintu;
	}

	string getJumlahKursi(){
		return jumlahKursi;
	}

	string getJumlahPintu(){
		return jumlahPintu;
	}

	//destyrctors

	~Car(){

	}
};
