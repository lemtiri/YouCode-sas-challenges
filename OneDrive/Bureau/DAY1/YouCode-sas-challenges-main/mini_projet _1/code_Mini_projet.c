#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char titre[100][25];
    char auteur[100][25];
    float prix[100];
    int quantite[100];
    char titreR[25];
    int n=0;
    int x=-1;
    int chois;
    int s=0;
    do{


        printf ("  -[1]- Ajouter un livre au stock  \n");
        printf ("  -[2]- Afficher tous les livres disponibles \n");
        printf ("  -[3]- Rechercher un livre par son titre \n");
        printf ("  -[4]- Mettre a jour la quantite d un livre \n");
        printf ("  -[5]-Supprimer un livre du stock \n");
        printf ("  -[6]- Afficher le nombre total de livres en stock \n");
        printf ("  -[7]- Arret du programme  \n");
        scanf ("%d",&chois);
       switch(chois){

        case 1: printf ("Entre les information de live :\n");
                printf ("Titre : ");
                scanf ("%s", titre[n]);
                printf (" Auteur : ");
                scanf ("%s", auteur[n]);
                printf ("Prix : ");
                scanf ("%f",&prix[n]);
                printf ("Quantite :");
                scanf ("%d",&quantite[n]);
                n++;
                printf ("l ajout est valide !");
                break;
        case 2: printf (" Tous les livre disponible :\n ");
               printf ("+-----+--------+---------+------+--------+\n");
               printf ("| ID  | Titre  | Auteur  | Prix |Quantite| \n");
               printf ("+-----+--------+---------+------+--------+\n");
                for(int i=0;i<n;i++)
                {
               printf ("| %d  | %s     | %s      |%.02f |%d      |\n ",i+1,titre[i],auteur[i],prix[i],quantite[i]);
                }
                printf ("+-----+--------+---------+------+--------+\n");
                break;
        case 3:
                
                printf ("Entre le titre de livre : ");
                scanf ("%s",&titreR);
                for(int i=0;i<n;i++){
                    if(strcmp(titre[i],titreR)==0){
                       x=i;
                       break;
                    }
                }
                 if(x==(-1))
                 printf ("! le livre  n'existe pas !\n");
                else {
                printf ("Titre    : %s",titre[x]);
                printf ("Auteur   : %s",auteur[x]);
                printf ("Prix     : %.2f ",prix[x]);
                printf ("Quantite : %d",quantite[x]);

                }
                break;
        case 4: 
                int nouvquantite;
                
                printf ("Entre le titre de livre : ");
                scanf ("%s",&titreR);
                for(int i=0;i<n;i++){
                    if(strcmp(titre[i],titreR)==0){
                       x=i;
                       break;
                    }
                } 
                 if(x==(-1))
                 printf ("! le livre  n'existe pas !");
                else {
                    printf ("Entre la nouvelle quantite : ");
                    scanf("%d",&nouvquantite);
                   quantite[x] = nouvquantite;
                }
                break;
        case 5: 
                printf ("Entre le titre de livre : ");
                scanf ("%s",&titreR);
                for(int i=0;i<n;i++){
                    if(strcmp(titre[i],titreR)==0){
                       x=i;
                       break;
                    }
                } 
                 if(x==(-1))
                 printf ("! le livre  n'existe pas !");
                else {
                    for(int i=x;i<n-1;i++){
                        titre[i]  = titre[i+1];
                        auteur[i] = auteur[i+1];
                        prix[i] = prix[i+1];
                        quantite[i] = quantite[i+1];
                    }
                    n--; 
                    }
        case 6: 
       printf("le Nombre Total de Livres en Stock : %d ",n);
     
       }
       break;
    }while(chois !=7);


    return 0;
}