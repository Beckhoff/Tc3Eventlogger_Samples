///////////////////////////////////////////////////////////////////////////////
// PublisherListenerClassFactory.cpp
#include "TcPch.h"
#pragma hdrstop

#include "PublisherListenerClassFactory.h"
#include "PublisherListenerServices.h"
#include "PublisherListenerVersion.h"
#include "PublisherModule.h"
#include "ListenerModule.h"

BEGIN_CLASS_MAP(CPublisherListenerClassFactory)
///<AutoGeneratedContent id="ClassMap">
	CLASS_ENTRY_LIB(VID_PublisherListener, CID_PublisherListenerCPublisherModule, SRVNAME_PUBLISHERLISTENER "!CPublisherModule", CPublisherModule)
	CLASS_ENTRY_LIB(VID_PublisherListener, CID_PublisherListenerCListenerModule, SRVNAME_PUBLISHERLISTENER "!CListenerModule", CListenerModule)
///</AutoGeneratedContent>
END_CLASS_MAP()

CPublisherListenerClassFactory::CPublisherListenerClassFactory() : CObjClassFactory()
{
	TcDbgUnitSetImageName(TCDBG_UNIT_IMAGE_NAME_TMX(SRVNAME_PUBLISHERLISTENER)); 
#if defined(TCDBG_UNIT_VERSION)
	TcDbgUnitSetVersion(TCDBG_UNIT_VERSION(PublisherListener));
#endif //defined(TCDBG_UNIT_VERSION)
}

