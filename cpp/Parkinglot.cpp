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

class ParkingLot
{
private:
    // Atribut yang digunakan pada kelas Mahasiswa terdiri dari nim dan fakultas yang merupakan identitas pembeda antar mahasiswa satu dengan lainnya. Setiap mahasiswa memiliki laptop dan dosen wali
    int kapasitas;
    vector<Car> jumlahKendaraanMobil;
	vector<Motorcycle>jumlahKendaraanMotor;
	string jumlahKeseluruhan;

public:
    // Constructor
    ParkingLot()
    {


    }


    // Constructor : Overloading
    ParkingLot(int kapasitas){  
        this->kapasitas = kapasitas;
    }


    // Constructor : Overloading
    ParkingLot(int kapasitas, vector<Car> jumlahKendaraanMobil){  
        this->kapasitas = kapasitas;
		this->jumlahKendaraanMobil = jumlahKendaraanMobil;
    }


    // Constructor : Overloading
   ParkingLot(int kapasitas, vector<Car> jumlahKendaraanMobil, vector<Motorcycle>jumlahKendaraanMotor){   
        this->kapasitas = kapasitas;
		this->jumlahKendaraanMobil = jumlahKendaraanMobil;
		this->jumlahKendaraanMotor = jumlahKendaraanMotor;
    }

	// Constructor : Overloading
   ParkingLot(int kapasitas, vector<Car> jumlahKendaraanMobil, vector<Motorcycle>jumlahKendaraanMotor, string jumlahKeseluruhan){   
        this->kapasitas = kapasitas;
		this->jumlahKendaraanMobil = jumlahKendaraanMobil;
		this->jumlahKendaraanMotor = jumlahKendaraanMotor;
		this->jumlahKeseluruhan = jumlahKeseluruhan;
    }

    // Method setter untuk set setiap nilai atribut pada kelas ParkingLot
    void setKapasitas(int kapasitas)
    {
        this->kapasitas = kapasitas;
    }


    void setJumlahKendaraanMobil(vector<Car> jumlahKendaraanMobil)
    {
        this->jumlahKendaraanMobil = jumlahKendaraanMobil;
    }


    void setJumlahKendaraanMotor(vector<Motorcycle>jumlahKendaraanMotor)
    {
        this->jumlahKendaraanMotor = jumlahKendaraanMotor;
    }

	void setJumlahKeseluruhan(string jumlahKeseluruhan)
    {
        this->jumlahKeseluruhan = jumlahKeseluruhan;
    }

    // Method getter untuk mendapatkan nilai setiap atribut pada kelas Mahasiswa
    int getKapasitas()
    {
        return kapasitas;
    }


    vector<Car> getJumlahKendaraanMobil()
    {
        return jumlahKendaraanMobil;
    }

	vector<Motorcycle> getJumlahKendaraanMotor()
    {
        return jumlahKendaraanMotor;
    }

	string getJumlahKeseluruhan()
    {
        return jumlahKeseluruhan;
    }



    // Destructor
    ~ParkingLot(){


    }
};
