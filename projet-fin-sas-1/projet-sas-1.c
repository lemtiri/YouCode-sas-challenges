#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define RED "\e[1;31m"
#define Max 50
typedef struct{
    int jour;
    int mois;
    int annee;
}date;
typedef struct{
    int id;
    char nom[50]; 
    char prenom[50];
    int Nmaillot;
    char poste[10];
    int age;
    int buts;
    date dateInscription;
    char status[10];
    
}joueur;
typedef joueur joueurs[Max];
int n=10;
int chois2,chois3;
void ajout_mll(joueurs j );
void ajout_simple(joueurs j);
void ajouter(joueurs j);
int main(){
   int chois;
   
   joueurs j={  {5478, "abdellah", "lemtiri", 7, "Milieu", 22, 5, {1, 3, 2025}, "Titulaire"},
                {6654, "Youssef", "El Amrani", 10, "Milieu", 24, 3, {2, 3, 2025}, "Titulaire"},
                {4214, "Rachid", "Benali", 5, "Défenseur", 25, 1, {3, 3, 2025}, "Remplacant"},
                {6315, "tarik", "doulali", 1, "Attaquant", 23, 0, {4, 3, 2025}, "Titulaire"},
                {6987, "Amine", "Lahmar", 9, "Attaquant", 21, 2, {5, 3, 2025}, "Titulaire"},
                {4124, "Mounir", "Fassi", 8, "Milieu", 26, 1, {6, 3, 2025}, "Remplacant"},
                {6987, "Omar", "Khalfi", 4, "Défenseur", 27, 0, {7, 3, 2025}, "Titulaire"},
                {6974, "Adil", "Mokhtar", 12, "Gardien", 28, 0, {8, 3, 2025}, "Remplacant"},
                {5479, "Hamid", "Rifai", 11, "Attaquant", 29, 4, {9, 3, 2025}, "Titulaire"},
                {3654, "Nabil", "Toumi", 6, "Milieu", 30, 2, {10, 3, 2025}, "Remplacant"}};
do{
   printf (CYAN" -[ 1 ]- Ajouter un joueur \n");
   printf (" -[ 2 ]- Affichier les joueurs  \n");
   printf (" -[ 3 ]- Modifier un joueur  \n");
   printf (" -[ 4 ]- Supprimer un joueur \n");
   printf (" -[ 5 ]- Rechercher un joueur   \n");
   printf (" -[ 6 ]- Statistiques \n");
   printf (" -[ 0 ]- Quitter le programme \n"RESET);
   scanf ("%d",&chois);
switch(chois){

    case 1 : ajouter(j);
            break;
    case 0: printf (CYAN"Au revoir ! le programme est terminie !\n"RESET);
            break;
    default : printf (YELLOW"Choisir non Disponible dans la liste \n"RESET);
        
   }
}while(chois != 0);
   
   return 0;
}


void ajout_simple(joueurs j){
        printf ("Entre les information de joueur N%d \n",n);
        int numM;
        int x;
        srand(time(NULL));
        int idd = rand() % 1000 + n;
        j[n].id = idd;
        printf ("Nom    :  ");
        fgets(j[n-1].nom,50,stdin);
        printf ("Prenom :");
        fgets(j[n-1].prenom,50,stdin);
        do{
        printf ("Numero d mailot : ");
        scanf("%d",&numM);
        for(int i=0;i<n;i++){
                if(j[i].Nmaillot == numM ){
                        x = -1;
                }
                else {
                        j[n].Nmaillot = numM;
                        x=1;
                }
        }
       }while(x  == -1);
       
        do{
        
        printf ("Entre le poste \n");
        printf ("-[ 1 ]- gardien \n");
        printf ("-[ 2 ]- défenseur\n ");
        printf ("-[ 3 ]- milieu \n ");
        printf ("-[ 4 ]- attaquant\n");
        scanf ("%d",&chois2);
        printf ("Entre votre choix : ");
        switch (chois2){
        
        case 1 : strcpy(j[n].poste,"gardien");
                break;
        case 2 : strcpy(j[n].poste,"défenseur");
                break;
        case 3 : strcpy(j[n].poste,"milieu");
                break;
        case 4 : strcpy(j[n].poste,"attaquant");
                break;
        default:printf (RED"option non valide ! \n"RESET);
                break;
        } 
        }while (chois2 < 1 && chois2 >4 );
        printf (" Buts : ");
        scanf ("%d",&j[n].buts);
        printf ("Date Inscription \n ");
        printf ("jour : ");
        scanf("%d",&j[n].dateInscription.jour);
        printf ("mois : ");
        scanf("%d",&j[n].dateInscription.mois);
        printf("annee : ");
        scanf("%d",&j[n].dateInscription.annee);
         do{
        printf ("Statu  \n");
        printf ("-[ 1 ]- titulaire \n");
        printf ("-[ 2 ]- remplacant\n ");
        printf ("Entre votre choix : ");
        scanf ("%d",&chois3);

        switch(chois3){
        
                case 1: strcpy(j[n].status,"titulaire");
                        break;
                case 2: strcpy(j[n].status,"remplacant");
                        break;
                default : printf(RED"Option non valide \n "RESET);
                        break;
                
        }
        

        
         }while(chois3<0&&chois3 >2);
          
}
void ajout_mll(joueurs j ){
        int k;
        printf ("Entrez le nombre de joueurs que vous souhaitez ajouter : ");
        scanf ("%d",&k);
        for(int i=n;i<n+k;i++){
         printf ("Entre les information de joueur N%d \n",i);
        int numM;
        int x;
        int idd = rand() % 1000 + n;
        j[i].id = idd;
        printf ("Nom    :  ");
       scanf("%s", j[i].nom);
        printf ("Prenom :");
       scanf("%s", j[i].prenom);
        do{
        printf ("Numero d mailot : ");
        scanf("%d",&numM);
        for(int p=0;p<n;p++){
                if(j[p].Nmaillot == numM ){
                        x = -1;
                }
                else {
                        j[i].Nmaillot = numM;
                        x=1;
                }
        }

}while(x  == -1);
       
        do{
        
        printf ("Entre le poste \n");
        printf ("-[ 1 ]- gardien \n");
        printf ("-[ 2 ]- défenseur\n ");
        printf ("-[ 3 ]- milieu \n ");
        printf ("-[ 4 ]- attaquant\n");
        scanf ("%d",&chois2);
        printf ("Entre votre choix : ");
        switch (chois2){
        
        case 1 : strcpy(j[i].poste,"gardien");
                break;
        case 2 : strcpy(j[i].poste,"défenseur");
                break;
        case 3 : strcpy(j[i].poste,"milieu");
                break;
        case 4 : strcpy(j[i].poste,"attaquant");
                break;
        default:printf (RED"option non valide ! \n"RESET);
                break;
        } 
        }while (chois2 < 1 || chois2 >4 );
        printf (" Buts : ");
        scanf ("%d",&j[i].buts);
        printf ("Date Inscription \n ");
        printf ("jour : ");
        scanf("%d",&j[i].dateInscription.jour);
        printf ("mois : ");
        scanf("%d",&j[i].dateInscription.mois);
        printf("annee : ");
        scanf("%d",&j[i].dateInscription.annee);
         do{
        printf ("Statu  \n");
        printf ("-[ 1 ]- titulaire \n");
        printf ("-[ 2 ]- remplacant\n ");
        printf ("Entre votre choix : ");
        scanf ("%d",&chois3);

        switch(chois3){
        
                case 1: strcpy(j[i].status,"titulaire");
                        break;
                case 2: strcpy(j[i].status,"remplacant");
                        break;
                default : printf(RED"Option non valide \n "RESET);
                        break;
                
        }
        

        
         }while(chois3<0||chois3 >2);
         n++;
        }
}
void ajouter(joueurs j){
        do{
        printf (CYAN" -[ 1 ]-  Ajouter un seul joueur \n ");
        printf (" -[ 2 ]-  Ajouter plusieur joueurs \n "RESET);
        scanf("%d",&chois2);
        
        switch(chois2){
                case 1: ajout_simple(j);
                break;
                case 2: ajout_mll(j);
                break;
                default : printf (YELLOW"Optin non valide ! \n"RESET);
                


}
        }while(chois2 <0 && chois2>2);

}