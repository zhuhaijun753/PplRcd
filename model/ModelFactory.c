#include "ModelFactory.h"
#include <string.h>
#include "ModelTime.h"

Model *aMdl[4] ;
Model *ModelCreate( char *type)
{
	char *p;
	
	p = strstr( type, "time");
	
	if( p)
	{
		if(aMdl[0] == NULL)
			aMdl[0] = (Model *)ModelTime_new();
		return aMdl[0];
	}
	
	p = strstr( type, "test");
	
	if( p)
	{
		
		return SUPER_PTR( Get_ModeTest(), Model);
	}
	
	
	Except_raise(&model_Failed, __FILE__, __LINE__);
	return NULL;
	
}




