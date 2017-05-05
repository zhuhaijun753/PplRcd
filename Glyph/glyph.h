#ifndef __GLYPH_H_
#define __GLYPH_H_
#include "lw_oopc.h"
#include <stdint.h>
#include "dev_lcd.h"
ABS_CLASS( Glyph)
{
	
	uint16_t	font;
	uint16_t	colour;
	I_dev_lcd	*myLcd ;
	int (*init)( Glyph *self, I_dev_lcd *lcd);
	int (*setFont)( Glyph *self, int font);
	int (*setClu)( Glyph *self, int c);
	//abs func
	abstract void (*draw)( Glyph *self, int x, int y);
	
};
void View_test(void);
#endif