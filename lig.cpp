//
//  lig.cpp
//  scoreboard
//
//  Created by Efe Aysal on 23.07.2024.
//

#include "lig.hpp"
#include "takim.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
#include "ScoreBoard.hpp"

using namespace std;

void lig::ligeTakimekle(takimlar takim) {
        takimListesi.push_back(takim);  // Takımı vektöre ekle
        TakimSayisi++;
    }

void lig::ligtakimlarigöster()
{
    
    for (int i = 0; i < takimListesi.size(); ++i)
    {
        cout << takimListesi[i].getIsim() << takimListesi[i].getligistatistik()<<endl;
    }
}


