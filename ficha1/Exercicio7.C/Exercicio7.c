/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 15 de Outubro de 2017, 3:39
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float distancia, tempo;
    float velocidade = 300000;
    
    printf("Introduza a distancia: ");
    scanf("%f", &distancia);
    
    tempo = distancia / velocidade;
    
    printf("%f km / %f kms = %f al\n ", distancia,velocidade,tempo);
    
   
    return (EXIT_SUCCESS);
}

