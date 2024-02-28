#Saya Amelia Zalfa Julianti dengan NIM 2203999 mengerjakan Latihan 4 mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan sesuai dengan apa yang telah dispesifikasikan. Aamiin.
class Vehicle:
    __plat = ""
    __merk = ""
    __tahunProduksi = ""
    __warna = ""
    
    def __init__(self, plat = "", merk = "", tahunProduksi = "", warna = ""):
        self.__plat = plat
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna
        
    #Getter and Setter
    
    #Get plat
    
    def get_plat(self):
        return self.__plat
    
    #set plat
    def set_plat(self, plat):
        self.__plat = plat
    
    #Get merk
    
    def get_merk(self):
        return self.__merk
    
    #set merk
    def set_merk(self, merk):
        self.__merk = merk
        
    #Get tahunProduksi
    
    def get_tahunProduksi(self):
        return self.__tahunProduksi
    
    #set tahunProduksi
    def set_tahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi
        
    #Get warna
    
    def get_warna(self):
        return self.__warna
    
    #set warna
    def set_warna(self, warna):
        self.__warna = warna
    
