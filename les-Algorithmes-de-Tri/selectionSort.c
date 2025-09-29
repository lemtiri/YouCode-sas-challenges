#include <stdlib.h>
#include <stdio.h>
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
    
        int index_min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[index_min]) {
                index_min = j;
            }
        }

       
        if (index_min != i) {
            int temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}


int main() {
    int n;

   printf("Entre la taille de tableau : ");
   scanf ("%d",&n);
   int T[n];
   printf ("Entre les element de tableau \n");
   for(int i=0;i<n;i++){
   printf ("T[%d] : ",i+1);
   scanf ("%d",&T[i]);
   }
  
   
    selectionSort(T, n);


   printf ("Le tableau apres le tri : ");
   for(int i=0;i<n;i++){
    printf ("T[%d] : %d \n",i,T[i]);
   }
    return 0;
}