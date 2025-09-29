#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nom[24];
    char prenom[24];
    int age; 
}personne;

int main(){
    personne p;
      printf ("Entre les information de personne : \n");
    printf ("Nom    :");
    scanf ("%s",&p.nom);
    printf("Prenome : ");
    scanf ("%s",&p.prenom);
    printf ("Age    : ");
    scanf("%d",&p.age);


    printf ("les informmation de personne : \n");
    printf ("Nom    : %s\n",p.nom);
    printf ("Prenome: %s \n",p.prenom);
    printf ("Age    : %d \n",p.age);

    return 0;
}