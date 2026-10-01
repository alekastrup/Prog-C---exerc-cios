/* Nome: Alexandre Kastrup Prestes
    Matricula:  2610522                       Turma:  33C                  PC:  25                       */

#include <stdio.h>
#define MAX  30
    /********************************************************************************/
    /* AQUI :  ESCREVER OS PROTOTIPOS DAS 2 FUNCOES PEDIDAS  */
int numProximoMedia(int vet[], int tam, float* media);
void imprimeInvertido(int vet[], int qtd);


int main(void) {
    /*************************************************************************/
    /* VARIAVEIS JA DECLARADAS. USE ESSAS DE ACORDO COM A ESPECIFICACAO DE CADA UMA  */
    int  qtd;             /* quantidade de numeros inteiros a serem lidos do teclado */
    int  vetInteiros[MAX];    /* vetor com os qtd numeros inteiros, a serem lidos do teclado  */
    /*************************************************************************************/
    /*                AQUI : DECLARAR AS VARIAVEIS COMPLEMENTARES            */
    float media;
    int indice ;

        /********************************************************************************/
        /* AQUI :  COMECAR A ESCREVER O CODIGO DA MAIN  */
    printf("Digite a quantidade de inteiros do vetor: ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetInteiros[i]);
    }
    indice = numProximoMedia(vetInteiros, qtd, &media);
    printf("%d %f", indice, media);
    imprimeInvertido(vetInteiros, qtd);





    return 0;
    /******************************************** FIM  DA  MAIN ***********************/
}
/********************************************************************************/
/* AQUI :  COMECAR A ESCREVER O CODIGO DAS 2 FUNCOES PEDIDAS  */

int numProximoMedia(int vet[], int tam, float* media)
{
    float soma = 0;
    int dif = 100;
    for (int i = 0; i < tam; i++)
    {
        soma = soma + vet[i];
    }
    *media = soma / tam;
    for (int i = 0; i < tam; i++)
    {
        if (*media - vet[i] < dif)
        {
            dif = ((*media - vet[i]) * -1);
            return i;
        }
    }
}

void imprimeInvertido(int vet[], int qtd)
{
    for (int i = qtd; i >= 0; i--)
    {
        printf("%d\n", vet[i]);
    }
}
