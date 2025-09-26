#include <stdio.h>
#include <stdlib.h>
int maximun(int x,int y){
 if (x<y)
 return x;
else 
return y; 

}


int main(){
    int v1,v2;
 printf ("Entre le premier valeur : ");
 scanf("%d",&v1);
 printf ("Entre le deuxieme valeur : ");
 scanf("%d",&v2);
 printf (" le nombre le plus petit est : %d",maximun(v1,v2));



    return 0;
}