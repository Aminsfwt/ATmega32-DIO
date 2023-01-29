/*
 * Bit_Op.h
 *
 * Created: 1/28/2023 3:55:25 PM
 *  Author: amen safwat
 */ 


#ifndef BIT_OP_H_
#define BIT_OP_H_

#define Set_Bit( reg,  bit) reg |= (1 << bit)
#define Clear_Bit( reg,  bit) reg &= (~( 1 << bit))
#define Toggle_Bit( reg,  bit) reg ^= (1 << bit)
#define Get_Bit( reg,  bit) ((reg >> bit) & 1) 




#endif /* BIT_OP_H_ */