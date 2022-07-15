/*
 * File:   principal.c
 * Author: Dominguez Valdez Ivan Alejandro
 *
 * Created on 5 de julio de 2022, 06:18 PM
 */

#include <xc.h>
#include <stdio.h>
#include <stdint.h>
#include "configuracion.h"
#include "Matrix8x8_libreria.h"

uint16_t valor;
uint16_t valorAct;
int bandera;
double voltaje; 
double voltajeAux;
double voltajeAct;
int Dig1, Dig2, Dig3;
char array[3];

unsigned int Lectura_ADC(unsigned char ch);

void main(){
    TRISB = 0;
    TRISD = 0;
    TRISA = 1;
    ADCON1bits.PCFG = 0; // Todos los puertos Analogicos
    ADCON1bits.VCFG = 0;
    ADCON0 = 0;
    ADCON2bits.ACQT = 3;
    ADCON2bits.ADCS = 5;
    ADCON2bits.ADFM = 1;
    ADCON0bits.ADON = 1;
    
    voltajeAct = 0;
    desplegarNombre();
    while(1){                       //Ciclo infinito
        
        valor = Lectura_ADC(0);
        voltaje = (valor*5)/1023;
        Dig1 = voltaje;
        //Despliegue de datos
        if(Dig1==0){
        CERO();
        }
        else if(Dig1==1){
            UNO();
        }
        else if(Dig1==2){
            DOS();
        }
        else if(Dig1==3){
            TRES();
        }
        else if(Dig1==4){
            CUATRO();
        }
        else if(Dig1==5){
            CINCO();
        }
        else if(Dig1==6){
            SEIS();
        }
        else if(Dig1==7){
            SIETE();
        }
        else if(Dig1==8){
            OCHO();
        }
        else if(Dig1==9){
            NUEVE();
        }
        else{
        }

        PUNTODEC();

        //Despliegue de un punto decimal
        voltajeAux = voltaje - Dig1;
        if(voltajeAux>0.01||voltajeAux<=0.19){
            UNO();
        }
        else if(voltajeAux>=0.2||voltajeAux<=0.29){
            DOS();
        }
        else if(voltajeAux>=0.3||voltajeAux<=0.39){
            TRES();
        }
        else if(voltajeAux>=0.4||voltajeAux<=0.49){
            CUATRO();
        }
        else if(voltajeAux>=0.5||voltajeAux<=0.59){
            CINCO();
        }
        else if(voltajeAux>=0.6||voltajeAux<=0.69){
            SEIS();
        }
        else if(voltajeAux>=0.7||voltajeAux<=0.79){
            SIETE();
        }
        else if(voltajeAux>=0.8||voltajeAux<=0.89){
            OCHO();
        }
        else {
            NUEVE();
        }       
        
        do{
            valorAct = Lectura_ADC(0);
            voltajeAct = (valorAct*5)/1023;
        }
        while(voltajeAct == voltaje);
            
    }
                   
}



unsigned int Lectura_ADC(unsigned char ch){
    if(ch > 13)return 0;
    ADCON0 = 0;
    ADCON0 = (ch<<2);
    ADCON0bits.ADON = 1;
    ADCON0bits.GO_DONE = 1;
    while(ADCON0bits.GO_DONE == 1);
    ADCON0bits.ADON = 0;
    return ADRES;
}

