/************************************************************************
 *   Copyright (C) Huizhou Desay SV Automotive Co., Ltd.                *
 *                 All Rights Reserved.                                 *
 *   Department :  CT-ITC-OS-Peripheral team                            *
 *   AUTHOR     :  uidp5021                                             *
 ************************************************************************
 * Object		:
 * Module		: main����
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
#include <stdio.h>
#include <conio.h>
#include "libxl.h"
#include <windows.h>
#include "ProcessExcel.h"
#include "log.h"
#include "GenPinmux100pin.h"

/* Ϊ�������ɵ�EXE����ʱ����ʾ�ڿ� */
#pragma comment( linker, "/subsystem:windows /entry:mainCRTStartup" )

wchar_t* ccc = L"wodvfbfb";
int main()
{
	logFile = fopen("Excel.log", "w"); /* ��ֻд�ļ������ļ������򳤶���Ϊ 0�������ļ�������ʧ�����������򴴽����ļ� */

	ProcessExcel();
	GenPinmux_100pin();

	fclose(logFile);/* �ر��ļ� */

	//printf("\nPress any key to exit...");
	//_getch();

	return 0;
}

