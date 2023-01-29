/*
 * CFile1.c
 *
 * Created: 1/28/2023 3:54:33 PM
 *  Author: amen safwat
 */ 
#include "Dio_interface.h"
#include "Std_Types.h"
#include "Bit_Op.h"

/****************************************SET DIRICTION OF I/O BIT****************************/
void Set_Driction(u8 port, u8 pin, u8 direction)
{
	switch(port)
	{
		case PORT_A:
			if(direction == INPUT)
				Clear_Bit(DDRA,pin);
			else if(direction == OUTPUT)
				Set_Bit(DDRA,pin);
			break;

		case PORT_B:
			if(direction == INPUT)
				Clear_Bit(DDRB,pin);
			else if(direction == OUTPUT)
				Set_Bit(DDRB,pin);
		break;

		case PORT_C:
			if(direction == INPUT)
				Clear_Bit(DDRC,pin);
			else if(direction == OUTPUT)
			    Set_Bit(DDRC,pin);
		break;

		case PORT_D:
			if(direction == INPUT)
				Clear_Bit(DDRD,pin);
			else if(direction == OUTPUT)
				Set_Bit(DDRD,pin);
		break;
	}
}

/****************************************SET VALUE OF I/O BIT****************************/
void Set_Value(u8 port, u8 pin, u8 value)
{
	switch(port)
	{
		case PORT_A:
			if(value == LOW)
				Clear_Bit(PORTA,pin);
			else if(value == HIGH)
				Set_Bit(PORTA,pin);
		break;

		case PORT_B:
			if(value == LOW)
				Clear_Bit(PORTB,pin);
			else if(value == HIGH)
				Set_Bit(PORTB,pin);
		break;

		case PORT_C:
			if(value == LOW)
				Clear_Bit(PORTC,pin);
			else if(value == HIGH)
				Set_Bit(PORTC,pin);
		break;

		case PORT_D:
			if(value == LOW)
				Clear_Bit(PORTD,pin);
			else if(value == HIGH)
				Set_Bit(PORTD,pin);
		break;
	}	
}

/****************************************GET VALUE OF INPUT BIT****************************/
u8 Get_Value(u8 port, u8 pin)
{
	switch(port)
	{
		case PORT_A:
			return Get_Bit(PINA,pin);
		break; 

		case PORT_B:
			return Get_Bit(PINB,pin);
		break;

		case PORT_C:
			return Get_Bit(PINC,pin);
		break;

		case PORT_D:
			return Get_Bit(PIND,pin);
		break;
	}
	return 0;

}