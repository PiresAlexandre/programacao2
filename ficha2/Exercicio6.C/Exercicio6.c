/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 0:41
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hora, minutos;
     
    printf("Insira as horas: ");
    scanf("%d", &hora);
    
    printf("Insira os minutos: ");
    scanf("%d", &minutos);
    
    if (hora > 23 || minutos > 59){
        puts("Operação inválida!\n");
              
    }
    if (hora >= 12){
        printf("Resultado =  %d : %d PM\n", hora - 12, minutos);
        
    }else{
        printf("Resultado =  %d : %d AM\n", hora, minutos);
       
    }

    return (EXIT_SUCCESS);
}

