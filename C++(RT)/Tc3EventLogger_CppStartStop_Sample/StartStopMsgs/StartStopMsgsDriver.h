///////////////////////////////////////////////////////////////////////////////
// StartStopMsgsDriver.h

#ifndef __STARTSTOPMSGSDRIVER_H__
#define __STARTSTOPMSGSDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define STARTSTOPMSGSDRV_NAME        "STARTSTOPMSGS"
#define STARTSTOPMSGSDRV_Major       1
#define STARTSTOPMSGSDRV_Minor       0

#define DEVICE_CLASS CStartStopMsgsDriver

#include "ObjDriver.h"

class CStartStopMsgsDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl STARTSTOPMSGSDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(STARTSTOPMSGSDRV)
	VxD_Service( STARTSTOPMSGSDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __STARTSTOPMSGSDRIVER_H__