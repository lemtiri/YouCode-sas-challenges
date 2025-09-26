#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char titre[24];
    char auteur[24];
    int annee; 
}livre;
struct inis_livre()
    { 
        livre l;
        char ttr[24];
        char atr[24];
        int ann;
        prntf ("Entre les information de livre \n ");
        printf ("titre    :");
        scanf ("%s", ttr);
        printf("Auteur  : ");
        scanf ("%s", atr);
        printf ("annee : ");
        scanf("%d", &ann);
      
      strcpy(ttr,l.titre);
      strcpy(atr,l.auteur);
      l.annee=an;
     return l;
}
  
int main (){
   livre liv;

   liv = inis_livre();
 printf ("informayion de livre \n");
    printf ("Titre : %s\n",liv.titre);
     printf ("Auteur : %s\n",liv.auteur);
      printf ("annee : %d\n",liv.annee);



 return 0;
 
}

   