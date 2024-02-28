#Saya Amelia Zalfa Julianti dengan NIM 2203999 mengerjakan Latihan 4 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Parkinglot import Parkinglot
from Garage import Garage


#isi list car
listCarParkingLot = [Car("B40595YGF", "Hyundai", "2023", "Hitam", "5", "4"), Car("D8794HDF", "Toyota", "2020", "Putih", "4", "4"), Car("T67876YUG", "Suzuki", "2010", "Merah", "6", "4" )]
listMotorParkingLot =  [Motorcycle("F6578EQD", "Honda", "2023", "Pink", "Matic", "4L"), Motorcycle("D56482JMK", "Yamaha", "2021", "Silver", "Matic", "4L")]
listCarGarasi = [Car("T7866IBF", "Cherry", "2022", "Hitam", "4", "4"), Car("D6473YHD", "Mercedes", "2023", "Putih", "4", "2")]
listMotorGarasi = [Motorcycle("F6574DWD", "Harley", "2021", "Hitam", "Non-Matic", "8L")]


#isi list garasi
listGarasi = []
listGarasi.append(Garage("Garasi Mobil", "200 m", listCarGarasi))
listGarasi.append(Garage("Garasi Motor", "100 m", listMotorGarasi))

listParkingLot = []
listParkingLot.append(Parkinglot(15, listCarParkingLot))
listParkingLot.append(Parkinglot(30, listMotorParkingLot))


#keluaran
print("+-----------------------------+")
print("| Garasi ")
print("+-----------------------------+")
i = 1
for garasi in listGarasi:
    print("|", i, ". Nama Garasi:", garasi.get_namaGarasi())
    print("|     Luas Garasi:", garasi.get_luasGarasi())
    print("|     Daftar Kendaraan:")
    k = 1
    for cargarasi in listCarGarasi:
        print("|          ->No:", k)
        print("|            Plat:", cargarasi.get_plat())
        print("|            Merk:", cargarasi.get_merk())
        print("|            Tahun:", cargarasi.get_tahunProduksi())
        print("|            Warna:", cargarasi.get_warna())
        print("|            Jumlah Kursi:", cargarasi.get_jumlahKursi())
        print("|            Jumlah Pintu:", cargarasi.get_jumlahPintu())
        k += 1
    i +=  1
print("+-----------------------------+")
print("| Parking Lot")
print("+-----------------------------+")
print("| Parking Lot Motor           |")
for pmotor in listParkingLot:
    print("Kapasitas:", pmotor.get_kapasitas())
    k = 1
    print("| JumlahKendaraan:")
    for motor in listMotorParkingLot:
        print("|          ->No:", k)
        print("|            Plat:", cargarasi.get_plat())
        print("|            Merk:", cargarasi.get_merk())
        print("|            Tahun:", cargarasi.get_tahunProduksi())
        print("|            Warna:", cargarasi.get_warna())
        print("|            Jumlah Kursi:", cargarasi.get_jumlahKursi())
        print("|            Jumlah Pintu:", cargarasi.get_jumlahPintu())
        k += 1
print("+-----------------------------+")     

