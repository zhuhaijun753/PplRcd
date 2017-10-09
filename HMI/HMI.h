#ifndef _INC_HMI_H_
#define _INC_HMI_H_

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include <stdint.h>
#include <string.h>
#include "lw_oopc.h"

#include "sdhDef.h"
#ifdef NO_ASSERT
#include "basis/assert.h"
#else
#include "assert.h"
#endif

#include "sheet.h"
#include "focus.h"



//------------------------------------------------------------------------------
// check for correct compilation options
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------
#define HMIKEY_UP		"up"
#define HMIKEY_DOWN		"down"
#define HMIKEY_LEFT		"left"
#define HMIKEY_RIGHT		"right"
#define HMIKEY_ENTER		"enter"
#define HMIKEY_ESC		"esc"


#define	HMI_FLAG_HIDE	0
#define	HMI_FLAG_SHOW	1


#define IS_HMI_HIDE(flag)	((flag&1) == 0)
#define IS_HMI_KEYHANDLE(flag)	((flag&2))
 //------------------------------------------------------------------------------
// typedef
//------------------------------------------------------------------------------
typedef struct {
	uint8_t		rowGrap;			//�м��
	uint8_t		colGrap;			//�м��
	uint8_t		bkc;
	uint8_t		numRow;
	uint8_t		numCol;
	uint8_t		none[3];
}hmiAtt_t;


ABS_CLASS(HMI)
{
	HMI*			prev;
	HMI*			next;
	
	focus_user_t	*p_fcuu;
	uint8_t			flag;
	uint8_t			arg[3];		//�л���Ļʱ��������Ļ�䴫��һЩ����
	
	
	//��ʾ��̬����
	int		(*init)( HMI *self, void *arg);
	void	(*show)( HMI *self);
	
	
	//�������
	void	(*dataVisual)(HMI *self, void *arg);		//17-09-20 ���ݿ��ӻ�����
	
	// initSheet hide 
	void		(*hide)( HMI *self);
	void		(*initSheet)( HMI *self);
	void		(*switchHMI)( HMI *self, HMI *p_hmi);
	void		(*switchBack)( HMI *self);
	
	//��������
	void		(*hitHandle)( HMI *self, char *s_key);
	void		(*dhitHandle)( HMI *self, char *s_key);
	void		(*longpushHandle)( HMI *self,  char *s_key);
	void		(*conposeKeyHandle)( HMI *self, char *s_key1, char *s_key2);
	//���㴦��
	void		(*init_focus)(HMI *self);
	void		(*clear_focus)(HMI *self, uint8_t fouse_row, uint8_t fouse_col);
	void		(*show_focus)( HMI *self, uint8_t fouse_row, uint8_t fouse_col);
};

typedef   const char  ro_char;


//------------------------------------------------------------------------------
// global variable declarations
//------------------------------------------------------------------------------
extern const Except_T Hmi_Failed;
//extern  ro_char str_endRow[];
//extern	ro_char str_endCol[];
extern HMI *g_p_curHmi;
extern char	*p_hmi_buf;
//------------------------------------------------------------------------------
// function prototypes
//------------------------------------------------------------------------------
int Is_rowEnd( const char *str);
int Is_colEnd( const char *str);
extern void Set_flag_show(uint8_t	*p_flag, int val);
extern void Set_flag_keyhandle(uint8_t	*p_flag, int val);
#endif