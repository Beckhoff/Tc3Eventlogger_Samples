///////////////////////////////////////////////////////////////////////////////
// PublisherListenerDriver.h

#ifndef __PUBLISHERLISTENERDRIVER_H__
#define __PUBLISHERLISTENERDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define PUBLISHERLISTENERDRV_NAME        "PUBLISHERLISTENER"
#define PUBLISHERLISTENERDRV_Major       1
#define PUBLISHERLISTENERDRV_Minor       0

#define DEVICE_CLASS CPublisherListenerDriver

#include "ObjDriver.h"

class CPublisherListenerDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl PUBLISHERLISTENERDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(PUBLISHERLISTENERDRV)
	VxD_Service( PUBLISHERLISTENERDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __PUBLISHERLISTENERDRIVER_H__