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
            case 0:
                exit(0);
            break;
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
    printf("\n A:%i B:%i C:%lf",R1, R2, R3 );
}
atv4(){
    //20cv-1500/5cv-600/1cv-300
    //motores por maquina: 1=20cv 3=5cv 2=1cv
    int cm1 = 1500, cm2 = 600, cm3 = 300;
    int m1 = 1, m2 = 3, m3 = 2;
    int qm1 ,qm2, qm3, ctm;
    int ctc, qm, ctp1, ctp2, ctp3;
    printf("\n Digite quantas maquinas serão usadas:");
    scanf("%i",&qm);
    qm1 = qm*m1;
    qm2 = qm*m2;
    qm3 = qm*m3;
    printf("\n Motor 1:%i \n Motor 2:%i \n Motor 3:%i",qm1, qm2, qm3);
    ctc = (((qm*qm1)*cm1)+((qm*qm2)*cm2)+((qm*qm3)*cm3));
    ctp1 = qm1*cm1;
    ctp2 = qm2*cm2;
    ctp3 = qm3*cm3;
    ctm = (cm1+(m2*cm2)+(m3*cm3));
    printf("\n Custo parcial do motor:%i \n Custo total da compra:%i \n Custo por tipo de motor: 20CV:%i \n 5CV:%i \n 1CV:%i \n", ctm, ctc, ctp1, ctp2, ctp3); 
}
atv5(){
    float altura, largura;
    printf("Informe a altura: ");
    scanf("%f", &altura);
    printf("Informe a largura: ");
    scanf("%f", &largura);	
    		
    float metroQua = (altura * largura);
    float qtdTintaMetro = (metroQua * 3);
    float qtdTintaLata = (qtdTintaMetro / 3.6);
    
    printf("A quatidade necessária de latas de tinta é: %.1f", qtdTintaLata);
}
atv6(){
    char letra;
    printf("Informe uma letra:\nF - Feminino\nM - Masculino\n");
    scanf("%c", &letra);
    switch (letra){
        case 'F':
             printf("\nFeminino.");
             break;
        case 'f':
             printf("\nFeminino.");
             break;             
        case 'M':
             printf("\nMasculino.");
             break;
        case 'm':
             printf("\nMasculino.");
             break;                            
        default:
             printf("\nSexo inválido.");
	
    }
}
atv7(){
    int nm1, nm2, nm3, nmm, nmn;
    printf("\n Digite o primeiro numero\n");
    scanf("%i"&nm1);
    printf("\n Digite o segundo numero\n");
    scanf("%i"&nm2);
    printf("\n Digite o terceiro numero\n");
    scanf("%i"&nm3);
    if(){
        nm1 > nm2 >nm3;
        nmm = nm1;
        nmn = nm3
    }
        else if{
            nm2 > nm1 > nm3;
            nmm = nm2;
            nmn = nm3;
        }
        else if{
            nm3 > nm2 > nm1;
            nmm = nm3;
            nmn = nm1
        }
}
atv8(){
    float resultado, num1, num2;	
    int operacao;
	
    printf("Inserir valor: ");
    scanf("%f", &num1);
    printf("Inserir valor: ");
    scanf("%f", &num2);	
    do {			
	printf("\n[ 1 ] - Adicao \n[ 2 ] - Subtracao \n[ 3 ] - Multiplicacao \n[ 4 ] - Divisao \n[ 5 ] - Fim \n\nDigite o comando para calculo: ");
	scanf("%i", &operacao);
	
	fflush(stdin);
    	switch (operacao){
            case 1:
                resultado = num1 + num2;
                printf("\n%.2f + %.2f = %.2f\n\n",num1, num2, resultado);
            break;
            case 2:
       		resultado = num1 - num2;
             	printf("\n%.2f - %.2f = %.2f\n\n",num1, num2, resultado);
            break;
            case 3:
        	resultado = num1 * num2;
           	printf("\n%.2f * %.2f = %.2f\n\n",num1, num2, resultado);
            break;        
            case 4:
		if(num1==0 || num2==0){
                    printf("\nERRO - divisão com 0! \n\n");
		}else{
                    resultado = num1 / num2;
             	printf("\n%.2f / %.2f = %.2f\n\n",num1, num2, resultado);
		}
            break;  
            case 5:
                    printf("\nSaindo do programa...\n\n");
            break;   
            default:
                    printf("\nERRO - número inválido!\n\n");
    	}
    	
	} while (operacao != 5);
}
atv9(){
    char letra;
    printf("Informe o turno que você estuda:\nM - Matutino\nV - Vespertino\nN - Noturno\n");
    scanf("%c", &letra);
    switch (letra){
        case 'M':
            printf("\nBom dia!");
        break;
        case 'm':
            printf("\nBom dia!");
        break;             
        case 'V':
            printf("\nBoa tarde!");
        break;
        case 'v':
            printf("\nBoa tarde!");
        break;
        case 'N':
            printf("\nBoa noite!");
        break;     
        case 'n':
            printf("\nBoa noite!");
        break;                                                  
        default:
            printf("\nTurno inválido.");
    }
}
atv10(){
    char letra;
    printf("Informe um número: ");
    scanf("%c", &letra);
    switch (letra){
        case '1':
             printf("\nDomingo");
        break;
        case '2':
             printf("\nSegunda-feira");
        break;             
        case '3':
             printf("\nTerça-feira");
        break;
        case '4':
             printf("\nQuarta-feira");
        break;
        case '5':
             printf("\nQuinta-feira");
        break;     
        case '6':
             printf("\nSexta-feira");
        break;        
        case '7':
             printf("\nSábado");
        break;                                                           
        default:
             printf("\nValor inválido.");
    }
}
atv11(){
    int i, nrInicial, nrFinal;		
    printf("Informe o número inicial: ");
    scanf("%i", &nrInicial);
    printf("Informe o número final: ");
    scanf("%i", &nrFinal);
    for (i = nrInicial; i <= nrFinal; i++) {    
            printf("%i", i);
        }
}
atv12(){
    int i, nrInicial, nrFinal, par, impar;
    printf("Informe o número inicial: ");
    scanf("%i", &nrInicial);
    printf("Informe o número final: ");
    scanf("%i", &nrFinal);   
    for (i = nrInicial; i <= nrFinal; i++) {
    if (i%2 == 0) {
        par = i;                    
        printf("\n%i", par);            
        }        
    }
}
atv13(){
    int i, numero, maior, menor, diferenca;
    for (i = 0; i < 10; i++) {
    printf("Informe um número: ");
    scanf("%i", &numero); 
    if (numero > maior) {
        maior = numero;
        }
        if (numero < menor) {
           menor = numero;
        }
        diferenca = maior - menor; 
        } 
        printf("\nMaior número: %i\nMenor número: %i\nDiferença: %i", maior, menor, diferenca)
}
atv14(){
	float quantNotas, media, notas, soma, i;
	printf("Informe a quantidade de notas: ");
    	scanf("%f", &quantNotas);
        for (i = 0; i < quantNotas; i++) {
            printf("Informe uma nota: ");
    	    scanf("%f", &notas);
            soma = soma + notas; 
    	    media = (soma / quantNotas);
        }
        printf("Média bimestral: %.2f", media); 
}
