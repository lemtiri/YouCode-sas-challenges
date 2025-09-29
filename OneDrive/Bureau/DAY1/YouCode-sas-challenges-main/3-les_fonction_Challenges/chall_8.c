#include <stdio.h>
 #include <stdlib.h>
 int pair_impair(int x){
    if(x % 2 == 0)
    return 1;
    else 
    return 0;
 }
 int main (){
    int n1;
    printf ("Entre un nombre : ");
    scanf ("%d",&n1);

    if(pair_impair(n1)==1)
    printf("%d est pair !",n1);
    else
    printf ("%d est impair !",n1);
    return 0;
 }