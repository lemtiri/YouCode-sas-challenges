//   Challenge 2 : Saisie et Affichage des Éléments
//   Écrivez un programme C qui demande à l'utilisateur 
 //  le nombre d'éléments d'un tableau, puis demande à l'utilisateur de saisir ces éléments.
 //   Affichez ensuite les éléments du tableau.


 
 #include <stdio.h>
 #include <stdlib.h>

 int main(){
   
   int taille;
    printf ("Entre le taille : ");
    scanf ("%d",&taille);

   int T[taille];

     // Saisie
     for (int i=0;i<taille;i++){
        printf ("T[%d] : ",i);
        scanf ("%d",&T[i]);
    }

    //Affichage
    for (int i=0;i<taille;i++){
        printf ("T[%d] : %d \n",i,T[i]);
    }

    return 0;
 }