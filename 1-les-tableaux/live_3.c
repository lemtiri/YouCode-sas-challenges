//   Challenge 3 : Somme des Éléments
//   Écrivez un programme C qui calcule et affiche 
//   la somme des éléments d'un tableau d'entiers. 
//   Le programme doit demander le nombre d'éléments,
//   puis les éléments du tableau, et afficher la somme totale.



#include <stdio.h>
#include <stdlib.h>

int main(){
   int taille;
   printf ("Entre la taille : ");
   scanf ("%d",&taille);

   int T[taille];
   int somme=0;

// Saisie
   for(int i=0;i<taille;i++){
   
   printf ("T[%d] : ",i);
   scanf ("%d",&T[i]);

   }

    //Somme des Éléments

  for (int i=0;i<taille;i++){

      somme = somme + T[i];

  }
   // Affichage de la somme totale
  printf ("La somme de element de ce tableua est : %d ",somme);

    return 0;
}