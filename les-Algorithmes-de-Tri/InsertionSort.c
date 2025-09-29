#include <stdio.h>
#include <stdlib.h>
  void InsertionSort(int T[],int n){
   for(int i=0;i<n;i++){
    int tmp=T[i];
    int j=i-1;
    while (tmp < T[j]&&j>=0){
        T[j+1] = T[j];
        j--;
    }
    T[j+1]=tmp;
   }

  }
  int main(){
    int T[100],n;
    printf("Entre la taille de tableau : ");
    scanf ("%d",&n);
   for(int i=0;i<n;i++){
        printf("T[%d] : ",i);
        scanf("%d",&T[i]);
    }
    printf("Le tableau avant le tri : \n");
    for(int i=0;i<n;i++){
        printf("T[%d] : %d \n",i,T[i]);
    }
    
   InsertionSort(T,5);
    
    printf("Le tableau apres le tri : \n");
    for(int i=0;i<n;i++){
        printf("T[%d] : %d \n",i,T[i]);
    }
    
}