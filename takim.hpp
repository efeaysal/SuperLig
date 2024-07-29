//
//  takim.hpp
//  scoreboard
//
//  Created by Efe Aysal on 23.07.2024.
//
// private İsim , Taraftar sayısı , Galibiyet ve yenilgi , beraberlik sayıları , Puan,şampiyonluk sayisi , Yediği ve attığı gol : averaj , YAPILDI
// constructor private değişkenlerin get ve set fonksiyonları YAPILDI
#ifndef takim_hpp
#define takim_hpp
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class takimlar {
private:
    string takimisim;
    int taraftarSayisi;
    int galibiyetSayisi;
    int yenilgiSayisi;
    int beraberlik;
    int puan;
    int sampiyonlukSayisi;
    int yedigiGol;
    int attigiGol;
    int averaj ;
    
    
public:
    
    
    
    // get.name fonksiyonları
    
    string getIsim();
    int getTaraftar();
    int getligistatistik();// galibiyet yenilgi beraberlik ve puan
    int gettakimistatistik(); // Attığı yediği averaj
    int getkupaSayisi(); // sampiyonluk sayisi
    
   // Set.name Fonksiyonları
    
    void setIsim(string x);
    void setTaraftar(int x);
    void setligistatistik(int a,int b,int c,int z);// galibiyet yenilgi beraberlik ve puan
    void settakimistatistik(int a,int b ); // Attığı yediği averaj
    void setkupaSayisi(int x); // sampiyonluk sayisi
   
    void puanEkle(int eklenenPuan);

    
};




#endif /* takim_hpp */





