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
int T2[n]; 
  for (int i=0;i<n;i++){
   T2[i] = T[n-1-i];


}
printf ("\n les element de tableua origine \n");
for (int i=0;i<n;i++){
printf ("%d ",T[i]);

}
printf ("les element de tableua inverse \n");
for (int i=0;i<n;i++){
printf ("%d ",T2[i]);

}
return 0;
}