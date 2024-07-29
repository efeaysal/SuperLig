//
//  takim.cpp
//  scoreboard
//
//  Created by Efe Aysal on 23.07.2024.
//
#include <iostream>
#include <string>
#include <stdio.h>
#include "takim.hpp"

// GET FONKSİYONLARI ---------------------------------------------------

string takimlar::getIsim()
{
    cout << " TAKIMIN ISMI : " << takimisim<< endl;
    return takimisim;
};

int takimlar::getligistatistik()
{
    cout << "------LIG ISTATISTIKLARI---------"<< endl;
   cout << " PUAN : " << puan << "//" << "GALIBIYET:" << galibiyetSayisi << "//" << "MAGLUBIYET :" << yenilgiSayisi << "//" << "BERABERLIK :" << beraberlik << endl;
    cout << "--------------------------"<< endl;
    return puan;
    return galibiyetSayisi;
    return yenilgiSayisi;
    return beraberlik;
};

int takimlar::gettakimistatistik()
{
    cout << "-----TAKIM ISTATISTIKLERI--------"<< endl;
    cout << " ATTIGI GOL : " << attigiGol << "//" << "YEDIGI GOL:" << yedigiGol << "//" << "AVERAJ :" << averaj << endl;
    cout << "--------------------------"<< endl;
     return attigiGol;
     return yedigiGol;
     return averaj;
     
};

int takimlar::getTaraftar()
{
    cout << " TARAFTAR SAYISI : " << taraftarSayisi<< endl;
    cout << "--------------------------"<< endl;
    return taraftarSayisi;
};

int takimlar::getkupaSayisi()
{
    cout << "SAMPIYONLUK SAYISI: " << sampiyonlukSayisi<< endl;
    cout << "--------------------------"<< endl;
    return sampiyonlukSayisi;
}


// SET FONKSİYONLARI ---------------------------------------------------

void takimlar::setIsim(string x)
{
   takimisim = x;
};

void takimlar::setligistatistik(int puann, int galibiyet, int yenilgi, int beraberlikk)
{
    while (1)
    {
        if(galibiyet+yenilgi+beraberlikk==38)
        {
            puan=puann;
            galibiyetSayisi=galibiyet;
            yenilgiSayisi=yenilgi;
            beraberlik=beraberlikk;
        }else
            cout << "GIRDIĞINIZ ISTATISTIKER MAC SAYISIYLA UYUSMUYOR" << endl;
        break;
    };
};
void takimlar::settakimistatistik(int a, int b)
{
    attigiGol = a;
    yedigiGol = b;
    averaj = a-b;
    
};
void takimlar::setTaraftar(int x)
{
    taraftarSayisi=x;
};
void takimlar::setkupaSayisi(int x)
{
    sampiyonlukSayisi=x;
};

// takim.cpp dosyasına ekleyin
void takimlar::puanEkle(int eklenenPuan)
{
    puan += eklenenPuan;
}
