#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char C[50],C2[50];
    int x = 0;
printf ("Entre un mot : ");
scanf("%s", C);
printf ("Entre un mot : ");
scanf("%s", C2);
if (strlen(C) != strlen(C2) ){
    printf ("les deux mot n est pas le meme longueur !");
}
else {
    for (int i=0;i<strlen(C); i++)
    if (C[i] != C2[i]){
       x = 1;
    }
    if(x==0)
        printf ("les chaînes sont egales !");
    else 
    printf ("les chaînes sont  differentes! ");
}
return 0;
}