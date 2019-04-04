#include <stdio.h>
#include <stdlib.h>

void calcul(int* pA, int* pB, int* pC);

int main(int argc, char *argv[])
{
    int a = 0, b = 0, c = 0;

    fflush(stdin);
    printf("Bonjour, nous allons utiliser les pointeurs, pour cela, vous devrez entrer 3 nombres.\n \n");
    printf("Entrez le premier nombre: \n");
    scanf("%i",&a);
    fflush(stdin);
    printf("\nEntrez le second nombre:\n");
    scanf("%i",&b);
    fflush(stdin);
    printf("\nEntrez le dernier nombre:\n");
    scanf("%i",&c);
    system("cls");
    printf("Voici maintenant les diff‚rentes op‚rations effectu‚es ainsi que les valeurs des diff‚rentes variables aprŠs chaque op‚ration:\n\n");
    printf("Valeurs de base:\na = %i\nb = %i\nc = %i\n\n",a,b,c);

    printf("Adresses memoires de base:\na = %i\nb = %i\nc = %i\n\n",&a,&b,&c);

    //J'envoi les adresses m‚moire de a, b et c (grƒce au caractŠre "&") dans la fonction calcul, qui la stock dans des pointeurs
    calcul(&a,&b,&c);

    printf("Calculs effectues:\n*pA *= 2\n*pB += *pA\n*pC = *pA\n\n(pA, pB et pC sont des pointeurs sur a, b et c)\n\n");

    printf("Valeurs de apres calcul:\na = %i\nb = %i\nc = %i\n\n",a,b,c);

    printf("Adresses memoires apres calcul:\na = %i\nb = %i\nc = %i\n\n",&a,&b,&c);
    //Les adresses m‚moire n'ont pas changer. La valeur a donc bien ‚t‚ chang‚e directement dans l'adresse.

    return 0;
}

//ici, pA, pB et pC sont des pointeur qui pointent sur les adresses de a, b et c.
//j'effectue les calculs sur le valeurs contenue … ces adresse grƒce au caractŠre "*"
//les valeurs sont directement chang‚es dans la case m‚moire, donc la fonction n'a pas besoin de renvoyer de valeur!
void calcul(int* pA, int* pB, int* pC)
{
    *pA *= 2;
    *pB += *pA;
    *pC = *pA;
}
