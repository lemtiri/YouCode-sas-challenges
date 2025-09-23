#include <stdio.h>
#include <stdlib.h>


int main(){
    int n,s=0;
  printf ("entre un nombre entier : ");
  scanf ("%d",&n);
   
   for(int i=1;i<=n;i++){
   s = s + i;

   }
   printf (" la somme de %d premiers nombre  est : %d ",n,s);
    return 0;
}