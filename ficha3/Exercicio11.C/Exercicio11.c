/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 15:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, numero, div; 

    printf("Insira um numero ");
    scanf("%d", &numero);
   
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0){ 
        div++;
        }
    }
    
     if (div == 2){
        printf("%d é primo.", numero);
    }else{
        printf("%d não é primo.", numero);
    }
    
    return (EXIT_SUCCESS);
}

