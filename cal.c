#include <stdio.h>

int main(){

    int a,b,c,d,res,res1,cal,den,maior,menor,pri=0,pri1=0,i;
    scanf("%d %d %d %d", &a, &c, &b, &d);
    res = d;
    d = b;
    res1 = a * res;
    den = c * d;
   while(1){
    for(i=1;i<res1;i++){
        if(res1 %i == 0){
            pri++;
        }
    }
    for(i=1;i<den;i++){
        if(den %i == 0){
            pri1++;
        }
    }
    if(pri < 3 || pri1 < 3){
           break;
    }
    if(res1 > den){
        maior = res1;
        menor = den;
    }else{
        maior = den;
        menor = res1;
    }
    cal = maior;
    while(cal > 0){   // laço qie procura o MDC
        cal = maior % menor;
        if(cal == 0){
            break;
        }else{
            menor = cal;
            maior = menor;
        }
    }
    res1 /= menor;
    den /= menor;
    break;
}
   // printf("%d\n", menor);

    printf("\n%d + %d = %d  X  %d =  %d\n%d   %d   %d     %d    %d", a, b, a, res, res1, c, res, c, d, den);


    return 0;
}
