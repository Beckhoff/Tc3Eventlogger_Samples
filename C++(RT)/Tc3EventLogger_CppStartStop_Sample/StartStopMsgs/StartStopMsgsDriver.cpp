///////////////////////////////////////////////////////////////////////////////
// StartStopMsgsDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "StartStopMsgsDriver.h"
#include "StartStopMsgsClassFactory.h"

DECLARE_GENERIC_DEVICE(STARTSTOPMSGSDRV)

IOSTATUS CStartStopMsgsDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CStartStopMsgsClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CStartStopMsgsDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CStartStopMsgsDriver::STARTSTOPMSGSDRV_GetVersion( )
{
	return( (STARTSTOPMSGSDRV_Major << 8) | STARTSTOPMSGSDRV_Minor );
}

