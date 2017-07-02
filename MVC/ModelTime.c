#include "ModelTime.h"
#include <string.h>
#include "utils/rtc_pcf8563.h"
#include "mem/CiiMem.h"
#include "sdhDef.h"

//#include "utils/rtc.h"
//============================================================================//
//            G L O B A L   D E F I N I T I O N S                             //
//============================================================================//

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// module global vars
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// global function prototypes
//------------------------------------------------------------------------------

//============================================================================//
//            P R I V A T E   D E F I N I T I O N S                           //
//============================================================================//

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// local types
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// local vars
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// local function prototypes
//------------------------------------------------------------------------------
/* Cycle/Sync Callback functions */

//============================================================================//
//            P U B L I C   F U N C T I O N S                                 //
//============================================================================//
int MdlTime_init( Model *self, IN void *arg)
{
	UtlRtc *rtc = ( UtlRtc *)Pcf8563_new();
	struct  tm	*tm = CALLOC( 1, sizeof( *tm));
//	self->dataSource = Pcf8563_new();
	rtc->init( rtc, NULL);
	
	rtc->get( rtc, tm);
	
	
	
	self->dataSource = rtc;
	self->coreData = tm;
	self->crDt_len = sizeof( *tm);
	
	return RET_OK;
}

int MdlTime_getData(  Model *self, IN int aux, void *arg) 
{
	struct  tm	*tm = ( struct  tm	*) self->coreData;
	struct  tm	*tm2 = ( struct  tm	*) arg;
	tm->tm_sec ++;
	if( tm->tm_sec >59)
	{
		tm->tm_min ++;
		tm->tm_sec = 0;
		
	}
	
	if( tm->tm_min >59)
	{
		tm->tm_hour ++;
		tm->tm_min = 0;
		
	}
	tm2->tm_hour = tm->tm_hour;
	tm2->tm_min = tm->tm_min;
	tm2->tm_sec = tm->tm_sec;
	
//	memcpy( self->coreData, arg, self->crDt_len);
	return RET_OK;
}

//=========================================================================//
//                                                                         //
//          P R I V A T E   D E F I N I T I O N S                          //
//                                                                         //
//=========================================================================//
/// \name Private Functions
/// \{

CTOR( ModelTime)
SUPER_CTOR( Model);
FUNCTION_SETTING( Model.init, MdlTime_init);
FUNCTION_SETTING( Model.getMdlData, MdlTime_getData);
END_CTOR

