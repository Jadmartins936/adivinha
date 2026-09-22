
//Inicio do código
#include <stdio.h>

//Função que aplica o quicksort
void adivinhar(int limiteInferior, int limiteSuperior, int tentativa) //copia os parametros dados no main
{
    //estrutura condicional para verificar se o valor digitado está dentro do intervalo
    if (limiteInferior > limiteSuperior)
    {
        printf("Digite um valor dentro do intervalo!)\n");
        return; // cancela a função caso o valor esteja dentro do intervalo
    }
    
    //declaração de variáveis
    int pivo = (limiteInferior + limiteSuperior) / 2; //atribui a variavel pivo a formula de calcular o meio entre valor inf. e superior
    char resposta; //define a variavel que vai pegar a resposta do usuario (se maior, se menor, se acertou)

    printf("\nTentativa %d -> Meu chute e: %d\n", tentativa, pivo);
    printf("O numero pensado e (m)maior, (n)menor ou eu (a)acertei? ");
    scanf(" %c", &resposta); // lê a resposta do usuário

    //estrutura condicional para verificar a resposta do usuário
    if (resposta == 'a' || resposta == 'A')
    {
        printf("\nAcertei o numero %d em %d tentativa(s)! :)\n",
               pivo, tentativa);
        return; //retorna a funcao caso o usuario acertar
    }
    else if (resposta == 'm' || resposta == 'M')
    {
        //chama a funcao, adiciona um ao pivo, pivo se torna limite inferior, limite superior continua o mesmo, e adiciona 1 a tentativa e reclacula o pivo
        adivinhar(pivo + 1, limiteSuperior, tentativa + 1); 
    }
    else if (resposta == 'n' || resposta == 'N')
    {
        //chama a funcao, subtrai um ao pivo, pivo se torna limite superior, limite inferior continua o mesmo, e adiciona 1 a tentativa e reclacula o pivo
        adivinhar(limiteInferior, pivo - 1, tentativa + 1); /* chamada recursiva */
    }
    //tratamento de erros
    else
    {
        printf("Resposta invalida, digite m, n ou a.\n");
        adivinhar(limiteInferior, limiteSuperior, tentativa);
    }
}

int main(void)
{
    //menu
    printf("=====================================\n");
    printf("   ADIVINHE O NUMERO (versao simples)\n");
    printf("=====================================\n");
    printf("Pense em um numero inteiro entre 1 e 9.\n");
    printf("Nao digite nada agora, so pense! Pressione ENTER quando estiver pronto.");
    getchar(); //espera o usuario apertar enter para continuar

    //chama a funcão quicksort
    adivinhar(1, 9, 1);

    return 0;
}
