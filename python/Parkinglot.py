#Saya Amelia Zalfa Julianti dengan NIM 2203999 mengerjakan Latihan 4 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
from Car import Car
from Motorcycle import Motorcycle

class Parkinglot:
    __kapasitas = 0
    __jumlahKendaraan = []
    
    def __init__(self, kapasitas = 0, jumlahKendaraan = None):
        self.__kapasitas = kapasitas

    #Getter and Setter
    
    #Get kapasitas
    
    def get_kapasitas(self):
        return self.__kapasitas
    
    #set kapasitas
    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas
    
    #Get jumlahKendaraan
    
    def get_jumlahKendaraan(self):
        return self.__jumlahKendaraan
    
    #set jumlahKendaraan
    def set_jumlahKendaraan(self, jumlahKendaraan):
        self.__jumlahKendaraan = jumlahKendaraan
    
    def add_jumlahKendaraan(self, jumlahKendaraan):
        self.__jumlahKendaraan.append(jumlahKendaraan)
