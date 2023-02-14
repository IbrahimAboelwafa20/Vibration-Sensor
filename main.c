/*
 * main.c
 *
 *  Created on: Dec 20, 2022
 *      Author: Ibrahim Aboelwafa
 */


#include "STD_TYPES.h"
#include "PORT_interface.h"
#include "DIO_interface.h"
#include "VIB_interface.h"
#include "VIB_config.h"
#include "ADC_interface.h"

void main(void)
{
	u8 arr[5];
	PORT_voidInit();
	ADC_voidInit();
	u16 MilliVolt;






	while(1)

	{
		if(MilliVolt != 0)
		{
		VIB(arr);
		DIO_u8SetPinValue(DIO_PORTC,DIO_PIN0,arr[0]);

		}
		else
		{

		}

	}

}

