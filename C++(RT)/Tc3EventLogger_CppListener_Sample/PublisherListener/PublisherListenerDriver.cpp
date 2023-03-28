///////////////////////////////////////////////////////////////////////////////
// PublisherListenerDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "PublisherListenerDriver.h"
#include "PublisherListenerClassFactory.h"

DECLARE_GENERIC_DEVICE(PUBLISHERLISTENERDRV)

IOSTATUS CPublisherListenerDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CPublisherListenerClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CPublisherListenerDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CPublisherListenerDriver::PUBLISHERLISTENERDRV_GetVersion( )
{
	return( (PUBLISHERLISTENERDRV_Major << 8) | PUBLISHERLISTENERDRV_Minor );
}

