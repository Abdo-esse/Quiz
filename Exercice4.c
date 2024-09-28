#include <stdio.h>
#include <stdlib.h>


int main()
{


    int i,max,min;
    int n=5;

    int t[n];


       for (i=0;i<n;i++){
        printf("Veuillez saisir la temperature nombra %d:  ",i+1);
        scanf("%d",&t[i]);
       }
 max=t[0];
 min=t[0];
        for (i=0;i<n;i++)
          if (max<t[i]){
            max=t[i];

          }
          printf("le plus haute temperatur est : %d \n",max);
           for (i=0;i<n;i++)
           if (min>t[i]){
            min=t[i];

          }
          printf("le plus bass temperatur est : %d",min);




    return 0;
}
