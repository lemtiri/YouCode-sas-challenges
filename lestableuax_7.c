#include <stdio.h>
#include <stdlib.h>


int main(){
 int T[100],n;
 printf ("Entre la taille de tableau : ");
 scanf ("%d",&n);
 printf ("Entre les element de tableau \n");
 for(int i=0;i<n;i++)
 {
    printf ("T[%d] : ",i);
    scanf ("%d",&T[i]);

 }
 int temp;
 for (int i=0;i<n-1;i++){
for (int j=i+1;j<n;j++){


    if (T[i] > T[j])
    {
       temp = T[i];
        T[i] = T[j];
        T[j] = temp;
    }

 }
}
 printf (" le tableau trie en ordre croissant : \n");
 for (int i=0;i<n;i++){
 printf ("T[%d] : %d \n",i,T[i]);

 
}








return 0;
  }