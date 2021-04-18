#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Barbut

int zarAtma(void); //fonksiyon portatipi.

int main(void) 
{
  int oyunDurumu, oyuncuPuani, toplam;
  srand(time(NULL));
  toplam = zarAtma(); //Zarın ilk atılışı.
  switch(toplam)
  {
  case 7: case 11: //İlk atışta kazanma.
    oyunDurumu=1;
    break;
  
  case 2: case 3: case 12: //İlk atışta kaybetme.
    oyunDurumu=2;
    break;
  
  default : //Hatırlatma noktası.
    oyunDurumu=0;
    oyuncuPuani=toplam;
    printf("Oyuncunun kazanacağı zar: %d \n",oyuncuPuani);
    break;            
  }
  while(oyunDurumu==0)  //Zar atmaya devam et.
  {
    toplam=zarAtma();
    if(toplam==oyuncuPuani) //Kazanılacak zarı atma.
      oyunDurumu=1;
    else if(toplam==7)  //7 atma ile kaybetme.
      oyunDurumu=2;
  }
    if(oyunDurumu==1)
      printf(" Oyuncu Kazanır");
    else
      printf("Oyuncu Kaybeder");
return 0 ;
}

int zarAtma(void) //Fonksiyon tanımlama.
{
  int zar1, zar2, toplamZar;
  zar1=(1+rand()%6);
  zar2=(1+rand()%6);
  toplamZar = zar1 + zar2;
  printf("Oyuncu %d + %d = %d attı \n",zar1,zar2,toplamZar);
  return toplamZar;
}
