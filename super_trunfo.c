#include <stdio.h> //<stdio.h> para realizar operações de entrada e saída de dados
int main()
{ // main é o ponto de entrada obrigatório onde a execução de qualquer programa começa

    int cartaA = 1; //int para declarar variáveis que armazenam números inteiros, positivos ou negativos, sem casas decimais
    char estadoA = 'A'; //char para armazenar um único caractere (como 'a', '2', ou '?') utilizando 1 byte de memória
    char codigoA[50] = "A01"; //double para armazenar números reais (números com ponto flutuante ou casas decimais) que exigem alta precisão e um grande intervalo de valores
    char nome_da_cidadeA[50] = "São Paulo" ;
    double populacaoA = 12325000;
    char areaA[50] = "1521.11 km²";
    char PIBa[50] = "699.28 bilhões de reais";
    int PontosTuristicosA = 50;

    printf("Primeira carta lançada é: %d \n", cartaA); //printf serve para exibir dados (texto, números, variáveis) na saída padrão, geralmente a tela do terminal
    printf("Quais as sua caracteristicas ? \n");
    printf("Seu nome é %s \n", nome_da_cidadeA);
    printf("habitando %.2f de habitantes \n", populacaoA);
    printf("Com uma extensão de %s de área \n", areaA);
    printf("Faturando no ano %s de PIB \n", PIBa);
    printf("Sua beleza nos trás %d pontos turisticos \n", PontosTuristicosA);

    int cartaB = 2;
    char estadoB = 'B';
    char codigoB[50] = "B02";
    char nome_da_cidadeB[50] = "Rio de Janeiro";
    double populacaoB = 6748000;
    char areaB[50] = "1200.25 km²";
    char PIBb[50] = "300.50 bilhões de reais";
    int PontosTuristicosB = 30;

    printf("Agora pra entrar na batalha temos carta %d \n", cartaB);
    printf("Quais a caracteristicas do adversário ?\n");
    printf("Seu nome é %s \n", nome_da_cidadeB);
    printf("Contendo %.2f habitantes \n", populacaoB);
    printf("Com área de %s \n", areaB);
    printf("construindo cera de %s de PIB \n", PIBb);
    printf("com %d pontos turisticos \n", PontosTuristicosB);

    return 0; //return serve para encerrar a execução de uma função, devolver o controle para a função que a chamou e, opcionalmente, enviar um valor de volta para essa função chamadora, com o tipo do valor compatível com o tipo de retorno declarado na função
}
