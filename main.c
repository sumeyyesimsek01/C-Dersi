#include "stdio.h"
#include "stdlib.h"    //rand
#include "time.h"      //srand icindeki time()
#include "stdbool.h"
#include "math.h"
/*
  Fonksiyona dizinin parametre olarak verilmesi
*/
#define UZUNLUK 5


void DiziKareAl(int dizi[], int diziBoyutu);
void DiziYazdir(int dizi[], int diziBoyutu);

int main(void){
  int dizim[UZUNLUK] = {10, 11, 100, 200, -5};
  
  printf("\nDizi ilk hali:\n");
  DiziYazdir(dizim, UZUNLUK);

  DiziKareAl(dizim, UZUNLUK);

  printf("\nDizi son hali:\n");
  DiziYazdir(dizim, UZUNLUK);
  return 0;
}

void DiziYazdir(int dizi1[], int diziBoyutu){
  int ind;
  for(ind=0; ind<diziBoyutu; ind++){
    printf("\n%d. eleman = %d", ind+1, dizi1[ind]);
  }
}

void DiziKareAl(int dizi2[], int diziBoyutu){
  int ind;
  for(ind=0; ind<diziBoyutu; ind++)
    dizi2[ind] = dizi2[ind] * dizi2[ind];
}