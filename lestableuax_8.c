#include <stdio.h>
#include <stdlib.h>


int main(){
 int T[50],n;
 printf ("Entre la taille de tableau : ");
 scanf ("%d",&n);
 printf ("Entre les element de tableau \n");
for(int i=0;i<n;i++){
    printf ("T[%d] : ",i);
    scanf ("%d",&T[i]);


 
}
int T2[n]; 
for (int i=0;i<n;i++){
   T2[i] = T[i];


}
printf ("tableau original :\n");
for (int i=0;i<n;i++){
    printf (" T[%d] : %d\n",i,T[i]);
}
printf ("tableau copie \n");
 for (int i=0;i<n;i++){
    printf ("T2[%d] : %d\n",i,T2[i]);
}
return 0;
}