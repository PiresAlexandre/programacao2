/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Outubro de 2017, 14:23
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num ;
    
    
    for (num = 2; num <= 300; num+=2){
        printf("%d\n", num);
    }

    return (EXIT_SUCCESS);
}

