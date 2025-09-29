#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char C[50];
    char car;
    int x=0;
 
    
printf ("Entre un mot : ");
scanf(" %s",&C);
printf ("Entre un caractere : ");
scanf(" %c",&car);
 for(int i=0;i<strlen(C);i++){
     if(C[i]==car){
        x++;
    }
 }
   printf ("le caractere apparaît dans la chaine : %d fois");
return 0;
}