//
//  lig.hpp
//  scoreboard
//
//  Created by Efe Aysal on 23.07.2024.
//
// int Takım Sayisi YAPILDI
// Array veya vector kullanarak takimlar olacak YAPILDI
// void takim ekle (takim a ) fonksiyonu olmalı ( Mainde Takım oluştur ve takım ekleeye mainde yap) YAPILDI
// void macoyna (takim a, takim b) : bu scoreboard classınıda kullanıcak galip takımın puanı güncellenecek
// takim puanı güncellenecek ve attığı ve yediği gol ve averaj
// print puantablosu(takim ismi , puan , galibiyet , yenilgi beraberlik ,averaj) "ters slash+t"
// lig sonucu ilan et : şampiyonun kim olduğu yazsın küme düşenler ( son 2 takım ) avrupa gidenler falana ayır
// takımların Şampiyonluk Sayısını kayıt et ve artır :
// Fonksiyon: maç oynanırken skorları random belirler for loop ve random kütüphanleri kullan skorlar yapılsın 
// Ligi Otamatik Oynat 
#ifndef lig_hpp
#define lig_hpp
#include "lig.hpp"
#include "takim.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>

class lig
{
    private:
        int TakimSayisi=0;
    vector<takimlar> takimListesi;
    
    
    
    public:
    void ligeTakimekle(takimlar takim);
    void ligtakimlarigöster();
   
    
    
};


#endif /* lig_hpp */
