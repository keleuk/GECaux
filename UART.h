/* 
 * File:   UART.h
 * Author: ADMIN
 *
 * Created on August 8, 2018, 6:51 PM
 */

#ifndef UART_H
#define	UART_H

void InitUART();
void SendChar_UART(char c);
void SendString_UART(char *s, int length);

#endif	/* UART_H */

