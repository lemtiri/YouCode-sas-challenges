   #include <stdio.h>


int maxTableau(int T[],int n){
    int max;
    int idx;
    max = T[0];
    for(int i=1;i<n;i++){
        if(max < T[i]){
            max = T[i];
            idx = i;
        }
    }
    printf ("\nle element maximale  est : %d  et son index est %d ",max,idx);
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

   
   maxTableau(T,n);
   

    return 0;
} 
