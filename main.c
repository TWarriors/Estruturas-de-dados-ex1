#include <stdio.h>
#include <stdlib.h>
//void atv1
//void atv2

atv1(){
    int C, F;
    printf("Digite a temperatura em Farenheit\n");
    scanf("%i", &F);
    C = 5 * (F-32) / 9;
    printf("A temperatura em Celsius e de : %i\n", C);
}

atv2(){
    int C, F;
    printf("Digite a temperatura em Celsius\n");
    scanf("%i", &C);
    F = C / 5;
    F *= 9;
    F += 32;
    printf("O resultado e: %i\n", F);
}

main() {
    while(1){
        int atv;
        printf("Seleciona a atividade:\n");
        scanf("%i", &atv);
        switch(atv){
            case 1:
                atv1();
            break;
            case 2:
                atv2();
            break;
        }
    }
}
atv3(){
    double N1, N2, N3;
    printf("\n Insira o primeiro numero\n");
    gets("%d",N1);
    printf("\n Insira o primeiro numero\n");
    gets("%d",N2);
    printf("\n Insira o primeiro numero\n");
    gets("%d",N3);
    printf("\n");
}

