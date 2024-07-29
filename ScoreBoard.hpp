//
//  ScoreBoard.hpp
//  scoreboard
//
//  Created by Efe Aysal on 20.07.2024.
//
// Skoru Sıfırlayan Fonksiyon Yap ( YAPILDI )
// Galibi İlan Et fonksiyon yap galibi bullmak için toplam 5 vuruş veya ilk 10 yapan kazanır (YAPILDI)
// getrecordda vuruş sayısınıda print et (YAPILDI)
// Tüm vuruşlardan sonra skor Eşitse = beraberlik Sıra burda (YAPILDI)


#ifndef ScoreBoard_hpp
#define ScoreBoard_hpp
#include <iostream>
#include <stdio.h>
#include "lig.hpp"
#include "takim.hpp"
using namespace std;
class ScoreBoard

{
private:
    string TeamBlue;
    string TeamRed;
    int scoreBlue;
    int scoreRed;
    bool team1active;
    int vurusSayisi;
    
    
    
public:
    // Kurucu: Takım isimlerini alır ve skoru başlatır
    ScoreBoard(string x, string y,int vurus);
    ScoreBoard();
    // Hamleyi kaydetme metodu: Hamlede kazanılan puanları veya hamlenin başarısızlığını alır
    void recordPlay(int points);
    
    // Skoru döndüren metot: Mevcut durumu içeren bir string döner
    string getScore() ;
    
    void resetScore();
    int galipsec();
    void RecordRandomPlay();
    void macoyna(takimlar& takim1, takimlar& takim2);
};
#endif /* ScoreBoard_hpp */
