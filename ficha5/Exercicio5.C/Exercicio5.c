/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 14 de Novembro de 2017, 16:34
 */

#include <stdio.h>
#include <stdlib.h>
#include "header.h"

#define LIMITE 10

int main(int argc, char** argv) {
    double arr[LIMITE], num;
    int x;

        for (x = 0; x < LIMITE; ++x) {
            puts("Introduza um valor: ");
            scanf("%lf", &arr[x]);      
    }
    
    imprimirVetor(arr);
    dobroVetor(arr);
    somaVetor(arr);
    mediaVetor(arr);
    maiorVetor(arr);
    menorVetor(arr);

    return (EXIT_SUCCESS);
}
