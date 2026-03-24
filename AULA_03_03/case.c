#include <stdio.h>

int main()
{
    int i;
    printf("Digite um número ");
    scanf("%d%*c",&i);
    switch (i)
    {
        case 1:
            printf("Número 1");
            break;
        case 2:
            printf("Número 2");
            break;
        default:
            printf("Número diferente de 1 e de 2");
    }
    printf("\nPressione Enter para sair...");
    getchar();
    return 0;
}