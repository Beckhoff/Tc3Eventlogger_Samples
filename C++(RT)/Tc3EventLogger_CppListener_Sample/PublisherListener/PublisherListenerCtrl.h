///////////////////////////////////////////////////////////////////////////////
// PublisherListenerCtrl.h

#ifndef __PUBLISHERLISTENERCTRL_H__
#define __PUBLISHERLISTENERCTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define PUBLISHERLISTENERDRV_NAME "PUBLISHERLISTENER"

#include "resource.h"       // main symbols
#include "PublisherListenerW32.h"
#include "TcBase.h"
#include "PublisherListenerClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CPublisherListenerCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CPublisherListenerCtrl, &CLSID_PublisherListenerCtrl>
	, public IPublisherListenerCtrl
	, public ITcOCFCtrlImpl<CPublisherListenerCtrl, CPublisherListenerClassFactory>
{
public:
	CPublisherListenerCtrl();
	virtual ~CPublisherListenerCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_PUBLISHERLISTENERCTRL)
DECLARE_NOT_AGGREGATABLE(CPublisherListenerCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CPublisherListenerCtrl)
	COM_INTERFACE_ENTRY(IPublisherListenerCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __PUBLISHERLISTENERCTRL_H__
