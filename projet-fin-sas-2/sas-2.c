#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define max 250
#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define CYAN     "\033[36m"
#define YELLOW  "\033[33m"
#define RED "\e[1;31m"

int nbr=20;

char nom[50];
typedef struct {
    int id;
    char nom[50];
    char espece[50];
    int age;
    char habitat[50];
    char Categori[11];
    float poids;
    char date_ar[60];
}animal;

typedef animal animuax[max];
// fx pour valide le nom pas de nombre
int nom_valid(char nom[]) {
    for (int i = 0; nom[i] != '\0'; i++) {
        if (isdigit(nom[i])) 
		return -1;
    }
    return 1;
}
// fx pour ajoute la date exact 
void date_acc(char d[]) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    sprintf(d,"%02d/%02d/%04d %02d:%02d:%02d",
            tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900,
            tm.tm_hour, tm.tm_min, tm.tm_sec);
}

void ajout_simple(animuax anm){
    int choix;
    printf (CYAN "Entre les information de animual N%d \n",nbr+1, RESET);
	anm[nbr].id = nbr+1;
	date_acc(anm[nbr].date_ar);
    do{
	printf ("Nom    : ");
    scanf ("%s", anm[nbr].nom);
	 if(nom_valid(anm[nbr].nom) == -1){
		printf (RED " Nom Invalide !\n " RESET);
		printf(YELLOW "N entre pas de numero dans le nom \n" RESET);
	 }
	}while(nom_valid(anm[nbr].nom)== -1);

    
   
   do{
    
    printf ("Choisisser l espece \n");
    printf ("-[ 1 ]- lion \n");
    printf ("-[ 2 ]- tigre \n");
    printf ("-[ 3 ]- girafe\n");
    printf ("-[ 4 ]- elephant \n");
    printf ("-[ 5 ]- crocodile\n");
    printf ("-[ 6 ]- Autre .. \n");
    printf (CYAN "Entre votre choix : " RESET);
    scanf ("%d",&choix);

    switch(choix){
        case 1: strcpy(anm[nbr].espece,"lion");
                break;
        case 2: strcpy(anm[nbr].espece,"tigre");
                break;
        case 3: strcpy(anm[nbr].espece,"girafe");
                break;
        case 4: strcpy(anm[nbr].espece,"elephant");
                break;
        case 5: strcpy(anm[nbr].espece,"crocodile");
                break;

        default : printf (YELLOW "Choix invalide ! \n " RESET);
        break;
    }

   }while(choix <1 || choix > 5);
do{
    printf ("Age    : ");
    scanf ("%d",&anm[nbr].age);
    
    if (anm[nbr].age < 1 ){
        printf (RED "Age invalide !\n" RESET);
		printf (YELLOW "veuillez entre un age entre 1 et 120 \n" RESET);
    }
    }while(anm[nbr].age < 1 );
    do{
      printf (" Choisisser l habutat \n");
      printf(" -[ 1 ]- Savane \n");
      printf ("-[ 2 ]- Jungle \n");
      printf ("-[ 3 ]- Desert \n");
      printf ("-[ 4 ]- Aquatique\n");
      printf (CYAN "Entre votre choix : " RESET);
      scanf("%d",&choix);

    switch(choix){
        case 1 :strcpy(anm[nbr].habitat,"savane");
                break;
        case 2 : strcpy(anm[nbr].habitat,"Jungle");
                break;
        case 3: strcpy(anm[nbr].habitat,"desert");
                break;
        case 4: strcpy(anm[nbr].habitat,"aquatique");
                break;
        default : (YELLOW "Option non valide ! \n" RESET);
    }
    }while(choix <1 || choix >4);
    do{
        printf ("Choisisser categorie \n");
        printf ("-[ 1 ]- carnivores \n");
        printf ("-[ 2 ]- herbivores \n");
        printf ("-[ 3 ]- omnivores \n");
        printf (CYAN "Entre votre choix : " RESET);
        scanf ("%d",&choix);

        switch (choix)
        {
        case 1: strcpy(anm[nbr].Categori,"carnivores");
            break;
        case 2: strcpy(anm[nbr].Categori,"herbivores");
            break;
        case 3: strcpy(anm[nbr].Categori,"omnivores");
            break;
        default : printf (YELLOW "Option non valide ! \n" RESET);
            break;
        }
    }while(choix <1|| choix > 3);
    
    do{
		printf ("Poids en kg :  ");
        scanf ("%f",&anm[nbr].poids);
    if(anm[nbr].poids <0.01 ){
        printf (RED "Poids invalide !\n" RESET); 
		printf (YELLOW "Entre un poids superieur a 0.01 kg\n" RESET);
         }
	}while(anm[nbr].poids <0.01 );
    
	printf(GREEN " %s ajoute avec secces ! \n",anm[nbr].nom, RESET);
	nbr ++;
}
void ajout_plus(animuax anm){
	int n;
	printf ("Combien d animuax voleuz vous ajoutre : ");
	scanf ("%d",&n);
    getchar();
	for(int i=0;i<n;i++){
		ajout_simple(anm);
	}
}
void ajouter(animuax anm){
	int choix;
   do{
    printf (" -[ 1 ]- Ajouter un animal \n");
    printf (" -[ 2 ]- Ajouter plusieurs animaux \n");
    printf (" -[ 0 ]- Quiter \n");
	printf (CYAN "Entre votre choix : " RESET);
    scanf ("%d",&choix);
	
    switch(choix){
        case 1: ajout_simple(anm);
                break;
        case 2 : ajout_plus(anm);
                break;
        case 0: printf (CYAN "Retour au menu prancipal \n " RESET);break;
        default : printf (YELLOW "Option non valide ! \n" RESET);
        
    

    }

   }while(choix!=0 );
}

void afficher_plus(animuax anm) {
   
    printf(CYAN "+----+------------+------------+-----+---------+------------+---------------+\n" RESET);
    printf(CYAN "| ID | Nom        | Espece     | Age | Poids   | Habitat    | Categorie     |\n" RESET);
    printf(CYAN "+----+------------+------------+-----+---------+------------+---------------+\n" RESET);

    for(int i = 0; i < nbr; i++) {
        printf("| %-2d | %-10s | %-10s | %-3d | %-7.1f | %-10s | %-13s |\n",
               anm[i].id, anm[i].nom, anm[i].espece, anm[i].age, anm[i].poids,
               anm[i].habitat, anm[i].Categori);
    
        }

    printf(CYAN "+----+------------+------------+-----+---------+------------+---------------+\n" RESET);

    for(int i = 0; i < nbr; i++) {
        printf(GREEN "ID %d - Date d'arrivee : %s\n" RESET, anm[i].id, anm[i].date_ar);
        printf("---------------------------------------------------------------\n");
    }
	        for(int i=0;i<nbr;i++){
	 if(strcmp(anm[i].espece, "Lion") == 0 && anm[i].age > 20) {
            printf(YELLOW " Attention ! ID %d Lion a dspasss 20 ans \n",anm[i].id, RESET);
       
    }
}
}



void trier_nom(animuax anm){
 animal tmp;
    for(int i=0; i<nbr-1; i++) {
        for(int j=0; j<nbr-i-1; j++) {
            if(strcmpi(anm[j].nom,anm[j+1].nom)>0) {
                tmp = anm[j];
                anm[j] = anm[j+1];
                anm[j+1] = tmp;
            }
        }
    }
    afficher_plus(anm);
}
void trier_age(animuax anm){
 animal tmp;
    for(int i=0; i<nbr-1; i++) {
        for(int j=0; j<nbr-i-1; j++) {
            if(anm[j].age < anm[j+1].age) {
                tmp = anm[j];
                anm[j] = anm[j+1];
                anm[j+1] = tmp;
            }
        }
    }
    afficher_plus(anm);
}
void affichier_simpl_idx(animuax anm,int n){
	printf(CYAN "+----+------------+------------+-----+---------+------------+---------------+\n" RESET);
    printf(CYAN "| ID | Nom        | Espece     | Age | Poids   | Habitat    | Categorie     |\n" RESET);
    printf(CYAN "+----+------------+------------+-----+---------+------------+---------------+\n" RESET);
	printf("| %-2d | %-10s | %-10s | %-3d | %-7.1f | %-10s | %-13s |\n",
               anm[n].id, anm[n].nom, anm[n].espece, anm[n].age, anm[n].poids,
               anm[n].habitat, anm[n].Categori);
	printf(CYAN "+----+------------+------------+-----+---------+------------+---------------+\n" RESET);
	printf(GREEN "ID %d - Date d'arrivee : %s\n" RESET, anm[n].id, anm[n].date_ar);
    printf("---------------------------------------------------------------\n");
		 if(strcmp(anm[n].espece, "Lion") == 0 && anm[n].age > 20) {
            printf(YELLOW " Attention ! ID %d Lion a dspasss 20 ans \n",anm[n].id, RESET);
		 }
}
void affich_habitat(animuax anm){
    int x=-1;
    int choix ;
    char Rhabitat[50];
        do{
      printf (" Choisisser l habutat \n");
      printf(" -[ 1 ]- Savane \n");
      printf ("-[ 2 ]- Jungle \n");
      printf ("-[ 3 ]- Desert \n");
      printf ("-[ 4 ]- Aquatique\n");
      printf (CYAN "Entre votre choix : " RESET);
      scanf("%d",&choix);
      getchar();
    switch(choix){
        case 1 :strcpy(Rhabitat,"savane");
                break;
        case 2 : strcpy(Rhabitat,"Jungle");
                break;
        case 3: strcpy(Rhabitat,"desert");
                break;
        case 4: strcpy(Rhabitat,"aquatique");
                break;
        default : ( YELLOW "Option non valide ! \n" RESET);
    }
    }while(choix <1 || choix >4);
for(int i=0;i<nbr;i++){
    if(strcmpi(Rhabitat,anm[i].habitat)==0){
        affichier_simpl_idx(anm,i);
        x=i;
    }
}
if(x==-1) {
    printf (YELLOW "iln y a aucun animal dans ce habitat \n" RESET);
}
}
   

// fx pour affichier les information d un animal par id
void modifier(animuax anm ,int n){
    int choix;
    printf (CYAN "Entre les nouvelles information de l animal \n" RESET);
     do{
      printf (" Choisisser l habutat \n");
      printf(" -[ 1 ]- Savane \n");
      printf ("-[ 2 ]- Jungle \n");
      printf ("-[ 3 ]- Desert \n");
      printf ("-[ 4 ]- Aquatique\n");
      printf (CYAN "Entre votre choix : " RESET);
      scanf("%d",&choix);
      getchar();
    switch(choix){
        case 1 :strcpy(anm[n].habitat,"savane");
                break;
        case 2 : strcpy(anm[n].habitat,"Jungle");
                break;
        case 3: strcpy(anm[n].habitat,"desert");
                break;
        case 4: strcpy(anm[n].habitat,"aquatique");
                break;
        default : (YELLOW "Option non valide ! \n" RESET);
        break;
    }
    }while(choix <1 || choix >4);

    do{
    printf ("Age    : ");
    scanf ("%d",&anm[n].age);
    
    if (anm[n].age < 1 ){
        printf (RED "Age invalide !\n" RESET);
		printf (YELLOW "veuillez entre un age entre 1 et 120 \n" RESET);
    }
    }while(anm[n].age < 1 );


    do{
		printf ("Poids en kg :  ");
        scanf ("%f",&anm[n].poids);
    if(anm[n].poids <0.01 ){
        printf (RED "Poids invalide !\n" RESET); 
		printf (YELLOW "Entre un poids superieur a 0.01 kg\n" RESET);
         }
	}while(anm[n].poids <0.01 );
    printf (GREEN "Les information sur  %s   ont ete modifiees avec succes\n",anm[n].nom, RESET);
 }
// fx pour supprimer un animal
 void supprimer(animuax anm , int n){
    int choix;
    printf (YELLOW " est il confirme que  a ete supprimee ? \n" RESET);
  
    do{
    printf (CYAN "-[ 1 ]- Confirme \n" RESET);
    printf (CYAN "-[ 2 ]- Anuller \n" RESET);
    printf ("Entre votre choix :  ");
    scanf ("%d",&choix);
    switch(choix){
        case 1: 
            for(int i=n;i<nbr;i++){
                anm[i] = anm[i+1];
            }
            nbr--;
            printf (GREEN "Supprimer avec secces ! \n " RESET);
            break;
        case 2:printf (GREEN "la Supprission ete anuller ! \n " RESET);
            break;
        default : (YELLOW "OPTION NON VALIDE ! " RESET);
             break;
    }
   
    }while(choix !=2);
}
// rechercher a un animal par id
void rech_id(animuax anm){
    int choix;
	int Rid; //pour recherche
	int x = -1;
	printf (CYAN "Entre le ID : " RESET);
	scanf ("%d",&Rid);
	for(int i=0 ;i<nbr;i++){
		if(Rid == anm[i].id){
          
           x =i;
           break;
		}
	}
    if(x==(-1)){
        printf (RED " Il ny a aucun animal avec ce ID\n");
    }
    else{
        affichier_simpl_idx(anm,x);
     
    do{
    printf("\n-[ 1 ]- modifier\n");
    printf("\n-[ 2 ]- supprimer\n");
    printf("\n-[ 0 ]- Retour \n");
    printf ("Entre votre choix : ");
    scanf ("%d",&choix);
      getchar();
    switch(choix){
        case 1: modifier(anm,x);
            break;
        case 2: supprimer(anm,x);
            break;
            
        case 0: break;
        default : printf (YELLOW "OPtion non valide ! \n" RESET);
            break;

    }
    }while(choix != 0);
    }

} 
// rechercher a un animal par nom
void rech_nom(animuax anm){
    int x=-1;
  
    char Rnom[50];
    printf (CYAN "Entre le nom de animal : " RESET);
    scanf("%s", Rnom);
    for(int i=0;i<nbr;i++){
        if(strcmpi(Rnom,anm[i].nom) == 0){
            x=i;
            break;
        }
    }
    if(x==-1){
          printf (RED " Il ny a aucun animal avec ce Nom");
    }
    else {
        affichier_simpl_idx(anm,x);
     int choix;
        do{
    printf("\n-[ 1 ]- modifier\n");
    printf("\n-[ 2 ]- supprimer\n");
    printf("\n-[ 0 ]- Retour \n");
    printf ("%d",&choix);
    getchar();
    switch(choix){
        case 1:modifier(anm,x);
            break;
        case 2: supprimer(anm,x);
            break;
            
        case 0: break;
        default : printf (YELLOW "OPtion non valide ! \n" RESET);
            break;

    }
    }while(choix != 0);
    }
    }
// rechercher a un animal par espece
    void rech_espec(animuax anm){
    int choix;
   char Respece[12];
    do{
    
    printf ("Choisisser l espece \n");
    printf ("\n-[ 1 ]- lion \n");
    printf ("\n-[ 2 ]- tigre \n");
    printf ("\n-[ 3 ]- girafe\n");
    printf ("\n-[ 4 ]- elephant \n");
    printf ("\n-[ 5 ]- crocodile\n");
    printf (CYAN "Entre votre choix : " RESET);
    scanf ("%d",&choix);
    getchar();
    switch(choix){
        case 1: strcpy(Respece,"lion");
                break;
        case 2: strcpy(Respece,"tigre");
                break;
        case 3: strcpy(Respece,"girafe");
                break;
        case 4: strcpy(Respece,"elephant");
                break;
        case 5: strcpy(Respece,"crocodile");
                break;
        default : printf (YELLOW "Choix invalide ! \n " RESET);
    }

   }while(choix <1 || choix > 5);
   for(int i=0;i<nbr;i++){

    if(strcmpi(Respece,anm[i].espece)==0){
        affichier_simpl_idx(anm,i);
    }
   }
   }
// fx par choisir ajout simple ou ajout mulltiple
void affichier(animuax anm){
   	int choix;
   do{
    printf ("-- Afficher la liste complete -- \n");
    printf (" -[ 1 ]- trier par ID  \n");
    printf (" -[ 2 ]- trier par Nom (a-z) \n");
    printf (" -[ 2 ]- trier par age  \n");
    printf (" -[ 3 ]- d un habitat \n");
    printf (" -[ 0 ]- Quiter \n");
	printf (CYAN "Entre votre choix : " RESET);
    scanf ("%d",&choix);
	getchar();
    switch(choix){
        case 1: afficher_plus(anm);
                break;
        case 2: trier_nom(anm);
                break;
        case 3: trier_age(anm);
                break;
        case 4: affich_habitat(anm);
                break;
        case 0: printf (CYAN "Retour au menu prancipal \n" RESET);break;
        default : printf (YELLOW "Option non valide ! \n" RESET); break;
        
    

    }

   }while(choix!=0 );
}
// fx pour choisir le recherche par id ou par nom ou par espece
void recherche(animuax anm){
	int choix;
	do{
	printf ("-[ 1 ]- Rechercher Par ID \n");
	printf ("-[ 2 ]- Rechercher Par Nom \n");
	printf ("-[ 3 ]- Rechercher Par Espece\n");
	printf ("-[ 0 ]- Retour au menu Prancipal\n");
	printf (CYAN "Entre votre choix : " RESET);
	scanf ("%d",&choix);
    getchar();
	switch(choix){
		case 1:rech_id(anm);
		break;
		case 2:rech_nom(anm);
		break;
		case 3:rech_espec(anm); 
        break;
		case 0: printf (CYAN "Retour au menu prancipal \n " RESET);break;
		default  : printf (YELLOW "Option non valide ! \n" RESET);
	}
    }while(choix !=0);
}
// fx pour affichier tout les statistique
void Statistique(animuax anm){
int samge=0;
int min,maxi;
int minidx,maxidx;
    for(int i=0;i<nbr;i++){
     samge=samge+anm[i].age;
    } // somme anumauax
    min = anm[0].age;
    for(int i=1;i<nbr;i++)// plus petit
    {
        if(min > anm[i].age){
            minidx = anm[i].age;
            minidx = i;
        }
    }
    maxi = anm[0].age;
    for(int i=1;i<nbr;i++)//plus grand
    {
        if(maxi < anm[i].age){
            maxi = anm[i].age;
            maxidx = i;
        }
    }
    printf (" -Nombre total d animaux dans le zoo est : %d \n",nbr);
    printf (" -Age moyen des animaux : %d \n",samge/nbr);
    printf (" -Plus vieux animal est [ID : %d ][Nom : %s ][Age : %d ]\n",anm[maxidx].id,anm[maxidx].nom,anm[maxidx].age);
    printf (" -Plus jeune animal est [ID : %d ][Nom : %s ][Age : %d ]\n",anm[minidx].id,anm[minidx].nom,anm[minidx].age);
} 

void stocke_fichier(animuax anm){
    FILE *f = fopen("animaux.csv", "w");
    if(f == NULL){
        printf (RED "Erour d overture fichier \n" RESET);
        exit(-1);
    }
    for(int i=0;i<nbr;i++){
      //  3, "zebre", "zebra", 5, "Savane", "herbivore", 320.0, "01/10/2025 10:32:12"
       fprintf(f, "%d,%s,%s,%d,%s,%s,%.2f,%s\n",
                anm[i].id,anm[i].nom,anm[i].espece,anm[i].age,anm[i].habitat,anm[i].Categori,anm[i].poids,anm[i].date_ar);

    }

}
int main(){
   animuax a= {
    {1, "elephant", "elephant", 15, "savane", "herbivore", 4500.0, "01/10/2025 10:30:15"},
    {2, "eirafe", "girafe", 7, "Savane", "herbivore", 800.0, "01/10/2025 10:31:00"},
    {3, "zebre", "zebra", 5, "Savane", "herbivore", 320.0, "01/10/2025 10:32:12"},
    {4, "tigre", "tigre", 9, "Jungle", "carnivore", 220.0, "01/10/2025 10:33:05"},
    {5, "panda", "panda", 6, "Foret", "herbivore", 100.0, "01/10/2025 10:34:18"},
    {6, "kangourou", "kangourou", 4, "desert", "herbivore", 65.0, "01/10/2025 10:35:00"},
    {7, "ours", "Ours", 12, "Montagne", "omnivore", 300.0, "01/10/2025 10:36:10"},
    {8, "Aigle", "aigle", 3, "Montagne", "carnivore", 8.0, "01/10/2025 10:37:25"},
    {9, "chameau", "chameau", 14, "Désert", "herbivore", 540.0, "01/10/2025 10:38:40"},
    {10, "hippopotame", "hippo", 10, "aquatique", "herbivore", 1500.0, "01/10/2025 10:39:55"},
    {11, "crocodile", "crocodile", 17, "aquatique", "carnivore", 700.0, "01/10/2025 10:41:05"},
    {12, "flamant", "flamant Rose", 2, "aquatique", "herbivore", 3.5, "01/10/2025 10:42:15"},
    {13, "autruche", "autruche", 8, "savane", "herbivore", 120.0, "01/10/2025 10:43:28"},
    {14, "rhinoceros", "rhino", 11, "savane", "herbivore", 2100.0, "01/10/2025 10:44:40"},
    {15, "pingouin", "pingouin", 4, "aquatique", "carnivore", 12.0, "01/10/2025 10:45:55"},
    {16, "Cchien", "chien", 6, "domestique", "omnivore", 25.0, "01/10/2025 10:47:10"},
    {17, "chat", "chat", 5, "domestique", "carnivore", 6.0, "01/10/2025 10:48:25"},
    {18, "perroquet", "perroquet", 3, "jungle", "Herbivore", 1.2, "01/10/2025 10:49:38"},
    {19, "cheval", "cheval", 9, "plaine", "herbivore", 380.0, "01/10/2025 10:50:50"},
    {20, "singe", "singe", 7, "jungle", "omnivore", 40.0, "01/10/2025 10:52:05"}
};
     int choix;
     
     do{
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |               ZOO                |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |              Menu                |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |              choix               |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |     -[  1  ]->   | AJOUTER       |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |     -[  2  ]->   | AFFICHIER     |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |     -[  3  ]->   | RECHERCHER    |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |     -[  4  ]->   | STATISTIQUE   |\n");
    printf ("                  |^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|\n");
    printf ("                  |Entre votre choix  : ");
    scanf("%d",&choix);
    system("cls");
    switch(choix){
        case 1:ajouter(a);
                break;
        case 2: affichier(a);
                break;
        case 3:recherche(a);
                break;
        case 4: Statistique(a);
                break;
        default : printf (YELLOW "Choix invalide ! \n" RESET);
                break;
    }

     }while(choix !=0);
    return 0;
}
