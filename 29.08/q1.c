#include<stdio.h>
#include<math.h>

main(){

    float num;

    printf("Digite um valor numerico:");
    scanf("%f", &num);

    if(num >= 0){

        float raiz = sqrt(num);
        printf("Resultado: %.2f", raiz);

    } else{

        float quad = num * num;
        printf("Resultado: %.2f", quad);

    }
}