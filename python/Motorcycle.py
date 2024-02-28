#Saya Amelia Zalfa Julianti dengan NIM 2203999 mengerjakan Latihan 4 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
from Vehicle import Vehicle

class Motorcycle (Vehicle):
    __jenisMotor = ""
    __kapasitasTanki= ""

    def __init__(self, plat = "", merk = "", tahunProduksi = "", warna = "", jenisMotor = "", kapasitasTanki = ""):
        
        super().__init__(plat, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTanki = kapasitasTanki
         
    #Getter and Setter
    #Get jenis motor
    def get_jenisMotor(self):
        return self.__jenisMotor
    
    #set jenis motor
    def set_jenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor
    
    #Get kapasitas tanki
    
    def get_kapasitasTanki(self):
        return self.__kapasitasTanki
    
    #set kapasitas Tanki
    def set_kapasitasTanki(self, kapasitasTanki):
        self.__kapasitasTanki = kapasitasTanki
    
