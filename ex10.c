#include <stdio.h>

int main()
{
   
   int valor, valorDentro, valorFora;
   for(int i = 0;i < 10; i++){
       
       printf("digite um valor: \n");
       scanf("%d", &valor);
           
        if(valor >= 10 && valor <=20){
            valorDentro++;
            
        } else{
               valorFora++;
        }
       
    }
       printf("\n Os numeros que estao dentro do intervalo de 10 a 20 sao: %d", valorDentro);
       printf("\n Os numeros que estao fora do intervalo de 10 a 20 sao: %d", valorFora);
}

