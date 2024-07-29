
//  ScoreBoard.cpp
//  scoreboard
//
//  Created by Efe Aysal on 20.07.2024.
//


#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include "ScoreBoard.hpp"
#include "lig.hpp"
#include "takim.hpp"

ScoreBoard::ScoreBoard(){}

// Kurucu: Takım isimlerini alır ve skoru başlatır
   ScoreBoard::ScoreBoard(string x, string y, int vurus) // Constructor ların amacı Private değişkenlere İlk değer Ataması Yapmaktır.
{
    TeamBlue = x ;
    TeamRed = y;
    team1active = false;
    vurusSayisi= vurus;
    scoreRed = 0;
    srand((unsigned) time(NULL));
    scoreBlue = 0;
};
// Hamleyi kaydetme metodu: Hamlede kazanılan puanları veya hamlenin başarısızlığını alır
void ScoreBoard::recordPlay(int points) {
    if (points >= 0) {
        if (team1active) {
            scoreBlue += points;  // Eğer takım 1 aktifse, takım 1'in skorunu günceller
        } else {
            scoreRed += points;  // Eğer takım 2 aktifse, takım 2'nin skorunu günceller
        }
    }
        team1active = !team1active;  // Puan 0 ise, aktif takımı değiştirir
    vurusSayisi=vurusSayisi+1;
    cout << getScore()<<endl;
    galipsec();
}
void ScoreBoard::RecordRandomPlay()
{
    unsigned int points;
    // Providing a seed value
       
        // Get a random number
        int random = rand();
     
        points = random % 5 + 1;
    
    if (points > 0) {
        if (team1active) {
            scoreBlue += points;  // Eğer takım 1 aktifse, takım 1'in skorunu günceller
        } else {
            scoreRed += points;  // Eğer takım 2 aktifse, takım 2'nin skorunu günceller
        }
    }
        team1active = !team1active;  // Puan 0 ise, aktif takımı değiştirir
    vurusSayisi=vurusSayisi+1;
    cout << getScore()<<endl;
    galipsec();
}





// Skoru döndüren metot: Mevcut durumu içeren bir string döner

string ScoreBoard::getScore()
{
    string aktiftakim;
   
        // Aktif Takim Belli olma şeysi
        if (team1active) {
            aktiftakim= TeamBlue;
            cout << "Sıra : "<< TeamBlue<< endl;  // Eğer takım 1 aktifse, takım 1'in skorunu günceller
        } else {
            aktiftakim = TeamRed ;
            cout << "Sıra : "<< TeamRed<< endl;  ;  // Eğer takım 2 aktifse, takım 2'nin skorunu günceller
        }
    cout << "vurusSayisi: " << vurusSayisi<< endl;
    return to_string(scoreBlue) + "-" + to_string(scoreRed) ;
    
};




void ScoreBoard::resetScore()
{
    scoreRed=0;
    scoreBlue=0;
    cout << " A " << scoreBlue << "--" << scoreRed << " B" << endl ;

}
 int ScoreBoard::galipsec()
{
     if (scoreRed==scoreBlue && vurusSayisi==5)
     {
         cout << " vuruş sayisi tamamlandi ve " << endl ;
         cout << " MAC BERABERE " << endl ;
         return 0;
         
     }else
   
    if (scoreRed==10 || vurusSayisi==5)
    {
        
        if(scoreRed>scoreBlue)
        {
            if(vurusSayisi==5)
            {
                cout << " vuruş sayisi tamamlandi " << endl ;
            }
            cout << " KAZANANAN: " << TeamRed <<endl ;
            cout << to_string(scoreRed)<< endl;
            return 1;
        }

    }
    if(scoreBlue==10 || vurusSayisi==5)
    {
        
        if(scoreBlue>scoreRed)
        {
            if(vurusSayisi==5)
            {
                cout << " vuruş sayisi tamamlandi " << endl ;
            }
            cout << " KAZANANAN: " << TeamBlue <<endl ;
            cout << to_string(scoreBlue)<< endl;
            return 2;
        }
    }
     return 3;
 }
void ScoreBoard::macoyna(takimlar& takim1, takimlar& takim2)
{
    int süre;
    TeamBlue = takim1.getIsim();
    TeamRed = takim2.getIsim();
    int random1 = rand();
 
    süre = random1 % 6 + 1;
    // Maç süresince birkaç rastgele hamle kaydedelim
    for (int i = 0; i < süre ; ++i) {
        RecordRandomPlay();
    }
    
    // Maç sonucunu yazdır
    cout << "Maç Sonucu: " << endl;
    cout << TeamBlue << " " << scoreBlue << " - " << scoreRed << " " << TeamRed << endl;
    
    // Galibi belirle ve puan ekle
    int sonuc = galipsec();
    if (sonuc == 1) {
        takim2.puanEkle(3); // TeamRed kazandı
    } else if (sonuc == 2) {
        takim1.puanEkle(3); // TeamBlue kazandı
    } else if (sonuc == 0) {
        takim1.puanEkle(1);
        takim2.puanEkle(1); // Berabere
    }
}
