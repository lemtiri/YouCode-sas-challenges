#include <stdio.h>


int minTableau(int T[],int n){
    int min;
    int idx;
    min = T[0];
    for(int i=1;i<n;i++){
        if(min > T[i]){
            min = T[i];
            idx = i;
        }
    }
    printf ("\nle element minilale est : %d  et son index est %d ",min,idx);
}
int main() {
    int n;
    printf ("Entre le teille de tableau : ");
    scanf ("%d",&n);
   int T[n];
   printf("sasir le element de tebleau : \n");
    for (int i = 0; i < n; i++) {
       printf ("T[%d] : ",i);
       scanf ("%d",&T[i]);
        
    }

   
   minTableau(T,n);
   

    return 0;
}