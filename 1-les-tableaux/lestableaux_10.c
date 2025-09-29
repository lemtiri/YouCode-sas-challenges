#include <stdio.h>
#include <stdlib.h>


int main(){
 int n;
 printf ("Entre la taille de tableau : ");
 scanf ("%d",&n);
 int T[n];
 printf ("Entre les element de tableau \n");
for(int i=0;i<n;i++)
{
    printf ("T[%d] : ",i);
    scanf ("%d",&T[i]);
}
int x,v=0;
  printf ("Entre l'element a rechercher ");
  scanf ("%d",&x);
 for(int i=0;i<n;i++){
    if (T[i]== x){
        v = 1; 
        break;
    }
}
    if (v==1)
    printf (" l'élément %d est présent dans le tableua !",x);
    else 
    printf (" l'élément %d n,est pas présent dans le tableua !",x);

 

return 0;
}