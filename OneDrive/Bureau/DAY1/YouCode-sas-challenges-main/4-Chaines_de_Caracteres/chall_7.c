#include <stdio.h>
#include <string.h>
 
 int main (){
   char C[100];
   printf ("printf entre un chaine : " );
   gets(C);
   int n = strlen(C);
   int x=0;
   for(int i=0;i<n;i++){
    if (C[i] == ' '){
      continue;
    }
    C[x] = C[i];
    x++;
   }
  C[x] = '\0';
  puts("chaine apres suppression des espaces : ");
  puts(C);
    return 0;
 }