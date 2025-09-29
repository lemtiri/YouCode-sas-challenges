#include <stdio.h>
#include <stdlib.h>


int main(){

int n;
int f = 1;
printf ("Entre un nombre : ");
scanf ("%d",&n);
for(int i=1;i<=n;i++){
f = f * i;
}
printf ("Le factorielle de %d est : %d ",n,f);



    return 0;
}