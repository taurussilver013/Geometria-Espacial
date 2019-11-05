#include <stdio.h>
//Variáveis globais
int Op;

//Chamado de funções externas
void MenuPrincipal();
void AreaCalc();

int main() {
    system("clear"); //Limpa tela
    AreaCalc();

    return 0;
} //Fim da função Principal

void MenuPrincipal() {
    system("clear");
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
        printf("\nO programa é encerrado...\n");
        sleep(1);

        break;

        default:
        printf("Valor inválido! Tente novamente...\n");
        sleep(1);
        main();

        break;

    }

} //Fim da função Menu Principal

void AreaCalc() {
    //Variáveis locais
    float TriBase, TriAltura;
    float QuadLado;
    float RetBase, RetAlt;
    float ResultArea;

    system("clear");
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
            while(Op == 1) { //Área do Triângulo
                system("clear");
                printf("================\n");
                printf(" AREA TRIANGULO\n");
                printf("================\n");

                printf("   A área de um Triângulo é calculada através\n");
                printf("da razão entre a sua base e sua altura e em seguida\n");
                printf("dividida por 2. Sendo assim basta atribuir os valores:\n");

                printf("\nBase(b): ");
                scanf("%f", &TriBase);
                printf("\nAltura(h): ");
                scanf("%f", &TriAltura);

                ResultArea = (TriBase * TriAltura)/2;

                printf("\n===========================\n");
                printf("  Área do triângulo: %.2f \n", ResultArea);
                printf("===========================\n");

                printf("\n\n[1] - Resetar\n");
                printf("[2] - Voltar\n");
                printf("===============\n");
                printf(" Escolha: ");
                scanf("%d", &Op);

                if(Op == 2) {
                    system("clear");
                    AreaCalc();

                } else if(Op != 1 && Op != 2) {
                    printf("\nValor inválido! Tente novamente...\n");
                    sleep(2);
                    Op = 1;
                
                    break;

                }

            }

            break;

        case 2:
            Op = 1;
            while(Op == 1){ //Área do Quadrado
                system("clear");
                printf("===============\n");
                printf(" AREA QUADRADO\n");
                printf("===============\n");

                printf("   A área de um Quadrado é calculada através\n");
                printf("da razão entre dois lados proporcionalmente iguais.\n");
                printf("   Sendo assim basta atribuir os valores:\n");

                printf("\nLado(l): ");
                scanf("%f", &QuadLado);

                ResultArea = QuadLado * QuadLado;

                printf("\n===========================\n");
                printf("  Área do quadrado: %.2f \n", ResultArea);
                printf("===========================\n");

                printf("\n\n[1] - Resetar\n");
                printf("[2] - Voltar\n");
                printf("===============\n");
                printf(" Escolha: ");
                scanf("%d", &Op);

                if(Op == 2) {
                    system("clear");
                    AreaCalc();

                } else if(Op != 1 && Op != 2) {
                    printf("\nValor inválido! Tente novamente...\n");
                    sleep(2);
                    Op = 1;
                
                }

            }

            break;

        case 3:
            Op = 1;
            while(Op == 1){ //Área do Retângulo
                system("clear");
                printf("================\n");
                printf(" AREA RETANGULO\n");
                printf("================\n");

                printf("   A área de um Quadrado é calculada através\n");
                printf("da razão entre sua base e sua altura.\n");
                printf("   Sendo assim basta atribuir os valores:\n");

                printf("\nBase(b): ");
                scanf("%f", &RetBase);
                printf("\nAltura(h): ");
                scanf("%f", &RetAlt);

                ResultArea = RetBase * RetAlt;

                printf("\n===========================\n");
                printf("  Área do retângulo: %.2f \n", ResultArea);
                printf("===========================\n");

                printf("\n\n[1] - Resetar\n");
                printf("[2] - Voltar\n");
                printf("===============\n");
                printf(" Escolha: ");
                scanf("%d", &Op);

                if(Op == 2) {
                    system("clear");
                    AreaCalc();

                } else if(Op != 1 && Op != 2) {
                    printf("\nValor inválido! Tente novamente...\n");
                    sleep(2);
                    Op = 1;
                    
                }
            
            }

            break;

        case 4:
            MenuPrincipal();

            break;

        default:
            printf("\nValor inválido! Tente novamente...\n");
            sleep(1);
            AreaCalc();

            break;

    }

} //Fim da função de cálculo da área