#include <stdio.h>
 #include <stdlib.h>
 
 int somme(int x,int y){
    return x+y;
 }
 int main (){
    int n1,n2;
   printf ("Entre le premier nombre : ");
   scanf ("%d",&n1);
    printf ("Entre le premier nombre : ");
   scanf ("%d",&n2);
    printf ("La somme de %d et %d est : %d ",n1,n2,somme(n1,n2));
    return 0;
 }