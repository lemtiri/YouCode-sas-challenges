#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char C[50];
    
printf ("Entre un mot : ");
scanf(" %s",&C);
   for(int i=0;i < strlen(C);i++){
   C[i] = C[i] +32;

   }
puts(C);
return 0;
}