#ifndef _INC_mainHMI_H_
#define _INC_mainHMI_H_
#include "HMI.h"
#include "commHMI.h"

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include <stdint.h>
//------------------------------------------------------------------------------
// check for correct compilation options
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------
#define	WINTYPE_CUR						0			//提示窗口
#define	WINTYPE_ALARM					1			
#define	WINTYPE_ERROR					2	
#define	WINTYPE_MUS_BND				3
#define	WINTYPE_MUS_UNTIL			3			//单位复选框
 //------------------------------------------------------------------------------
// typedef
//------------------------------------------------------------------------------
CLASS(winHmi)
{
	EXTENDS(HMI);
	
	sheet  		*p_sht_bkpic;
	sheet  		*p_sht_title;
	sheet  		*p_sht_tips;
	sheet  		*p_sht_cur;

//	sheet  		*arr_p_sht_data[NUM_CHANNEL];
//	sheet  			**pp_shts;
	uint8_t		f_row;
	uint8_t		f_col;
	uint8_t		win_type;
	uint8_t		none;
	
	
};
//------------------------------------------------------------------------------
// global variable declarations
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// function prototypes
//------------------------------------------------------------------------------
winHmi *Get_winHmi(void) ;
void Win_SetTips(char *p_tips);

#endif
