/*
 * VIB_program.c
 *
 *  Created on: Dec 20, 2022
 *      Author: Ibrahim Aboelwafa
 */


#include "STD_TYPES.h"
#include "ADC_interface.h"
#include "VIB_interface.h"
#include "VIB_config.h"




u8 VIB(u8* Copy_p8VibrationHistory)
{
	u8 Local_u8ErrorState = 0;
	u16 Local_u8Value = 0;
    u16 MilliVolt;
	u8 Local_u8Vibration = 0;
	u8 static Local_u8Counter;




if (Copy_p8VibrationHistory == NULL)
    {
        Local_u8ErrorState = 1;
    }
else
    {

        Local_u8ErrorState = ADC_u8StartConversionSynchronus(VIB_CHANNEL,&Local_u8Value);
        MilliVolt = (u16)(((u32)Local_u8Value*2560UL)/256UL);
        



    if(Local_u8Counter == 4)
        {
            Local_u8Counter = 0 ;

        }
    else
        {
            Copy_p8VibrationHistory[Local_u8Counter] =Local_u8Vibration;
            Local_u8Counter ++;

        }


    }
    return Local_u8ErrorState;



}




