//////////////////////////////////////////////////////////////////////////
//
// pgAdmin III - PostgreSQL Tools
// Copyright (C) 2002, The pgAdmin Development Team
// This software is released under the pgAdmin Public Licence
//
// pgCollection.h - Simple object for use with 'collection' nodes
//
//////////////////////////////////////////////////////////////////////////

#ifndef PGCOLLECTION_H
#define PGCOLLECTION_H

// wxWindows headers
#include <wx/wx.h>

// App headers
#include "pgAdmin3.h"
#include "pgObject.h"
#include "pgServer.h"

// Class declarations
class pgCollection : public pgObject
{
public:
    pgCollection(int newType = PG_NONE, const wxString& newName = wxString(""));
    ~pgCollection();
    pgServer *GetServer() const { return server; }
    void SetServer(pgServer *newServer) { server = newServer; }

private:
    pgServer *server;
};

#endif
