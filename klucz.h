#include <iostream>


using namespace std;
void Per10(bool kp[10],int P10[10],bool poP10[10]){
  for(int i=0;10>i;i++)
    poP10[i]=kp[P10[i]];
}
void PrzezIPodzia(bool poP10[10],bool k1[5],bool k2[5],int Przez1[5]){
  for(int i=0;5>i;i++){
    k1[i]=poP10[Przez1[i]];
    k2[i]=poP10[Przez1[i]+5];
  }
}
void LaczeniePolowek(bool k1[5],bool k2[5],bool k1k2[10]){
  for(int i=0;5>i;i++){
    k1k2[i]=k1[i];
    k1k2[i+5]=k2[i];
  }
}
void Per10w8(bool k1k2[10],bool poP10w8[8],int p10w8[8]){
  for(int i=0;8>i;i++)
    poP10w8[i]=k1k2[p10w8[i]];
}
