#include <stdio.h>
#include <string.h>
int main(){
    char C1[50],C2[50],C3[100];
  
printf ("Entre premier mot : ");
scanf("%s", C1);
printf ("Entre deuxieme mot : ");
scanf("%s", C2);
int n = strlen(C1)+strlen(C2);
for (int i=0;i<strlen(C1);i++){
    C3[i]=C1[i];
}
for(int i = strlen(C1);i<n;i++){
    C3[i] = C2[i-strlen(C1)];
}
printf ("%s",C3);
    return 0;
}
