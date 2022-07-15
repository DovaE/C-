#define	XC_HEADER_TEMPLATE_H
#include <xc.h> 
#include "configuracion.h"
#define columns LATB
#define rows    LATD

#define LARGO 108                  //Longitud de la tabla
#define TAM 11

int nombre[LARGO+8]={
    0b00000000, //Espacio
    0b00000000, //Espacio
    0b00000000, //Espacio
    0b00000000, //Espacio
    0b00000000, //Espacio
    0b00000000, //Espacio
    0b00000000, //Espacio
    0b00000000, //Espacio
    // Dato letra 'D'
    0b11111111,
    0b10000001,
    0b01000010,
    0b00111100,
    0b00000000, //Espacio
    // Dato letra 'O'
    0b01111110,
    0b10000001,
    0b10000001,
    0b01111110,
    0b00000000, //Espacio
    // Dato letra 'M'
    0b11111111,
    0b01000000,
    0b00100000,
    0b01000000,
    0b11111111,
    0b00000000, //Espacio
    // Dato letra 'I'
    0b10000001,
    0b11111111,
    0b10000001,
    0b00000000, //Espacio
    //Dato letra 'N'
    0b11111111,
    0b01110000,
    0b00001110,
    0b11111111,
    0b00000000, //Espacio
    //Dato letra 'G'
    0b11111111,
    0b10000001,
    0b10001001,
    0b10001111,
    0b00000000, //Espacio
    //Dato letra 'U'
    0b11111111,
    0b00000001,
    0b00000001,
    0b11111111,
    0b00000000, //Espacio
    //Dato letra 'E'
    0b11111111,
    0b10001001,
    0b10001001,
    0b10001001,
    0b00000000, //Espacio
    //Dato letra 'Z'
    0b10000011,
    0b10001101,
    0b10110001,
    0b11100001,
    0b00000000, //Espacio
    0b00000000, //Espacio
    //Dato letra 'V'
    0b11111110,
    0b00000001,
    0b00000001,
    0b11111110,
    0b00000000, //Espacio
    //Dato letra 'A'
    0b01111111,
    0b10001000,
    0b10001000,
    0b01111111,
    0b00000000, //Espacio
    //Dato letra 'L'
    0b11111111,
    0b00000001,
    0b00000001,
    0b00000001, 
    0b00000000, //Espacio
    // Dato letra 'D'
    0b11111111,
    0b10000001,
    0b01000010,
    0b00111100,
    0b00000000, //Espacio
     //Dato letra 'E'
    0b11111111,
    0b10001001,
    0b10001001,
    0b10001001,
    0b00000000, //Espacio
    //Dato letra 'Z'
    0b10000011,
    0b10001101,
    0b10110001,
    0b11100001,
    0b00000000, //Espacio
    0b00000000, //Espacio
     // Dato letra 'I'
    0b10000001,
    0b11111111,
    0b10000001,
    0b00000000, //Espacio
     //Dato letra 'V'
    0b11111100,
    0b00000010,
    0b00000001,
    0b00000010,
    0b11111100,
    0b00000000, //Espacio
    //Dato letra 'A'
    0b01111111,
    0b10001000,
    0b10001000,
    0b01111111,
    0b00000000, //Espacio
    //Dato letra 'N'
    0b11111111,
    0b01110000,
    0b00001110,
    0b11111111,
    0b00000000, //Espacio
    0b00000000, //Espacio
    //Dato letra 'A'
    0b01111111,
    0b10001000,
    0b10001000,
    0b01111111,
    0b00000000, //Espacio
    //Dato punto '.'
    0b00000011,
    0b00000011,
    0b00000000,
    0b00000000 //Espacio
    };

int uno[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01000001,
    0b11111111,
    0b00000001,
    0b00000000,
    0b00000000    
};

int dos[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01100011,
    0b10000101,
    0b10001001,
    0b10010001,
    0b01100001,
    0b00000000    
};

int tres[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b10000010,
    0b10000001,
    0b10110001,
    0b11001001,
    0b10000110,
    0b00000000
};

int cuatro[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011100,
    0b00100100,
    0b01000100,
    0b11111111,
    0b00000100,
    0b00000000
};

int cinco[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b11110010,
    0b10010001,
    0b10010001,
    0b10010001,
    0b10001110,
    0b00000000
};

int cero[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b11111111,
    0b10001001,
    0b10010001,
    0b10100001,
    0b11111111,
    0b00000000
};

int seis[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00011110,
    0b00101001,
    0b01001001,
    0b10001001,
    0b00000110,
    0b00000000
};

int siete[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b11000000,
    0b10000000,
    0b10001111,
    0b10010000,
    0b11100000,
    0b00000000
};

int ocho[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01101110,
    0b10010001,
    0b10010001,
    0b10010001,
    0b01101110,
    0b00000000
};

int nueve[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b01110000,
    0b10001001,
    0b10001001,
    0b10001010,
    0b01111100,
    0b00000000
};

int punto[TAM]={
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000000,
    0b00000011,
    0b00000011,
    0b00000000
};

void desplegarNombre(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<LARGO;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = nombre[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void CERO(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = cero[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void UNO(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = uno[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void DOS(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = dos[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void TRES(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = tres[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void CUATRO(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = cuatro[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void CINCO(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = cinco[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void SEIS(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = seis[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void SIETE(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = siete[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void OCHO(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = ocho[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void NUEVE(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = nueve[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}

void PUNTODEC(void){
    int bitMask[8]={1,2,4,8,16,32,64,128}; //Mascara
    for(int i=0;i<TAM;i++){         //Recorrido de tabla
         for(int k=0;k<20;k++){           //Refresco de matriz
            for(int j=0;j<8;j++){         //Barrido de columnas
               LATD = ~bitMask[j]; //Columnas ponderadas
               LATB = punto[j+i];  //Desplazamiento de tabla
               __delay_ms(3);           //Demora de multiplexado
            }  
         }
      }
}
