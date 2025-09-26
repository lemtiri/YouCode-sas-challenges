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

    for (int i=0;i<n;i++){

    printf ("T[%d] : %d \n",i,T[i]);

}


    return 0;
}