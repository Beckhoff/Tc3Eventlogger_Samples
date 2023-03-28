// PublisherListenerCtrl.cpp : Implementation of CTcPublisherListenerCtrl
#include "TcPch.h"
#pragma hdrstop

#include "PublisherListenerW32.h"
#include "PublisherListenerCtrl.h"

/////////////////////////////////////////////////////////////////////////////
// CPublisherListenerCtrl

CPublisherListenerCtrl::CPublisherListenerCtrl() 
	: ITcOCFCtrlImpl<CPublisherListenerCtrl, CPublisherListenerClassFactory>() 
{
}

CPublisherListenerCtrl::~CPublisherListenerCtrl()
{
}

