/////////////////////////////////////////////////////////////////////////////
// BlockWalkPlugIn.cpp

#include "StdAfx.h"
#include "BlockWalkPlugIn.h"

#pragma warning( push )
#pragma warning( disable : 4073 )
#pragma init_seg( lib )
#pragma warning( pop )

// Rhino plug-in declaration
RHINO_PLUG_IN_DECLARE

// Rhino plug-in name
RHINO_PLUG_IN_NAME( L"BlockWalk" );

// Rhino plug-in id
RHINO_PLUG_IN_ID( L"64F125AC-9F8F-47EC-844D-A3A0DC39F047" );

// Rhino plug-in version
RHINO_PLUG_IN_VERSION( __DATE__"  "__TIME__ )

// Rhino plug-in developer declarations
RHINO_PLUG_IN_DEVELOPER_ORGANIZATION( L"Robert McNeel & Associates" );
RHINO_PLUG_IN_DEVELOPER_ADDRESS( L"3670 Woodland Park Avenue North\015\012Seattle WA 98103" );
RHINO_PLUG_IN_DEVELOPER_COUNTRY( L"United States" );
RHINO_PLUG_IN_DEVELOPER_PHONE( L"206-545-6877" );
RHINO_PLUG_IN_DEVELOPER_FAX( L"206-545-7321" );
RHINO_PLUG_IN_DEVELOPER_EMAIL( L"tech@mcneel.com" );
RHINO_PLUG_IN_DEVELOPER_WEBSITE( L"http://www.rhino3d.com" );
RHINO_PLUG_IN_UPDATE_URL( L"http://www.rhino3d.com" );

// The one and only CBlockWalkPlugIn object
static CBlockWalkPlugIn thePlugIn;

/////////////////////////////////////////////////////////////////////////////
// CBlockWalkPlugIn definition

CBlockWalkPlugIn& BlockWalkPlugIn()
{ 
  // Return a reference to the one and only CBlockWalkPlugIn object
  return thePlugIn; 
}

CBlockWalkPlugIn::CBlockWalkPlugIn()
{
  // TODO: Add construction code here
  m_plugin_version = RhinoPlugInVersion();
}

CBlockWalkPlugIn::~CBlockWalkPlugIn()
{
  // TODO: Add destruction code here
}

/////////////////////////////////////////////////////////////////////////////
// Required overrides

const wchar_t* CBlockWalkPlugIn::PlugInName() const
{
  // TODO: Return a short, friendly name for the plug-in.
  return RhinoPlugInName();
}

const wchar_t* CBlockWalkPlugIn::PlugInVersion() const
{
  // TODO: Return the version number of the plug-in.
  return m_plugin_version;
}

GUID CBlockWalkPlugIn::PlugInID() const
{
  // TODO: Return a unique identifier for the plug-in.
  // {64F125AC-9F8F-47EC-844D-A3A0DC39F047}
  return ON_UuidFromString( RhinoPlugInId() );
}

BOOL CBlockWalkPlugIn::OnLoadPlugIn()
{
  // TODO: Add plug-in initialization code here.
  return CRhinoUtilityPlugIn::OnLoadPlugIn();
}

void CBlockWalkPlugIn::OnUnloadPlugIn()
{
  // TODO: Add plug-in cleanup code here.

  CRhinoUtilityPlugIn::OnUnloadPlugIn();
}

