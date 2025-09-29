#include <stdio.h>


int rechercheLineaire(int T[], int n, int R) {
    for (int i = 0; i < n; i++) {
        if (T[i] == R) {
            return i;
        }
    }
    return -1;
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

   int R;
    printf("Entrez l element a rechercher : ");
  scanf("%d", &R) ;

 
    int res = rechercheLineaire(T, n, R);

   
    if (res != -1) {
        printf("Element est trouve e l'index %d .", res);
    } 
    else {
        printf("E lement  non trouve dans le tableau.");
    }

    return 0;
}