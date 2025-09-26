#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int  longueur;
    int   largeur;
}rect;
int  calcule_air(rect r ){
    return r.longueur*r.longueur;
}
int main(){
 rect r;
    printf ("Entre longueur  : ");
    scanf ("%d",&r.longueur);
    printf ("Entre largeur  : ");
    scanf ("%d",&r.largeur);
    printf ("lair de rectangle est : %d ",calcule_air(r));


    return 0;
}