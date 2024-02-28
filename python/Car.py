#Saya Amelia Zalfa Julianti dengan NIM 2203999 mengerjakan Latihan 4 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
from Vehicle import Vehicle

class Car (Vehicle):
    __jumlahKursi = ""
    __jumlahPintu= ""

    def __init__(self, plat = "", merk = "", tahunProduksi = "", warna = "", jumlahKursi = "", jumlahPintu = ""):
        
        super().__init__(plat, merk, tahunProduksi, warna)
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu
         
    #Getter and Setter
    #Get plat
    def get_jumlahKursi(self):
        return self.__jumlahKursi
    
    #set plat
    def set_jumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi
    
    #Get merk
    
    def get_jumlahPintu(self):
        return self.__jumlahPintu
    
    #set jumlahPintu
    def set_jumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu
    
