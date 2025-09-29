#include <stdio.h>
#include <stdlib.h>
int main(){
 int age, historique, couverture;
    float  base = 100, Supp = 0, total;
    do{
        printf ("Entre l age : ");
    scanf("%d", &age);
    printf (" Entre l historique medical  (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur) : ");
    scanf("%d", &historique);
    printf ("Entre le type de couverture  Type de couverture (1 pour de base, 2 pour étendue) : ");
    scanf("%d", &couverture);
    }while (historique < 0 && historique >2 || couverture <1 && couverture >2 );

    if (age < 30) {
        total = base;
        printf("Plan de Base\n");
    } else {
        if (historique == 0) {
            total = base;
            printf("Pln de Base\n");
        } else {
            total =  base * 1.5;
            printf("Plan Etendu\n");
        }
    }

    if (historique == 2) {
        Supp = 50.0;
        total = total + Supp;
    }

    printf("Cout total de la couverture : %.2f  supplement : %.2f £\n", total, Supp);







    return 0;
}