#include <iostream>
#include <cmath>

using namespace std;
void zrob2Kopie(bool t1[4],bool t1c1[4],bool t1c2[4]){
  for(int i=0;4>i;i++)
    t1c1[i]=t1c2[i]=t1[i];
}
void P4w8(bool t1c1[4],bool pop4w8[8],int p4w8[8]){
  for(int i=0;8>i;i++)
    pop4w8[i]=t1c1[p4w8[i]];
}
void dodawanieSymetryczne(int iloscObliczen,bool tekst[8],bool klucz[8],bool wyjscie[8]){
    for(int i=0;i<iloscObliczen;i++){
        if(tekst[i]==1 && klucz[i]==1)
            wyjscie[i]=0;
        else
        wyjscie[i]=tekst[i]+klucz[i];
}
}
int naDziesietny(bool h[4]){
  int a=0;
  for(int i=0;4>i;i++)
    a+=h[3-i]*(pow(2,i));
    return a;
  }
void SboxyILaczenie(int wartosSbox1,int wartscSbox2, bool wyjscie[4]){
  bool sbox1[16][2]={{0,1},{1,1},{0,0},{1,0},{1,1},{0,1},{1,0},{0,0},{0,0},{1,1},{0,1},{0,1},{0,1},{1,1},{1,1},{1,0}};
  bool sbox2[16][2]={{0,0},{1,0},{0,1},{0,0},{1,0},{0,1},{1,1},{1,1},{1,1},{1,0},{0,0},{0,1},{0,1},{0,0},{0,0},{1,1}};

  wyjscie[0]=sbox1[wartosSbox1][0];
  wyjscie[1]=sbox1[wartosSbox1][1];
  wyjscie[2]=sbox2[wartscSbox2][0];
  wyjscie[3]=sbox2[wartscSbox2][1];
}


