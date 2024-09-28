#include <stdio.h>
#include <stdlib.h>

int main()
{
  float temperature;

  printf("Programme qui verifie la temperature du person. \n");


  printf("Veuillez entrer la temperatur en (c): ");
  scanf("%f",&temperature);



  if(temperature>=37 &&temperature<=37.5 ){
        printf("votre temperature est normale.");
  }


  else

    printf("Vous avez de la fievre.");
    return 0;
}
