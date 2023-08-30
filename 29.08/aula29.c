#include<stdio.h>
#include<math.h>

main(){

    int a = 10, b = 15, c = 20;

    if(((a < b) && (b < c)) || (c < a)){

        printf("Verdadeiro");

    }

    else{

        printf("Falso");

    }

}