#include <stdio.h>
#include <stdlib.h>
  typedef struct {
    char nom[25];
    char prenome[25];
    int note[4];
  }etudiant;



int main(){
   etudiant etd[25];
    int  n;
    printf("Entre le nmbre de les etudiant : ");
    scanf("%d",&n);
    for(int i=0 ; i<n;i++){
    printf ("Entre les information de etudiant %d \n",i+1);
    printf ("Nom    :");
    scanf ("%s", etd.nom);
    printf("Prenome : ");
    scanf ("%s", etd.prenome);
    for(int j=0;j<4;j++){
    printf ("Note N%d: ",i+1);
    scanf("%d", &etd.note[j]);
    }
  
    }
    for(int i=0;i<n;i++){
        printf ("les information de l etudiant %d \n",i+1);
        printf ("Nom    : %s\n", etd.nom);
        printf ("Prenom : %s\n", etd.prenome);
        for(int j=0;j<4;j++){
        printf ("Note   : %d \n", etd.note);
        }
    }


    return 0;
}