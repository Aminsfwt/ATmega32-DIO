/*
 * Project.c
 *
 * Created: 1/28/2023 3:52:17 PM
 * Author : amen safwat
 * Project Name : Turning LED ON/OFF using Bush Button. using pull up resistore in the microcontroller.

 */ 

#include "Bit_Op.h"
#include "Dio_interface.h"
#include "Std_Types.h"
#define F_CPU 16000000ul

int main()
{
    Set_Driction(PORT_A, PIN_2, INPUT);
	Set_Driction(PORT_C, PIN_7, OUTPUT);
	Set_Value(PORT_A, PIN_2, HIGH);

    while (1) 
    {
		if(Get_Value(PORT_A, PIN_2) == INPUT)
			Set_Value(PORT_C, PIN_7, HIGH);
		 
		else if(Get_Value(PORT_A, PIN_2) == OUTPUT)
			Set_Value(PORT_C, PIN_7, LOW);
		
    }
	return 0;
}

