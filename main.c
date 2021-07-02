#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct people
{
    char cpf[20];
    char name[30];
    char gender;
    int age;
    int points;
};


int main()
{
    struct people card; 
    card.points = 0;

    FILE *pont_arq;

    pont_arq = fopen("clientes.txt", "a");

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

    true = 1;
    char r;

    printf("\nSr %s, responda o questionario:\n", card.name);

    while ( true == 1 )
    {
        printf("\nTem febre [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 5;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem dor de cabeca [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 1;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem secrecao nasal ou espirros [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 1;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem dor/irritacao na garganta [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 1;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem tosse seca [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 3;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem dificuldades respiratorias [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 10;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem dores no corpo [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 1;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nTem diarreia [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 1;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nEsteve em contato, nos ultimos 14 dias, com um caso diagnosticado com COVID-19 [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 10;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }

    true = 1;

    while ( true == 1)
    {
        printf("\nEsteve em locais com grande aglomeracao [S | N]: ");
        fflush(stdin);
        scanf("%c", &r);
        if ( r == 'S' || r == 's')
        {
            card.points += 3;
            true = 0;
        }
        else
        {
            if ( r == 'N' || r == 'n')
            {
                true = 0;
            }
            else
            {
                printf("Por favor, digite S para sim, e N para nao.\n");
            }
        }
    }
    fprintf(pont_arq, "\n----------------------------------\n");
    fprintf(pont_arq, "\nCPF: %s", card.cpf);
    fprintf(pont_arq, "\nNome: %s", card.name);
    fprintf(pont_arq, "\nSexo: %c", card.gender);
    fprintf(pont_arq, "\nIdade: %i", card.age);
    fprintf(pont_arq, "\nPontuacao: %i\n", card.points);
    fprintf(pont_arq, "\n----------------------------------\n");

    fclose(pont_arq);

    
    


    return 0;
}