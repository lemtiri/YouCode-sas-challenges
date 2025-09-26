#include <stdio.h>
#include <stdlib.h>
int factorielle(int x){
    int f=1;
   if (x<1)
   return 0;
  else{
    for(int i=1;i<=x;i++){
       f=f*i;  
    }
  
   return f;
 } 
  
}


int main(){
    int n;
 printf ("Entre un nombre : ");
 scanf("%d",&n);
 printf ("la factorielle de %d est : %d ",n,factorielle(n));



 return 0;
}