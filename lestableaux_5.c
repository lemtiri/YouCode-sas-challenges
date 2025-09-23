#include <stdio.h>
#include <stdlib.h>


int main(){
 int T[50],n;
 printf ("Entre la taille de tableua : ");
 scanf ("%d",&n);
 printf ("Entre les element de tableau \n");
for(int i=0;i<n;i++){
    printf ("T[%d] : ",i);
    scanf ("%d",&T[i]);


 
}
int max = T[0];
for (int i=0;i<n;i++){
    if (T[i]< max )
    max = T[i];
  }
printf (" le plus grand élément dans ce tableau est : %d",max);


return 0;
}


