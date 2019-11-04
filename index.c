#include <stdio.h>
int Op;

//Chamado de funções externas
void MenuPrincipal();
void AreaCalc();

int main() {
    system("clear");
    AreaCalc();

    return 0;
} //Fim da função Principal

void MenuPrincipal() {
    printf("====================\n");
    printf(" GEOMETRIA ESPACIAL\n");
    printf("====================\n");

    printf("[1] - Área\n");
    printf("[2] - Volume\n");
    printf("[3] - Sair\n");

    printf("\n==========\n");
    printf("Escolha: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            printf("\nÁrea é iniciado...\n");

            break;

        case 2:
            printf("Volume é iniciado...\n");

            break;

        case 3:
        printf("O programa é encerrado...\n");

        break;

        default:
        printf("Valor inválido! Tente novamente...\n");
        sleep(1);
        main();

        break;

    }

} //Fim da função Menu Principal

void AreaCalc() {
    system("clear"); //Limpa tela
    printf("======\n");
    printf(" AREA\n");
    printf("======\n");

    printf("[1] - Triângulo\n");
    printf("\n[2] - Quadrado\n");
    printf("\n[3] - Retângulo\n");
    printf("\n[4] - Voltar\n");

    printf("\n==========\n");
    printf("Escolha: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            printf("\nTriangulo iniciado...\n");

            break;

        case 2:
            printf("\nQuadrado iniciado...\n");

            break;

        case 3:
            printf("\nRetangulo iniciado...\n");

            break;

        case 4:
            printf("\nPrograma volta...\n");

            break;

        default:
            printf("\nValor inválido! Tente novamente...\n");
            sleep(1);
            AreaCalc();

            break;

    }

    return 0;
} //Fim da função de cálculo da área