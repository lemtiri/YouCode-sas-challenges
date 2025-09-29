#include<stdio.h>

void bubbleSort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int T[5];
    
    for(int i=0;i<5;i++){
        printf("T[%d] : ",i);
        scanf("%d",&T[i]);
    }
    printf("Le tableau avant le tri : \n");
    for(int i=0;i<5;i++){
        printf("T[%d] : %d \n",i,T[i]);
    }
    
    bubbleSort(T,5);
    
    printf("Le tableau apres le tri : \n");
    for(int i=0;i<5;i++){
        printf("T[%d] : %d \n",i,T[i]);
    }
    
}