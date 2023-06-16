/*
 * Defines.h
 *
 * Created: 6.12.2022. 10:31:01
 *  Author: Aleksandar Bogdanovic
 */ 


#ifndef DEFINES_H_
#define DEFINES_H_


#define  F_CPU 16000000								// 16MHz
#define BAUD 9600
#define UBRRN (( (F_CPU/16) /BAUD) - 1)				// Definicija koja racuna UBRRn kako bi setovali pravi baud rate


#endif /* DEFINES_H_ */