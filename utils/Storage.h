#ifndef __INC_Storage_H
#define __INC_Storage_H
//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include "basis/macros.h"
#include "utils/time.h"
#include <stdint.h>
#include "ModelFactory.h"
#include "system.h"

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------
#define STG_CHN_CONF(n)					(n)
#define STG_SYS_CONF					0x10
#define STG_CHN_DATA(n)					(0x20 + n)
#define STG_CHN_ALARM(n)				(0x30 + n)
#define STG_LOSE_PWR					(0x40)

#define	IS_CHN_CONF(type)				(type < NUM_CHANNEL)
#define	IS_SYS_CONF(type)				(type == 0x10)
#define	IS_CHN_DATA(type)				((type & 0xf0) == 0x20)
#define	IS_CHN_ALARM(type)			((type & 0xf0) == 0x30)
#define	IS_LOSE_PWR(type)				(type == 0x40)

#define STG_GET_CHN(type)				(type & 0x0f)

#define STG_DRC_READ					0
#define STG_DRC_WRITE					1

#define	STG_STOP									0
#define	STG_COVER									1
#define	STG_ERASE									2		//对于记录类，使用这种形式就不必考虑缓存了，只可能往后
#define STG_RCD_FULL_ACTION				STG_ERASE


#define STG_DEF_FILE_SIZE 		0


#define STG_MAX_NUM_CHNALARM			24		//每个通道的最大报警数量	
#define STG_MAX_NUM_LST_PWR				24
//------------------------------------------------------------------------------
// typedef
//------------------------------------------------------------------------------
typedef struct {
	uint32_t				rcd_maxcount;
	uint32_t				rcd_count;
	
}rcd_mgr_t;

typedef struct {
	uint8_t			alm_pwr_type;
	uint8_t			flag;
	uint8_t			none[2];
	uint32_t		happen_time_s;
	uint32_t		disapper_time_s;
}rcd_alm_pwr_t;
typedef struct
{
	mdl_chn_save_t		mdlchn[NUM_CHANNEL];
	system_conf_t			sys_cfg;
	
	
}conf_file_t;

CLASS(Storage)
{
//	IMPLEMENTS( Observer);

	
	rcd_mgr_t		arr_rcd_mgr[NUM_CHANNEL];
	int					(*init)(Storage *self);
	int					(*rd_stored_data)(Storage *self, uint8_t	cfg_type, void *buf, int len);
	int					(*wr_stored_data)(Storage *self, uint8_t	cfg_type, void *buf, int len);
	void				(*shutdown)(Storage *self);
	int					(*open_file)(uint8_t	cfg_type, uint32_t file_size);
//	uint8_t			arr_rcd_fd[NUM_CHANNEL];
//	uint8_t			alarm_fd;
//	uint8_t			lose_pwr_fd;
	
};
//------------------------------------------------------------------------------
// Type definitions
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// function prototypes
//------------------------------------------------------------------------------
Storage		*Get_storage();

//针对记录数据的特殊接口
//读取某段时间内的记录数据，返回值是读取到的数据的长度
//并且把数据转成csv格式
int	STG_Read_rcd_by_time(uint8_t	chn, uint32_t start_sec, uint32_t end_sec, char *buf, int buf_size, uint32_t *rd_sec);			
int	STG_Set_file_position(uint8_t	file_type, uint8_t rd_or_wr, uint32_t position);


#endif
