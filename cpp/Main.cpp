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
        Car car1("5", "4", "B40595YGF", "Hyundai", "2023", "Hitam");
        Car car2("4", "4", "D8794HDF", "Toyota", "2020", "Putih");
        Car car3("6", "4", "T67876YUG", "Suzuki", "2010", "Merah");

        Motorcycle mc1("Matic", "4L", "F6578EQD", "Honda", "2023", "Pink");
        Motorcycle mc2("Matic", "4L", "D56482JMK", "Yamaha", "2021", "Silver");
		Motorcycle mc3("Matic", "4L", "H43CAN", "Honda", "2023", "Hitam");
        Motorcycle mc4("Matic", "4L", "Y657HJK", "Yamaha", "2021", "Merah");



    // Instansiasi objek Mahasiswa
// "T7866IBF", "Cherry", "2022", "Hitam", "4", "4"
	Car car4("4", "4", "T7866IBF", "Cherry", "2022", "Hitam");
	Car car5("4", "2", "D6473YHD", "Mercedes", "2023", "Putih");
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

	ParkingLot parkiranmobil(50);
	parkiranmobil.addCar(car1);
	parkiranmobil.addCar(car2);
	parkiranmobil.addCar(car3);

	ParkingLot parkiranmotor(50);
	parkiranmotor.addMotorcycle(mc3);
	parkiranmotor.addMotorcycle(mc4);

	vector<ParkingLot> kendaraanParkiranMotor;
	kendaraanParkiranMotor.push_back(parkiranmotor);



cout << "Garasi" << endl;
cout << "Garasi       : " << garageCar.getNamaGarasi() << endl;
cout << "Luas Garasi  : " << garageCar.getLuasGarasi() << endl;
for(Car garagecar : garageCar.getCar()){
	cout << "Plat         : " << garagecar.getPlat() << endl;
	cout << "Merk         : " << garagecar.getMerk() << endl;
	cout << "Tahun        : " << garagecar.getTahunProduksi() << endl;
	cout << "Warna        : " << garagecar.getWarna() << endl;
	cout << "Jumlah Pintu : " << garagecar.getJumlahPintu() << endl;
	cout << "Jumlah Kursi : " << garagecar.getJumlahKursi() << endl;
	cout << endl;

}

cout << "Garasi       : " << garageMotorcycle.getNamaGarasi() << endl;
cout << "Luas Garasi  : " << garageMotorcycle.getLuasGarasi() << endl;
cout << "Daftar Kendaraan"<< endl;
for(Motorcycle garagemotorcycle : garageMotorcycle.getMotorcycle()){
	cout << "Plat         : " << garagemotorcycle.getPlat() << endl;
	cout << "Merk         : " << garagemotorcycle.getMerk() << endl;
	cout << "Tahun        : " << garagemotorcycle.getTahunProduksi() << endl;
	cout << "Warna        : " << garagemotorcycle.getWarna() << endl;
	cout << "Jenis Motor  : " << garagemotorcycle.getJenisMotor() << endl;
	cout << "Kapasitas    : " << garagemotorcycle.getKapasitasTanki() << endl;
	cout << endl;

}
cout << "Parkiran"<< endl;
cout << "Parkiran     : Parkiran Mobil"<< endl;
cout << "Kapasitas : " << parkiranmobil.getKapasitas() << endl;
for(Car parkiranmobil : parkiranmobil.getJumlahKendaraanMobil()){
	cout << "Plat         : " << parkiranmobil.getPlat() << endl;
	cout << "Merk         : " << parkiranmobil.getMerk() << endl;
	cout << "Tahun        : " << parkiranmobil.getTahunProduksi() << endl;
	cout << "Warna        : " << parkiranmobil.getWarna() << endl;
	cout << "Jumlah Pintu : " << parkiranmobil.getJumlahPintu() << endl;
	cout << "Jumlah Kursi : " << parkiranmobil.getJumlahKursi() << endl;
	cout << endl;

}

cout << "Parkiran     : Parkiran Motor"<< endl;
cout << "Kapasitas : " << parkiranmotor.getKapasitas() << endl;
cout << "Daftar Kendaraan"<< endl;
for(Motorcycle parkiranmotor : parkiranmotor.getJumlahKendaraanMotor()){
	cout << "Plat         : " << parkiranmotor.getPlat() << endl;
	cout << "Merk         : " << parkiranmotor.getMerk() << endl;
	cout << "Tahun        : " << parkiranmotor.getTahunProduksi() << endl;
	cout << "Warna        : " << parkiranmotor.getWarna() << endl;
	cout << "Jenis Motor  : " << parkiranmotor.getJenisMotor() << endl;
	cout << "Kapasitas    : " << parkiranmotor.getKapasitasTanki() << endl;
	cout << endl;
}

    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}
