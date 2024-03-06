// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Parkinglot.cpp"
#include "Garage.cpp"




// Deklarasi namespace
using namespace std;


// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
    cin.tie();


    // Instansiasi objek Car
        Car car1("B40595YGF", "Hyundai", "2023", "Hitam", "5", "4");
        Car car2("D8794HDF", "Toyota", "2020", "Putih", "4", "4");
        Car car3("T67876YUG", "Suzuki", "2010", "Merah", "6", "4");

        Motorcycle mc1("F6578EQD", "Honda", "2023", "Pink", "Matic", "4L");
        Motorcycle mc2("D56482JMK", "Yamaha", "2021", "Silver", "Matic", "4L");


    // Instansiasi objek Mahasiswa

	Car car4("T7866IBF", "Cherry", "2022", "Hitam", "4", "4");
	Car car5("D6473YHD", "Mercedes", "2023", "Putih", "4", "2");
	Garage garageCar("Garasi A", "150");
	garageCar.addCar(car4);
	garageCar.addCar(car5);
	vector<Garage> kendaraanGarasiMobil;
	kendaraanGarasiMobil.push_back(garageCar);	

	Garage garageMotorcycle("Garasi B", "100");
	garageMotorcycle.addMotorcycle(mc1);
	garageMotorcycle.addMotorcycle(mc2);
	vector<Garage> kendaraanGarasiMotor;
	kendaraanGarasiMotor.push_back(garageMotorcycle);

	ParkingLot(50, )


// Menampilkan informasi Mahasiswa
cout << "Garasi" << endl;
cout << "Garasi       : " << garageCar.getNamaGarasi() << endl;
cout << "Luas Garasi  : " << garageCar.getLuasGarasi() << endl;
for(Car garagecar : garageCar.kendaraanGarasiMobil()){
	cout << "Plat         : " << garagecar.getPlat() << endl;
	cout << "Merk         : " << garagecar.getMerk() << endl;
	cout << "Tahun        : " << garagecar.getTahunProduksi() << endl;
	cout << "Warna        : " << garagecar.getWarna() << endl;
	cout << "Jumlah Pintu : " << garagecar.getJumlahPintu() << endl;
	cout << "Jumlah Roda  : " << garagecar.getJumlahRoda() << endl;
	cout << endl;

}

    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}
