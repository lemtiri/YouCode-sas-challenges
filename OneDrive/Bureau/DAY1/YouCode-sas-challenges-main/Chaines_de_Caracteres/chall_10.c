#include <stdio.h>
#include <string.h>


int main(){
     char c[40];

     printf ("Entre la chine : ");
     scanf ("%s",&c);

     int n=0;
     int j=1;
    while (c[n] != '\0'){
        if(c[n] == " "){
            c[n] = c[j];
        }
        j++;
        n++;
    }
    

  return 0;  
}