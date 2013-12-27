#include "General.h"

#ifndef MODEM_H
    #define MODEM_H

 //////////////////////////////////////////////////////////////
//INCLUDES
//////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////
//DEFINES
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//MACROS
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//CONSTANTES
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//TIPOS DEFINIDOS Y ESTRUCTURAS
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//METODOS PUBLICOS   Definici�n de funciones o prototipos
//////////////////////////////////////////////////////////////
void Inicializacion_Com_Modem(void);
BOOL AT_CREG(void);
BOOL AT_CPIN(unsigned char*);
BOOL AT_WOPEN(unsigned char);
BOOL AT_GPRSMODE(unsigned char);
BOOL AT_APNSERV(unsigned char*);
BOOL AT_APNUN(unsigned char*);
BOOL AT_APNPW(unsigned char*);
BOOL AT_TCPSERV(unsigned char*);
BOOL AT_TCPPORT(unsigned char*);
BOOL AT_TCPTXDELAY(unsigned char*);
BOOL AT_DLEMODE(unsigned char);
BOOL AT_CGATT(unsigned char);
BOOL AT_CONNECTIONSTART(void);
BOOL AT_CONNECTIONSTOP(void);
BOOL AT_OTCP(void);
BOOL Caracter_ETX(void);
#endif	
