#include <stdio.h>
#include <stdlib.h>
#include <string.n>
typedef struct{
    char nom[50];
    char numero[9];
    char mail[50];
    int id;
}contact;
   typedef contacts contact[1000];
    void ajout_mull(contacts c,int *n)
    {
        
        
        int x;
        int j=*n;
          printf(" Entrez le nombre de contacts que vous souhaitez ajouter : ");
          scanf("%d",&x);
          for(int i=j-1;i<x;i++){
          printf ("Entre les information de contact %d \n";i+1);
          c[i-1].id= i+1;
          printf ("Nom : ");
          scanf("%s", c[i].nom);
          printf ("Numero : ");
          scanf ("%s", c[i].numero);
          printf ("Adresse e-mail : ");
          scanf("%s", c[i].mail);
           (*n)++;
        }
      printf ("Informations saisies avec succes ! ");
      
    }
     void ajout_simple(contacts c ,int *n){
       int i = *n;
          printf ("Entre les information de contact %d \n",i);
          c[i-1].id= i+1;
          printf ("Nom : ");
          scanf("%s", c[i-1].nom);
          do{
          printf ("Numero : +212");
          scanf ("%s", c[i-1].numero);
        }while(strcmp(c[i-1].numero[0],'6')!=0 ||strcmp(c[i-1].numero[0],'7')!=0 );
          
          
          printf ("Adresse e-mail : ");
          scanf("%s", c[i-1].mail);
          (*n)++;
          printf ("Informations saisies avec succes ! ");
     }
     void ajouter(contacts c,int *n){
        int chois;

              printf (" -[1]- Ajout simple  \n");
              printf (" -[2]- Ajout mulltiple\n");
              printf ("Entre votre choix : ");
              scanf("%d",&chois);
        switch(chois){
        
                case 1:ajout_simple(c,&n);
                break;
                case 2:ajout_mull(c,&n);
                break;
                default: printf ("choix indisponible !");
                break;
        }
     }
    
int main(){
    contacts c;
    int n=0;
    int chois;
    do{
         printf (" Entre votre choix : \n");
        printf ("->[ 1 ]<- Ajouter des cotact \n");
        printf ("->[ 2 ]<- Modifier un nemero \n");
        printf ("->[ 3 ]<- supprimer un contact \n");
        printf ("->[ 4 ]<- Affichier tous les contact \n");
        printf ("->[ 5 ]<- Rechercher un contact \n");
        printf ("->[ 0 ]<- Qutter le programme \n");
        scanf ("%d",&chois);
        system("cls");
        switch (chois){

            case 1: ajouter(c,&n);
                   break;
            case 2: modifier(c,n);
                    break;
            case 3: supprimer(c,&n);
                    break;
            case 4: affichier(c,n);
                    break;
            case 5: rechercher(c,n);
                    break;
            default : printf ("Votre choix invalide ! entre un choix entre ( 1 et 5 )\n");
                    break;
        }
    
        
        
}while (chois != 0);


   

    return 0;
}