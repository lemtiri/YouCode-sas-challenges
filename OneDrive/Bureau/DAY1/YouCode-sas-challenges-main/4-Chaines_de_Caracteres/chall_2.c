#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char C[50];
printf ("Entre un mot : ");
scanf("%s", C);
int longueur =0;
for (int i=0;C[i] != '\0';i++){
    longueur ++;
}
printf ("le longueur de cette chaine est : %d ",longueur);


    return 0;
}
