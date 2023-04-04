#include<stdio.h>
#include<math.h>

int main(void){

int i,n;

printf("Escreva um numero");

scanf("%d", &n);

if(n % 2==0){

    for(i=10;i < 100;i+=2){

    printf("%d", i);
}


    }else{
if(n % 2 != 0){

for(i=11;i < 100;i+=2){

    printf("%d", i);
}


}


    }









    return 0;
}