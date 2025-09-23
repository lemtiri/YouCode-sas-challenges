#include <stdio.h>
#include <sdlib.h>
int main(){
int age,cotisation,p=0;bonus =0;
 long montant;
printf ("Entre votre age : ");
scanf ("%d",&age);
printf ("Entre l annnees de cotisation : ");
scqnf ("%d",&cotisation);
scanf ("Entre le Montant total épargné (en euros) ");
scanf ("%ld",&montant);


 if(age >=65 && cotisation >= 30 && montant >=100000){
     printf ("Plan compte avec pension elevee ");
     p = 100000 * 0.05;
 }

 else if(age >=65 && cotisation >= 20 && montant >=50000){
   printf (" Plan partiel avec pension moyenne "); 
  p = 50000 * 0.05;
 }
 
 else if(age < 65)
 printf ("Plan encore disponible !");







    return 0;
}