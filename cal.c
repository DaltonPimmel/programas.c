#include <stdio.h>

void somar(int *a, int *c, int *b, int *d, char s, int ve){
    int res, res1, den, pri = 0, pri1 = 0, cal, maior, menor, i;
    if(ve != 2){
        res = *d; // invertendo os valores.
        *d = *c;
        res1 = *a * res;  // multiplicando os dois campos.
        den = *b * *c;
    }else{
        res1 = *a * *c;
        den = *b * *d;
    }

    if(res1 > den){  // verifica qual numero é maior para descobrir o MDC.
        maior = res1;
        menor = den;
    }else{
        maior = den;
        menor = res1;
    }
    cal = maior;    // variavel auxiliar
    while(cal > 1){   // laço qie procura o MDC
        cal = maior % menor;
        if(cal == 0){
            break;
        }else{
            menor = cal;
            maior = menor;
        }
   // }
    if(res1 % menor == 0 && den % menor == 0){
        res1 /= menor;
        den /= menor;
    }
   // break;
}

    if(ve != 2){
        printf("\n%d %c %d = %d  X  %d =  %d\n%d   %d   %d     %d    %d", *a, s, *c, *a, res, res1, *b, res, *b, *c, den);
        printf("\n\nMDC: %d\n", menor);
    }else{
        printf("\n%d %c %d = %d \n%d   %d  %d", *a, s, *c, res1, *b, *d, den);
        printf("\n\nMDC: %d\n", menor);
    }

}


int main(){
    char s;
    int opcao;
    int a,b,c,d,res,res1,cal,den,maior,menor,pri=0,pri1=0,i, ve;
    while(1){
        printf("0: Soma de Fracoes: ");
        printf("\n1: Subtracao de Fracoes: ");
        printf("\n2: Multiplicacao de Fracoes: ");
        printf("\n3: Divisao de Fracoes: ");
        printf("\n4: Sair: ");

        printf("\n\nSelecione a opcao desejada: ");
        scanf("%d", &opcao);
        if(opcao == 4){
            return 0;
        }
        printf("\n\nInforme quatro numeros, a, b, c, d\n");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        switch(opcao){
            case 0:
                ve = 0;
                s = '+';
                somar(&a, &c, &b, &d, s, ve);
            break;

            case 1:
                ve = 1;
                s = '/';
                somar(&a, &c, &b, &d, s, ve);
            break;

            case 2:
                ve = 2;
                s = 'X';
                somar(&a, &c, &b, &d, s, ve);
            break;

            case 3:
                //  dividir();
            break;

         //   default:
          //      printf("\n\nOpcao invalida! ");
          //      break;

    }
   }

    return 0;
}
