#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct people
{
    char cpf[20];
    char name[30];
    char gender;
    int age;
};


int main()
{
    struct people card; 

    printf("\nHello, world.\n");

    printf("CPF: ");
    fflush(stdin);
    gets(card.cpf);
    printf("Nome: ");
    fflush(stdin);
    gets(card.name);

    int true = 1;

    while ( true == 1 )
    {
        printf("Sexo [M | F]: ");
        fflush(stdin);
        scanf("%c", &card.gender);

        if ( card.gender == 'M' || card.gender == 'F' )
        {
            true = 0;
        }

        else
        {
            if ( card.gender == 'm' || card.gender == 'f' )
            {
                printf("A letra precisa ser em maiusculo, por favor, tente novamente.\n");
            }
            else
            {
                printf("Digite a letra referente ao seu sexo.\n'M' Para masculino\n'F' Para feminino.\n");
            }
        }
    }
    printf("Idade: ");
    fflush(stdin);
    scanf("%i", &card.age);


    return 0;
}