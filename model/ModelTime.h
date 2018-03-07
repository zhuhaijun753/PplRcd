#ifndef __INC_ModelTime_H_
#define __INC_ModelTime_H_

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include "Model.h"
#include "utils/rtc_pcf8563.h"

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------

#define TIME_TM				0
#define TIME_U32			1
//------------------------------------------------------------------------------
// typedef
//------------------------------------------------------------------------------


CLASS( ModelTime)
{
		
	EXTENDS( Model);
	
	
};

//------------------------------------------------------------------------------
// Type definitions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// function prototypes
//------------------------------------------------------------------------------


extern uint32_t    Tm_to_Seconds(struct  tm	*tm_2_sec);



#endif
