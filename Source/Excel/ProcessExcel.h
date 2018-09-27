/************************************************************************
 *   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
 *                 All Rights Reserved.                                 *
 *   Department :  CT-ITC-OS-Peripheral team                            *
 *   AUTHOR     :  uidp5021                                             *
 ************************************************************************
 * Object		:
 * Module		: Process Excel
 * Instance		:
 * Description	:
 *-----------------------------------------------------------------------
 * Version		: v1.0
 * Date			: 2018/08/27
 * Author		: uidp5021
 ***********************************************************************/
 /*-History--------------------------------------------------------------
 * Version       Date               Name            Changes and comments
 * 1.0           2018/08/27			Lishi           add Init version
*=========================================================================*/
#ifndef __PROCESS_EXCEL_
#define __PROCESS_EXCEL_
#include "config.h"
#include "PinmuxRegister.h"

#define R(a) (a-1)
#define L(b) (b-65)

#define R_STAET_100 R(2)		/* �п�ʼ���� */
#define R_END_100	R(301)		/* �м������� */

#define PIN_OUT 0
#define PIN_IN 1

#define		SET_BIT(x, n)		x=( x | ((1U)<<(n)) )
#define		CLEAR_BIT(x,n)		x=(x &~(1U<<(n)))


typedef struct __ExcelResult
{
	U8 mode;		/* ����ģʽ��ACTIVE,STANDBY,RESET */
	U8 whether;		/* �Ƿ����� */
	U8 gpio_alt;	/* GPIO���ǹ��ܿ� */
	U8 function;	/* �ڼ����� */
	U8 direction;	/* ����������� */
	U8 InputBuffer;
	U8 PullUp;
	U8 PullDown;
	U8 bidMode;
	U8 DriverStrength;
	U8 OutputMode;
	U8 PortValue;
	_GroupNumber GroupNumber;
	U8 PortNumber;
	_PORT_TYPE PORT_TYPE;
	U8 RegType;
	U8 AltType;
	U8 AltNum;
}_ExcelResult;

#define PORT_NUM 7
#define MODE_NUM 3

extern U16 PMC[MODE_NUM][PORT_NUM];		/* port mode */
extern U16 PIPC[MODE_NUM][PORT_NUM];		/* Port IP Control */
extern U16 PM[MODE_NUM][PORT_NUM];			/* output/Iinput */
extern U16 PIBC[MODE_NUM][PORT_NUM];		/* Port InputBuffer Control */


extern U16 PFC[MODE_NUM][PORT_NUM];		/* alternative mode */
extern U16 PFCE[MODE_NUM][PORT_NUM];
extern U16 PFCAE[MODE_NUM][PORT_NUM];

extern U16 PBDC[MODE_NUM][PORT_NUM];		/* Port Bidirection Control */
extern U16 PU[MODE_NUM][PORT_NUM];			/* PullUp Control */
extern U16 PD[MODE_NUM][PORT_NUM];			/* PullDown Control */
extern U16 PDSC[MODE_NUM][PORT_NUM];		/* Port Driver Strength */
extern U16 PODC[MODE_NUM][PORT_NUM];		/* output mode */
extern U16 P[MODE_NUM][PORT_NUM];			/* Port Value */

extern void ProcessExcel(void);
extern U8 SearchAlternativNum(wchar_t* cell, U16 Row, U8* type);

#endif /* PROCESS_EXCEL */