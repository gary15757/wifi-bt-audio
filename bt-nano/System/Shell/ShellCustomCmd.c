/*
********************************************************************************************
*
*        Copyright (c):  Fuzhou Rockchip Electronics Co., Ltd
*                             All rights reserved.
*
* FileName: System\Shell\ShellCustomCmd.c
* Owner: aaron.sun
* Date: 2015.10.20
* Time: 14:01:15
* Version: 1.0
* Desc: shell custom cmd
* History:
*    <author>    <date>       <time>     <version>     <Desc>
*    aaron.sun     2015.10.20     14:01:15   1.0
********************************************************************************************
*/


#include "BspConfig.h"
#ifdef __SYSTEM_SHELL_SHELLCUSTOMCMD_C__

/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #include define
*
*---------------------------------------------------------------------------------------------------------------------
*/
#include "rkos.h"
#include "Bsp.h"
#include "ShellCustomCmd.h"



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   #define / #typedef define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local variable define
*
*---------------------------------------------------------------------------------------------------------------------
*/
SHELL_CMD ShellCustomName[] =
{
    "function",NULL,"NULL","NULL",
    "variable",NULL,"NULL","NULL",
    "\b",NULL,"NULL","NULL",
};



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   global variable define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function declare
*
*---------------------------------------------------------------------------------------------------------------------
*/
rk_err_t ShellVariableValue(HDC dev, uint8 * pstr);
rk_err_t ShellFunctionRun(HDC dev, uint8 * pstr);



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(common) define
*
*---------------------------------------------------------------------------------------------------------------------
*/
/*******************************************************************************
** Name: ShellCustomParsing
** Input:HDC dev, uint8 * pstr
** Return: rk_err_t
** Owner:aaron.sun
** Date: 2015.10.20
** Time: 14:06:41
*******************************************************************************/
_SYSTEM_SHELL_SHELLCUSTOMCMD_COMMON_
COMMON API rk_err_t ShellCustomParsing(HDC dev, uint8 * pstr)
{
    uint32 i = 0;
    uint8  *pItem;
    uint16 StrCnt = 0;
    rk_err_t   ret;

    uint8 Space;

    StrCnt = ShellItemExtract(pstr,&pItem, &Space);

    if(StrCnt == 0)
        return RK_ERROR;



    ret = ShellCheckCmd(ShellCustomName, pItem, StrCnt);
    if(ret < 0)
    {
        return RK_ERROR;
    }

    i = (uint32)ret;

    pstr += StrCnt;
    switch (i)
    {
        case 0x00:
            ret = ShellFunctionRun(dev,pstr);
            break;

        case 0x01:
            ret = ShellVariableValue(dev,pstr);
            break;

        default:
            ret = RK_ERROR;
            break;
    }
    return ret;


}



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(common) define
*
*---------------------------------------------------------------------------------------------------------------------
*/
/*******************************************************************************
** Name: ShellVariableValue
** Input:HDC dev, uint8 * pstr
** Return: rk_err_t
** Owner:aaron.sun
** Date: 2015.10.20
** Time: 14:03:26
*******************************************************************************/
_SYSTEM_SHELL_SHELLCUSTOMCMD_COMMON_
COMMON FUN rk_err_t ShellVariableValue(HDC dev, uint8 * pstr)
{

}
/*******************************************************************************
** Name: ShellFunctionRun
** Input:HDC dev, uint8 * pstr
** Return: rk_err_t
** Owner:aaron.sun
** Date: 2015.10.20
** Time: 14:02:26
*******************************************************************************/
_SYSTEM_SHELL_SHELLCUSTOMCMD_COMMON_
COMMON FUN rk_err_t ShellFunctionRun(HDC dev, uint8 * pstr)
{

}



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(init) define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(init) define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   API(shell) define
*
*---------------------------------------------------------------------------------------------------------------------
*/



/*
*---------------------------------------------------------------------------------------------------------------------
*
*                                                   local function(shell) define
*
*---------------------------------------------------------------------------------------------------------------------
*/



#endif