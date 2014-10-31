#include <iostream>
#include <cmath>
//tekst
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


//oglone
void Permutacja(int iloscObliczen,int per[10],bool wejscie[10],bool wyjscie[10]){
  for(int i=0;iloscObliczen>i;i++){
    wyjscie[i]=wejscie[per[i]];
    //cout<<per[i];
    }
}
void rozdzielanie(int iloscObliczen,bool wejscie[10],bool wcz1[5],bool wcz2[5]){
  for(int i=0;iloscObliczen>i;i++){
    wcz1[i]=wejscie[i];
    wcz2[i]=wejscie[i+iloscObliczen];
  }
}
void laczenie(int iloscObliczen,bool cz1[5],bool cz2[5],bool wyjscie[10]){
  for(int i=0;iloscObliczen>i;i++){
    wyjscie[i]=cz1[i];
    wyjscie[i+iloscObliczen]=cz2[i];
  }
}

//szyfrowanie
void szyfrowanie(bool t[8],bool poP10w8[8],bool wyjscie[8]){
  bool t1[4]={0};
  bool t2[4]={0};
  bool pop4w8[8]={0};
  bool poSBoxach[4]={0};
  bool poDodawaniu[8]={0};
  bool doSbox1[4]={0};
  bool doSbox2[4]={0};
  bool poP4[4]={0};
  bool poDodawaniu2[4]={0};
  int P4W8[8]={3,0,1,2,1,2,3,0};
  int P4[4]={1,3,2,0};
  rozdzielanie(4,t,t1,t2);
  Permutacja(8,P4W8,t2,pop4w8);
  dodawanieSymetryczne(8,poP10w8,pop4w8,poDodawaniu);
  rozdzielanie(4,poDodawaniu,doSbox1,doSbox2);
  SboxyILaczenie(naDziesietny(doSbox1),naDziesietny(doSbox2),poSBoxach);
  Permutacja(4,P4,poSBoxach,poP4);
  dodawanieSymetryczne(4,t1,poP4,poDodawaniu2);
  laczenie(4,poDodawaniu2,t2,wyjscie);
}

using namespace std;
int main(){
  //zmienne do tekstu
  bool t1[4]={0};
  bool t2[4]={0};
  bool pop4w8[8]={0};
  bool poP4[4]={0};
  bool poPW[8]={0};
  bool syfr2[8]={0};
  bool szyfr[8]={0};
  //zmienne do klucza
  bool poP10[10]={0};
  bool k1[5]={0};
  bool k2[5]={0};
  bool k1p[5]={0};
  bool k2p[5]={0};
  bool k1k2[10]={0};

  bool poP10w8[8]={0};
  bool poP10w82[8]={0};
  //permutacje
  int P4[4]={1,3,2,0};
  int PW[8]={1,5,2,0,3,7,4,6};
  int PO[8]={3,0,2,4,6,1,7,5};
  int P10[10]={2,4,1,6,3,9,0,8,7,5};
  int P10W8[8]={5,2,6,3,7,4,9,8};
  int P4W8[8]={3,0,1,2,1,2,3,0};
  int Przez1[5]={1,2,3,4,0};
  int Przez2[5]={2,3,4,0,1};
  //stale
  bool kp[10]={1,1,0,0,0,0,0,0,1,1};
  bool w[8]={1,0,1,0,0,0,0,0}; ///<---- to sie wpisuje


  //klucz
  cout<<"Klucz:          \t";
  for(int i=0;10>i;i++)
    cout<<kp[i];
  cout<<endl;
  cout<<"Permutacja P10: \t";
  Permutacja(10,P10,kp,poP10);
    for(int i=0;10>i;i++){
      cout<<poP10[i];
    }
  cout<<endl;
  cout<<"czesci polaczone:\t";
  rozdzielanie(5,poP10,k1,k2);
  Permutacja(5,Przez1,k1,k1p);
  Permutacja(5,Przez1,k2,k2p);
  laczenie(5,k1p,k2p,k1k2);
  for(int i=0;10>i;i++){
      cout<<k1k2[i];
  }
  cout<<endl;
  cout<<"Klucz 1 rundy:   \t";
  Permutacja(8,P10W8,k1k2,poP10w8);
  for(int i=0;8>i;i++){
    cout<<poP10w8[i];
  }
  cout<<endl;
  cout<<"2runda po podzieleniu:\t";
  Permutacja(5,Przez2,k1p,k1);
  Permutacja(5,Przez2,k2p,k2);
  laczenie(5,k1,k2,k1k2);
  for(int i=0;10>i;i++){
      cout<<k1k2[i];
  }
  cout<<endl;
  cout<<"Klucz 2 rundy:   \t";
  Permutacja(8,P10W8,k1k2,poP10w82);
  for(int i=0;8>i;i++){
    cout<<poP10w82[i];
  }
  cout<<endl<<endl<<endl<<"Tekst"<<endl;
  //tekst
  cout<<"tekst:             \t";
  for(int i=0;8>i;i++)
    cout<<w[i];
  cout<<endl<<endl;;

  cout<<"Wiadomosc permutacja PW\t";
  Permutacja(8,PW,w,poPW);
  for(int i=0;8>i;i++)
    cout<<poPW[i];
  cout<<endl;
  cout<<"Szyfrowanie z kluczem1 \t";

  szyfrowanie(poPW,poP10w8,szyfr);
  for(int i=0;8>i;i++)
    cout<<szyfr[i];
  cout<<endl;
  cout<<"Zamian miejsc 4 bitow  \t";
  rozdzielanie(4,szyfr,k1,k2);
  laczenie(4,k2,k1,szyfr);
  for(int i=0;8>i;i++)
    cout<<szyfr[i];
  cout<<endl;
  cout<<"Ciag z kroku poprzed   \t";
  szyfrowanie(szyfr,poP10w82,szyfr);
  for(int i=0;8>i;i++)
    cout<<szyfr[i];
  cout<<endl;

  cout<<"PO koniec szyfrowania  \t";
  Permutacja(8,PO,szyfr,syfr2);
  for(int i=0;8>i;i++)
    cout<<syfr2[i];
  cout<<endl<<endl;

  ///odszyfrowanie
  cout<<"Odszyfrowanie  :       \t";
  Permutacja(8,PW,syfr2,szyfr);
  szyfrowanie(szyfr,poP10w82,szyfr);
  rozdzielanie(4,szyfr,k1,k2);
  laczenie(4,k2,k1,szyfr);
  szyfrowanie(szyfr,poP10w8,szyfr);
  Permutacja(8,PO,szyfr,syfr2);
  for(int i=0;8>i;i++)
    cout<<syfr2[i];
    cout<<endl;

return 0;
}
