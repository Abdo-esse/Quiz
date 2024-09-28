#include <stdio.h>
#include <stdlib.h>

int main()
{
   float base,hauteur,aire,peremetre;


   printf("Programme qui calcule l'aire et le peremetre d' un triangl epuilateral . \n");

   printf("Veuillez entrer la base : ");
   scanf("%f",&base);

    printf("Veuillez entrer la hauteur : ");
   scanf("%f",&hauteur);

   aire =( base * hauteur )/2;

   peremetre = 3* base;

   printf(" l'aire de cette triangle est : %.2f \n",aire);

   printf(" le peremetre de cette triangle est : %.2f",peremetre);


    return 0;
}
