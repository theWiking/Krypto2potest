#include <iostream>
#include "zmienne.h"

using namespace std;
void podzielTekst(bool t[8],bool t1[4],bool t2[4]){
  for(int i=0;8>i;i++){
    t1[i]=t[i];
    t2[i]=t[i+4];
    }
}
void zrob2Kopie(bool t1[4],bool t1c1[4],bool t1c2[4]){
  for(int i=0;4>i;i++)
    t1c1[i]=t1c2[i]=t1[i];
}
void P4w8(bool t1c1[4],bool pop4w8[8],int p4w8[8]){
  for(int i=0;8>i;i++)
    pop4w8[i]=t1c1[p4w8[i]];
}
void dodawanieSymetryczne(bool tekst[8],bool klucz[8],bool wyjscie[8]){
    for(int i=0;i<8;i++)
        {if(tekst[i]==1 && klucz[i]==1)
            wyjscie[i]=0;
        else
        wyjscie[i]=tekst[i]+klucz[i];
}
}
