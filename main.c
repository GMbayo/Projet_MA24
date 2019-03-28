#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 0, c = 0, *P1 = 0, *P2 = 0;
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
    printf("Valeurs de base:\na = %i\nb = %i\nc = %i\nP1 = %i\nP2 = %i\n\n",a,b,c,P1,P2);
    printf("Adresses memoires de base:\na = %i\nb = %i\nc = %i\nP1 = %i\nP2 = %i\n\n",&a,&b,&c,&P1,&P2);
    P1 = c;
    P2 = P1 + a;
    c = P2;
    printf("Operations effectuees: \nP1 = &c \nP2 = P1 + a \nc = P2\n\n");
    printf("Resultats:\nP1 = %i\nP2 = %i\nc = %i\n",P1,P2,c);
    return 0;
}
