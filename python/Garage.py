#Saya Amelia Zalfa Julianti dengan NIM 2203999 mengerjakan Latihan 4 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
class Garage:
    __namaGarasi = ""
    __luasGarasi= ""
    __daftarKendaraan = []

    def __init__(self, namaGarasi = "", luasGarasi = "", daftarKendaraan = None):
        self.__namaGarasi = namaGarasi
        self.__luasGarasi = luasGarasi
        self.__daftarKendaraan = daftarKendaraan
         
    #Getter and Setter
    
    #Get nama garasi
    def get_namaGarasi(self):
        return self.__namaGarasi
    
    #set nama garasi
    def set_namaGarasi(self, namaGarasi):
        self.__namaGarasi = namaGarasi
    
    #Get luas garasi
    def get_luasGarasi(self):
        return self.__luasGarasi
    
    #set luasGarasi
    def set_luasGarasi(self, luasGarasi):
        self.__luasGarasi = luasGarasi
        
    #Get daftar kendaraan
    def get_daftarKendaraan(self):
        return self.__daftarKendaraan
    
    #set daftarKendaraan
    def set_daftarKendaraan(self, daftarKendaraan):
        self.__daftarKendaraan = daftarKendaraan
    
    def add_daftarKendaraan(self, daftarKendaraan):
        self.__daftarKendaraan.append(daftarKendaraan)
