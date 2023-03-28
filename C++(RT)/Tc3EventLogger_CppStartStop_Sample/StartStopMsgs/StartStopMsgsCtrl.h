///////////////////////////////////////////////////////////////////////////////
// StartStopMsgsCtrl.h

#ifndef __STARTSTOPMSGSCTRL_H__
#define __STARTSTOPMSGSCTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define STARTSTOPMSGSDRV_NAME "STARTSTOPMSGS"

#include "resource.h"       // main symbols
#include "StartStopMsgsW32.h"
#include "TcBase.h"
#include "StartStopMsgsClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CStartStopMsgsCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CStartStopMsgsCtrl, &CLSID_StartStopMsgsCtrl>
	, public IStartStopMsgsCtrl
	, public ITcOCFCtrlImpl<CStartStopMsgsCtrl, CStartStopMsgsClassFactory>
{
public:
	CStartStopMsgsCtrl();
	virtual ~CStartStopMsgsCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_STARTSTOPMSGSCTRL)
DECLARE_NOT_AGGREGATABLE(CStartStopMsgsCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CStartStopMsgsCtrl)
	COM_INTERFACE_ENTRY(IStartStopMsgsCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __STARTSTOPMSGSCTRL_H__
