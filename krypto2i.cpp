#include <iostream>
#include "klucz.h"
#include "tekst.h"


using namespace std;
int main(){
  bool w[8]={1,1,1,1,0,0,0,0};
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

  Per10(kp,P10,poP10);
    for(int i=0;10>i;i++){
      cout<<poP10[i];
    }
  cout<<endl;
  PrzezIPodzia(poP10,k1,k2,Przez1);
  LaczeniePolowek(k1,k2,k1k2);
  for(int i=0;10>i;i++){
      cout<<k1k2[i];
  }
  cout<<endl;
  Per10w8(k1k2,poP10w8,p10w8);
  for(int i=0;8>i;i++){
    cout<<poP10w8[i];
  }
  cout<<endl;
return 0;
}
