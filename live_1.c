//   Challenge 1 : Initialisation et Affichage
//   Écrivez un programme C qui initialise un tableau d'entiers
//   avec des valeurs données et affiche ces valeurs. 
//   Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5]
//   et afficher chaque valeur sur une nouvelle ligne.

#include <stdio.h>
#include <stdlib.h>

 int main (){
    
    // Initialisation

   int T[5] = {1,2,3,4,5};

   // Affichage

    for (int i=0;i<5;i++){
        printf (" T[%d] : %d \n",i,T[i]);
    }





    return 0;
 }