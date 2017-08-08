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
            case 3:
                atv3();
            break;
            case 4:
                atv4();
            break;
        }
    }
}
atv3(){
    int N1, N2;
    double N3, R1=0, R2=0, R3=0;
    printf("\n Insira o primeiro numero\n");
    scanf("%i",&N1);
    printf("\n Insira o segundo numero\n");
    scanf("%i",&N2);
    printf("\n Insira o terceiro numero, sendo ele real\n");
    scanf("%lf",&N3);
    R1 = ((N1*2)*(N2/2));
    R2 = ((N1*3) + N3);
    R3 = (N3*N3*N3);
    printf("\n A:%lf B:%lf C:%lf",R1, R2, R3 );
}
atv4(){
    int 
}
