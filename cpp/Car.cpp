#pragma once

//memasukkan llibrary yang digunakan, termasuk kelas induk (kelas Human) dari kelas Ssivitas  Akademink

#include <iostream>
#include <string>
#include "Vehicle.cpp"

//deklarasi namespace
using namespace std;


/*kelas Sivitas Akademik yang digunakan untuk merepresentasikan data Sivitas Akademiik,
Sivitas Akademik merupakan masyarakat akademik yang terdiri atas dosen dan mahasiswa, Sehingga kelas 
SIvitas Akademik merupakan kelas turunan dari kelas HUman dan kelas induk dari kelas Mahasiswa dan Dosen*/

class Car : public Vehicle{
	private:

	//atribut yang dugunakan pada kelas Sivitas Akademik terdiri dari asal universitas dan email edu

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
		jumlahPintu = jumlahPintu;
	}

	//method set untuk set setiap nilai atribut pada kelas Sivitas Akademik

	void setJumlahKursi(string jumlahKursi){
		this->jumlahKursi = jumlahKursi;
	}

	void setjumlahPintu(string jumlahPintu){
		jumlahPintu = jumlahPintu;
	}

	//methode get untuk mendapatkan nilai setiap atribut pada kelas sivitas akademik

	string getJumlahKursi(){
		return jumlahKursi;
	}

	string getjumlahPintu(){
		return jumlahPintu;
	}

	//destyrctors

	~Car(){

	}
};
