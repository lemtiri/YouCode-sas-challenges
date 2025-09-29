#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char nomR[25];
   int z = -1;
   int id2,id3;
   int n=10;
   int chois2;
  typedef struct{
    int id;
    char nom[50];
    char numero[10];
    char mail[50];
  }contact;
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"

typedef contact contacts[1000];

void ajout_mull(contacts c);

void ajout_simple(contacts c );
 
void ajouter(contacts c);

void affichie_simple(contacts c);

void affiche_mull(contacts c);

void affichier(contacts c);

void affichParId(contacts c,int id3);

int recherch(contacts c);

void modification(contacts c);

void supprimer(contacts c);



int main(){
    contacts c =      {
                       {1,"abdellah","0604789190","lemtiriabdellah@gmail.com"},
                       {2,"mohammed","0612344321","simo0909@gmail.com"},
                       {3,"khalid",   "068748484","khalid.bai@gmail.com"},
                       {4,"hassn","0609786543","hqssanret@gmail.com"},
                       {5,"rached","0632135145","abytrehm99@gmail.com"},
                       {6,"hassni","0654531886","hassni@gmail.com"},
                       {7,"morad","0615135135","moradiiiq@gmail.com"},
                       {8,"ali","0735184484","lmali76@gmail.com"},
                       {9,"brahim","0712344321","ibrahimiii@gmail.com"},
                       {10,"oussama","0509876411","oussama54@outlok.com"}
                       };

    int chois;
    do{
       
        printf ("->[ 1 ]<- Ajouter des cotact \n");
        printf ("->[ 2 ]<- Modifier un nemero \n");
        printf ("->[ 3 ]<- supprimer un contact \n");
        printf ("->[ 4 ]<- Affichier  \n");
        printf ("->[ 5 ]<- Rechercher un contact \n");
        printf ("->[ 0 ]<- Qutter le programme \n");
        printf ("->Entre votre choix : \n");
        scanf ("%d",&chois);
        
        switch (chois){

            case 1: ajouter(c);
                   break;
            case 2: modification(c);
                    break;
            case 3: supprimer(c);
                    break;
            case 4: affichier(c);
                    break;
            case 5: recherch(c);
                    break;
            default : printf ("Votre choix invalide ! entre un choix entre ( 1 et 5 )\n");
                    break;
     }



}while (chois != 0);




    return 0;
}

void ajout_mull(contacts c){
        int x;

          printf(" Entrez le nombre de contacts que vous souhaitez ajouter : ");
          scanf("%d",&x);
          for(int i=n;i<x;i++){
          printf ("Entre les information de contact %d \n",i+1);
          c[i].id= i+1;
          printf ("Nom : ");
          scanf("%s", c[i].nom);
          do{
          printf ("Numero : \n+212 ");
          scanf ("%9s", c[n].numero);
        }while(c[n].numero[0] != '6' && c[n].numero[0]!= '7' && c[n].numero[0] != '5' );
          printf ("Adresse e-mail : ");
          scanf("%s", c[i].mail);
           n++;
        }
      printf ("Informations saisies avec succes ! \n");

    }
void ajout_simple(contacts c ){

          printf ("Entre les information de contact %d \n",n+1);
          c[n].id= n+1;
       
        printf ("Nom : ");
        scanf("%25s", c[n].nom);
        do{
          printf ("Numero : \n+212 ");
          scanf ("%9s", c[n].numero);
        }while(c[n].numero[0] != '6' && c[n].numero[0]!= '7' && c[n].numero[0] != '5' );
          printf ("Adresse e-mail : ");
          scanf("%50s", c[n].mail);
          n++;
          printf (GREEN"Informations saisies avec succes !\n "RESET);
     }
void ajouter(contacts c){
       
    printf ("-[1]- Ajouter un contact \n ");
    printf ("-[2]- Ajouter plusieurs contact \n");
    printf ("Entre votre choix : ");
    scanf ("%d",&chois2);
    system("cls");
        switch(chois2){
  system("cls");
                case 1:ajout_simple(c);
              
                break;

                case 2:
                   system("cls");
                   ajout_mull(c);
             
                break;
                default: printf ("option non valide !\n");
                break;
        }
      }

void supprimer(contacts c){

       

        printf (" -[1]- supprimer par nom \n");
        printf (" -[2]- supprimer par ID \n");
        printf ("Entre votre choix : ");
        scanf ("%d",&chois2);
        system("cls");
        switch (chois2){
          case 1:
                printf ("Entre le nom de contact  : ");
                scanf ("%s", nomR);
                    for(int i=0;i<=n;i++){
                    if(strcmp(c[i].nom,nomR)==0){
                      z=i;
                       break;
                    }
                }

                if(z==(-1))
                printf ("Il n y a aucun contact avec ce nom ! \n");
                else {
               
               affichParId(c,z);
                printf("-[1]-Confirmer\n");
                printf("-[2]-Anuler \n ");
                printf ("Entre votre choix : ");
                scanf ("%d",&chois2);
                 system("cls");
                switch (chois2)
                {
                case 1 : for(int i=z;i<=n;i++){
                         c[i] = c[i+1];
                         }
                        n--;
                        for(int i=0;i<n;i++){
                          c[i].id = i+1;
                        }
                         printf (GREEN"Supprime avec succes !\n");
                  break;
                case 2: break;
                default:printf("Option non valide ! \n");
                  break;
                }

              }      
           break;
                     
                  
                    
             
          case 2 : printf ("Entre le ID de contact : ");
                   scanf ("%d",&id2);
                if(id2 >=1 && id2 <= n){
                    affichParId(c,id2);
                printf("-[1]-Confirmer\n");
                printf("-[1]-Anuler \n ");
                printf ("Entre votre choix : ");
                scanf ("%d",&chois2);
                system("cls");
                switch (chois2){
                    case 1: for(int i=id2-1;i<=n;i++){
                                  c[i] = c[i+1];
                                      }
                              printf ("Supprime avec succes !\n");
                                      n--;
                                      for(int i=0;i<n;i++){
                                           c[i].id=i+1;
                                         }
                     
                                        
                  
                   break;
                  case 2: break;
                  default : printf ("Option non valide !\n");
                  }
                 
           





        }
         else{

                    printf ("Il n y a aucun contact avec ce nom ! \n");

                   }
      }
    }
void affichie_simple(contacts c ){
        printf (" -[1]- Affichier par nom \n");
        printf (" -[2]- Afichier par ID \n");
        printf ("  Entre votre choix : ");
        scanf ("%d",&chois2);

        switch (chois2){
          case 1:
                printf ("Entre le nom de contact  : ");
                scanf ("%s",&nomR);
                    for(int i=0;i<=n;i++){
                    if(strcmp(c[i].nom,nomR)==0){
                      z=i;
                       break;
                    }
                }
                if(z==(-1))
                 printf ("Il n y a aucun contact avec ce nom \n");
                else {
    printf("+----+-----------------+--------------+--------------------------+\n");
    printf("| ID | Nom             | Numero       | Email                    |\n");
    printf("+----+-----------------+--------------+--------------------------+\n");

    
        printf("| %-3d | %-15s | %-12s | %-30s |\n",
               c[z].id, c[z].nom, c[z].numero, c[z].mail);
    

    printf("+----+-----------------+--------------+--------------------------+\n");
       
      }
      break;
  case 2: printf ("Entre le ID de contact : ");
                   scanf ("%d",&id2);
                   if(id2 >0 && id2 <= n){
    printf("+----+-----------------+--------------+--------------------------+\n");
    printf("| ID | Nom             | Numero       | Email                    |\n");
    printf("+----+-----------------+--------------+--------------------------+\n");

    
        printf("| %-3d | %-15s | %-12s | %-30s |\n",
               c[id2].id, c[id2].nom, c[id2].numero, c[id2].mail);
    

    printf("+----+-----------------+--------------+--------------------------+\n");      
}
        }
}
void affichie_mull(contacts c) {
    printf("+----+-----------------+--------------+--------------------------+\n");
    printf("| ID | Nom             | Numero       | Email                    |\n");
    printf("+----+-----------------+--------------+--------------------------+\n");

    for (int i = 0; i < n; i++) {
        printf("| %-3d | %-15s | %-12s | %-30s |\n",
               c[i].id, c[i].nom, c[i].numero, c[i].mail);
    }

    printf("+----+-----------------+--------------+--------------------------+\n");
  }


int recherch(contacts c){
     system("cls");
        printf (" -[1]- rechercher par nom \n");
        printf (" -[2]- rechercher par ID \n");
        printf ("Entre votre choix : ");
        scanf ("%d",&chois2);
         system("cls");

        switch (chois2){
          case 1:
                printf ("Entre le nom de contact  : ");
                scanf ("%s", nomR);
                    for(int i=0;i<=n;i++){
                    if(strcmp(c[i].nom,nomR)==0){
                      z=i;
                       break;
                    }
                }
                if(z==(-1)){
                  printf ("Il n y a aucun contact avec ce nom \n");
                  return z;
                }
                 
                else {
                      affichParId(c,z);
                        return z;
                         }
                        
                    
                    
                    break;
          case 2: printf ("Entre le ID de contact : ");
                  scanf ("%d",&id2);
                   if(id2 >0 && id2 <= n){
                 affichParId(c,id2-1);
                 return id2-1;
                    }
                    break;
          default :printf ("Option non valide ! \n");
       
                  }
                }
void affichier(contacts c){
  system("cls");
  printf ("-[1]- Affichier un contact \n ");
  printf ("-[2]- Affichier plusieurs contact \n");
  printf ("Entre votre choix : ");
  scanf ("%d",&chois2);
  switch (chois2)
  {
  case 1: affichie_simple(c);
  break;
  case 2: affichie_mull(c);
  break;
  default : printf("Option non valide ! \n");
  break;
  }
 
}

void affichParId(contacts c,int id3){
 system("cls");
 printf("+----+-----------------+--------------+--------------------------+\n");
    printf("| ID | Nom             | Numero       | Email                    |\n");
    printf("+----+-----------------+--------------+--------------------------+\n");

    
        printf("| %-3d | %-15s | %-9s | %-30s |\n",
               c[id3].id, c[id3].nom, c[id3].numero, c[id3].mail);
    

    printf("+----+-----------------+--------------+--------------------------+\n\n");  
   
}

void modification(contacts c){
   system("cls");
  int y = recherch(c) ;
 if(y == -1)
 return ;
 else{
  printf("Entre la nouvelle information de %s \n",c[y].nom);
        do{
          printf ("Numero : \n+212 ");
          scanf ("%9s", c[y].numero);
        }while(c[y].numero[0] != '6' && c[y].numero[0]!= '7' && c[y].numero[0] != '5' );
          printf ("Adresse e-mail : ");
          scanf("%50s", c[y].mail);
       
          printf (GREEN"Informations modifier  avec succes !\n "RESET);
     }
    
    }

  
  
