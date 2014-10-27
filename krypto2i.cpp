#include <iostream>
#include "klucz.h"
#include "tekst.h"


using namespace std;
int main(){
  bool sbox1[16][2]={{0,1},{1,1},{0,0},{1,0},{1,1},{0,1},{1,0},{0,0},{0,0},{1,1},{0,1},{0,1},{0,1},{1,1},{1,1},{1,0}};
  bool sbox2[16][2]={{0,0},{1,0},{0,1},{0,0},{1,0},{0,1},{1,1},{1,1},{1,1},{1,0},{0,0},{0,1},{0,1},{0,0},{0,0},{1,1}};


  //zmienne do tekstu
  bool t[8]={1,0,1,1,1,0,0,0};
  bool t1[4]={0};
  bool t2[4]={0};
  bool t2c1[4]={0};
  bool t2c2[4]={0};
  bool pop4w8[8]={0};
  int p4w8[8]={3,0,1,2,1,2,3,0};
  bool poDodawaniu[8]={0};

  //zmienne do klucza
  bool kp[10]={1,1,0,0,0,0,0,0,1,1};
  int P10[10]={2,4,1,6,3,9,0,8,7,5};
  bool poP10[10]={0};
  bool k1[5]={0};
  bool k2[5]={0};
  int Przez1[5]={1,2,3,4,0};
  bool k1k2[10]={0};
  int p10w8[8]={5,2,6,3,7,4,9,8};
  bool poP10w8[8]={0};
  bool k12[5]={0};
  bool k22[5]={0};
  int Przez2[5]={2,3,4,0,1};
  bool k12k22[10]={0};
  bool poP10w82[8]={0};


  //klucz
  cout<<"Permutacja P10: \t";
  Per10(kp,P10,poP10);
    for(int i=0;10>i;i++){
      cout<<poP10[i];
    }
  cout<<endl;
  cout<<"czesci polaczone:\t";
  PrzezIPodzia(poP10,k1,k2,Przez1);
  LaczeniePolowek(k1,k2,k1k2);
  for(int i=0;10>i;i++){
      cout<<k1k2[i];
  }
  cout<<endl;
  cout<<"Klucz 1 rundy:   \t";
  Per10w8(k1k2,poP10w8,p10w8);
  for(int i=0;8>i;i++){
    cout<<poP10w8[i];
  }
  cout<<endl;
  cout<<"2runda po podzieleniu:\t";
  PrzezIPodzia(k1k2,k12,k22,Przez2);
  LaczeniePolowek(k12,k22,k12k22);
  for(int i=0;10>i;i++){
      cout<<k12k22[i];
  }
  cout<<endl;
  cout<<"Klucz 2 rundy:   \t";
  Per10w8(k12k22,poP10w82,p10w8);
  for(int i=0;8>i;i++){
    cout<<poP10w82[i];
  }
  cout<<endl<<endl<<endl<<"Tekst"<<endl;

  //tekst
  cout<<"Kopia 1 P4w8:   \t";
  podzielTekst(t,t1,t2);
  zrob2Kopie(t2,t2c1,t2c2);
  P4w8(t2c1,pop4w8,p4w8);
  for(int i=0;8>i;i++)
    cout<<pop4w8[i];
  cout<<endl;
  cout<<"Dodawanie Symetryczne:\t";
  dodawanieSymetryczne(poP10w8,pop4w8,poDodawaniu);
  for(int i=0;8>i;i++)
    cout<<poDodawaniu[i];
  cout<<endl;

return 0;
}
