#ifndef __DRVLCDUSARTGPU_H_
#define __DRVLCDUSARTGPU_H_
#include "stdint.h"
#include "dev_lcd.h"



int Dev_UsartInit( void);
void GpuSend(char * buf);

extern I_dev_lcd g_IUsartGpu;
#endif
