//
//  main.cpp
//  scoreboard
//
//  Created by Efe Aysal on 19.07.2024.


#include "takim.hpp"
#include <iostream>
#include <string>
#include "ScoreBoard.hpp"
using namespace std;
int main() {
    
    string team1,team2;
    cout << "Takım İsimlerini Sırasıyla Giriniz : " << endl;
    cin >> team1 >> team2;
    
    ScoreBoard mac;
    
    lig superlig;
    
    
    takimlar fenerbahce;
    fenerbahce.setIsim("Fenerbahce");
    fenerbahce.setligistatistik(0,0,0,0);
    fenerbahce.settakimistatistik(0, 0);
    fenerbahce.setTaraftar(20);
    fenerbahce.setkupaSayisi(19);
    
    
    fenerbahce.getIsim();
    fenerbahce.getligistatistik();
    fenerbahce.gettakimistatistik();
    fenerbahce.getTaraftar();
    fenerbahce.getkupaSayisi();
    
    
    takimlar galatasaray;
    galatasaray.setIsim("Galatasaray");
    galatasaray.setligistatistik(0,  0, 0,  0);
    galatasaray.settakimistatistik( 0, 0);
    galatasaray.setTaraftar(30);
    galatasaray.setkupaSayisi(21);
    
    galatasaray.getIsim();
    galatasaray.getligistatistik();
    galatasaray.gettakimistatistik();
    galatasaray.getTaraftar();
    galatasaray.getkupaSayisi();
   
  
    superlig.ligeTakimekle(fenerbahce);
    superlig.ligeTakimekle(galatasaray);
    
    superlig.ligtakimlarigöster();
    
    mac.macoyna(fenerbahce, galatasaray);
    
    

  
    
    return 0;
}



