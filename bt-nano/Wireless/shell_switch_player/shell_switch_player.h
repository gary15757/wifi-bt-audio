

/*
********************************************************************************************
*
*        Copyright (c):Fuzhou Rockchip Electronics Co., Ltd
*                             All rights reserved.
*
* FileName: Web\dlna\dlna.h
* Owner: linyb
* Date: 2015.7.21
* Time: 18:10:56
* Version: 1.0
* Desc:
* History:
*    <author>    <date>       <time>     <version>     <Desc>
*    linyb     2015.7.21     18:10:56   1.0
********************************************************************************************
*/


#ifndef __SHELL_SWITCH_PLAYER_H__
#define __SHELL_SWITCH_PLAYER_H__
#include "typedef.h"
#include "rk_heap.h"


/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define
*
*---------------------------------------------------------------------------------------------------------------------
*/



#define _SWITCH_PLAYER_SHELL_ __attribute__((section("SwitchPlayerShell")))
#define _SWITCH_PLAYER_TASK_INIT_


typedef void * HDC;
/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable declare
*
*---------------------------------------------------------------------------------------------------------------------
*/
enum __SWITCH_PLAYER_CMD
{
    SWITCH_PLAYER_CREATE = 0,
    SWITCH_PLAYER_DESTORY = 1,
};

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API Declare
*
*---------------------------------------------------------------------------------------------------------------------
*/
extern rk_err_t SwitchPlayer_shell(HDC dev, uint8 * pstr);


#endif

