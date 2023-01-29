/*
 * Dio_interface.h
 *
 * Created: 1/28/2023 3:54:08 PM
 *  Author: amen safwat
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "Std_Types.h" 
/***************************************THE ADRESSES OF I/O REGISTERS****************************/
#define  PORTA *((volatile u8 *)0x3B)
#define  DDRA *((volatile u8 *)0x3A)
#define  PINA *((volatile u8 *)0x39)

#define  PORTB *((volatile u8 *)0x38)
#define  DDRB *((volatile u8 *)0x37)
#define  PINB *((volatile u8 *)0x36)

#define  PORTC *((volatile u8 *)0x35)
#define  DDRC *((volatile u8 *)0x34)
#define  PINC *((volatile u8 *)0x33)

#define  PORTD *((volatile u8 *)0x32)
#define  DDRD *((volatile u8 *)0x31)
#define  PIND *((volatile u8 *)0x30)

/***************************************USED MACROS****************************/
#define INPUT    0
#define OUTPUT   1

#define LOW	     0
#define HIGH     1

/***************************************ENUM OF PINS****************************/
typedef enum
{
	PIN_0,
	PIN_1,
	PIN_2,
	PIN_3,
	PIN_4,
	PIN_5,
	PIN_6,
	PIN_7
}PINS;

/***************************************ENUM OF PORTS****************************/
typedef enum
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D
}PORTS;

/***************************************FUNCTIONS OF I/O****************************/
void Set_Driction(u8 port, u8 pin, u8 direction);
void Set_Value(u8 port, u8 pin, u8 value);
u8   Get_Value(u8 port, u8 pin);


#endif /* DIO_INTERFACE_H_ */