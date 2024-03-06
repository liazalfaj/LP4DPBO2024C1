// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

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
    int kapasitas;
    vector<Car> jumlahKendaraanMobil;
	vector<Motorcycle> jumlahKendaraanMotor;
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

	void addCar(Car jumlahKendaraanMobil){
		this->jumlahKendaraanMobil.push_back(jumlahKendaraanMobil);
	}

	void addMotorcycle(Motorcycle jumlahKendaraanMotor){
		this->jumlahKendaraanMotor.push_back(jumlahKendaraanMotor);
	}

	void setJumlahKeseluruhan(string jumlahKeseluruhan)
    {
        this->jumlahKeseluruhan = jumlahKeseluruhan;
    }
    int getKapasitas()
    {
        return kapasitas;
    }


    vector<Car> getJumlahKendaraanMobil()
    {
        return this->jumlahKendaraanMobil;
    }

	vector<Motorcycle> getJumlahKendaraanMotor()
    {
        return this->jumlahKendaraanMotor;
    }

	string getJumlahKeseluruhan()
    {
        return jumlahKeseluruhan;
    }



    // Destructor
    ~ParkingLot(){


    }
};
