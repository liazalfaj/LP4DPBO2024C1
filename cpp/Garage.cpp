// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once
// Memasukan library yang digunakan, termasuk kelas induk (kelas Sivitas Akademik) dari kelas Mahasiswa serta kelas yang dimiliki oleh mahasiswa (kelas Laptop dan Dosen)
#include <iostream>
#include <string>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"


// Deklarasi namespace
using namespace std;

class Garage
{
private:
    // Atribut yang digunakan pada kelas Mahasiswa terdiri dari nim dan fakultas yang merupakan identitas pembeda antar mahasiswa satu dengan lainnya. Setiap mahasiswa memiliki laptop dan dosen wali
    string namaGarasi;
    string luasGarasi;
	vector<Car> kendaraanMobil;
	vector<Motorcycle> kendaraanMotor;

public:
    // Constructor
    Garage()
    {


    }


    // Constructor : Overloading
    Garage(string namaGarasi){  
        this->namaGarasi = namaGarasi;
        luasGarasi = "";
    }


    // Constructor : Overloading
    Garage(string namaGarasi, string luasGarasi){  
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
    }


    // Constructor : Overloading
    Garage(string namaGarasi, string luasGarasi, vector<Car> kendaraanMobil){  
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
		this->kendaraanMobil = kendaraanMobil;
    }

	Garage(string namaGarasi, string luasGarasi, vector<Car> kendaraanMobil, vector<Motorcycle> kendaraanMotor){  
        this->namaGarasi = namaGarasi;
        this->luasGarasi = luasGarasi;
		this->kendaraanMobil = kendaraanMobil;
		this->kendaraanMotor = kendaraanMotor;
    }


    // Method setter untuk set setiap nilai atribut pada kelas Garage
    void setNamaGarasi(string namaGarasi)
    {
        this->namaGarasi = namaGarasi;
    }


    void setluasGarasi(string luasGarasi)
    {
        this->luasGarasi = luasGarasi;
    }

	void addCar(Car kendaraanMobil){
		this->kendaraanMobil.push_back(kendaraanMobil);
	}

	void addMotorcycle(Motorcycle kendaraanMotor){
		this->kendaraanMotor.push_back(kendaraanMotor);
	}

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Mahasiswa
    string getNamaGarasi()
    {
        return namaGarasi;
    }


    string getLuasGarasi()
    {
        return luasGarasi;
    }


    vector<Car> getCar()
    {
        return kendaraanMobil;
    }


    vector<Motorcycle> getMotorcycle()
    {
        return kendaraanMotor;
    }


    // Destructor
    ~Garage()
    {


    }
};
