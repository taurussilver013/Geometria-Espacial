#include <stdio.h>
//Constantes globais
const float PI = 3.14;
//Variáveis globais
int Op;

//Chamado de funções externas
void MenuPrincipal();
void AreaCalc();
void VolumeCalc();

int main() {
    system("clear"); //Limpa tela
    MenuPrincipal();

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
    printf(" Escolha: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            AreaCalc();

            break;

        case 2:
            VolumeCalc();

            break;

        case 3:
        printf("\nFim da execução...\n");
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
    float ConeRaio, ConeGeratriz;
    float CiliRaio, CiliAlt;
    float ResultArea;

    system("clear");
    printf("======\n");
    printf(" AREA\n");
    printf("======\n");

    printf("[1] - Triângulo\n");
    printf("\n[2] - Quadrado\n");
    printf("\n[3] - Retângulo\n");
    printf("\n[4] - Cone\n");
    printf("\n[5] - Cilindro\n");
    printf("\n[6] - Voltar\n");

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
             Op = 1;
            while(Op == 1){ //Área do Cone
                system("clear");
                printf("=============\n");
                printf("  AREA CONE\n");
                printf("=============\n");

                printf("   A Área de um Cone é calculada através da razão\n");
                printf("entre Pí, o Raio e a soma do Raio com sua Geratriz.\n");
                printf("   Sendo assim, basta atribuir os valores:\n");

                printf("\nRaio(r): ");
                scanf("%f", &ConeRaio);
                printf("\nGeratriz(g): ");
                scanf("%f", &ConeGeratriz);

                ResultArea = PI*ConeRaio*(ConeRaio+ConeGeratriz);

                printf("\n===========================\n");
                printf("    Area do Cone: %.2f \n", ResultArea);
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

        case 5:
            Op = 1;
            while(Op == 1){ //Área do Cilindro
                system("clear");
                printf("===============\n");
                printf(" AREA CILINDRO\n");
                printf("===============\n");

                printf("   A área de um Cilindro é calculada através\n");
                printf("da razão entre 2PÍ, o Raio e a soma do Raio com.\n");
                printf("a altura. Sendo assim basta atribuir os valores:\n");

                printf("\nRaio(r): ");
                scanf("%f", &CiliRaio);
                printf("\nAltura(h): ");
                scanf("%f", &CiliAlt);

                ResultArea = 2 * PI * CiliRaio * (CiliRaio + CiliAlt);

                printf("\n===========================\n");
                printf("  Área do cilindro: %.2f \n", ResultArea);
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

        case 6:
            MenuPrincipal();

            break;

        default:
            printf("\nValor inválido! Tente novamente...\n");
            sleep(1);
            AreaCalc();

            break;

    }

} //Fim da função de cálculo da área

void VolumeCalc() {
    //Variáveis locais
    float CuboLado;
    float ParaBase, ParaLarg, ParaAlt;
    float CiliRaio, CiliAlt;
    float ResultVolume;

    system("clear");
    printf("========\n");
    printf(" VOLUME\n");
    printf("========\n");

    printf("[1] - Cubo\n");
    printf("\n[2] - Paralelepípedo\n");
    printf("\n[3] - Cilindro\n");
    printf("\n[4] - Voltar\n");

    printf("\n==========\n");
    printf(" Escolha: ");
    scanf("%d", &Op);

    switch(Op) {
        case 1:
            while(Op == 1){ //Volume do Cubo
                system("clear");
                printf("=============\n");
                printf(" VOLUME CUBO\n");
                printf("=============\n");

                printf("   O volume de um Cubo é calculado através\n");
                printf("da razão entre um de seus lados proporcionalmente\n");
                printf("iguais elevado a 3º potência. Basta atribuir os valores:\n");

                printf("\nLado(l): ");
                scanf("%f", &CuboLado);

                ResultVolume = CuboLado * CuboLado * CuboLado;

                printf("\n===========================\n");
                printf("    Volume do Cubo: %.2f \n", ResultVolume);
                printf("===========================\n");

                printf("\n\n[1] - Resetar\n");
                printf("[2] - Voltar\n");
                printf("===============\n");
                printf(" Escolha: ");
                scanf("%d", &Op);

                if(Op == 2) {
                    system("clear");
                    VolumeCalc();

                } else if(Op != 1 && Op != 2) {
                    printf("\nValor inválido! Tente novamente...\n");
                    sleep(2);
                    Op = 1;
                
                }

            }

            break;

        case 2:
            Op = 1;
            while(Op == 1){ //Volume do Cilindro
                system("clear");
                printf("=======================\n");
                printf(" VOLUME PARALELEPIPEDO\n");
                printf("=======================\n");

                printf("   O volume de um Paralelepípedo é calculado\n");
                printf("através da razão entre sua base, altura e largura.\n");
                printf("Sendo assim, basta atribuir os valores:\n");

                printf("\nBase(a): ");
                scanf("%f", &ParaBase);
                printf("\nLargura(b): ");
                scanf("%f", &ParaLarg);
                printf("\nAltura(c): ");
                scanf("%f", &ParaAlt);

                ResultVolume = ParaBase * ParaLarg * ParaAlt;

                printf("\n==================================\n");
                printf("  Volume do Paralelepípedo: %.2f \n", ResultVolume);
                printf("==================================\n");

                printf("\n\n[1] - Resetar\n");
                printf("[2] - Voltar\n");
                printf("===============\n");
                printf(" Escolha: ");
                scanf("%d", &Op);

                if(Op == 2) {
                    system("clear");
                    VolumeCalc();

                } else if(Op != 1 && Op != 2) {
                    printf("\nValor inválido! Tente novamente...\n");
                    sleep(2);
                    Op = 1;
                
                }

            }

            break;

        case 3:
            Op = 1;
            while(Op == 1){ //Volume do Cilindro
                system("clear");
                printf("=================\n");
                printf(" VOLUME CILINDRO\n");
                printf("=================\n");

                printf("   O volume de um Cilindro é calculado através\n");
                printf("da razão da área de sua base multiplicada pela altura\n");
                printf("do cilindro. Sendo assim, basta atribuir os valores:\n");

                printf("\nRaio(r): ");
                scanf("%f", &CiliRaio);
                printf("\nAltura(h): ");
                scanf("%f", &CiliAlt);

                ResultVolume = PI*(CiliRaio*CiliRaio)*CiliAlt;

                printf("\n==============================\n");
                printf("    Volume do Cilindro: %.2f \n", ResultVolume);
                printf("==============================\n");

                printf("\n\n[1] - Resetar\n");
                printf("[2] - Voltar\n");
                printf("===============\n");
                printf(" Escolha: ");
                scanf("%d", &Op);

                if(Op == 2) {
                    system("clear");
                    VolumeCalc();

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
            printf("Valor inválido! Tente novamente...\n");
            sleep(2);
            VolumeCalc();

            break;

    }

} //Fim da função de cálculo do volume