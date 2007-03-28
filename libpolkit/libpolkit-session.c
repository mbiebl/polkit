/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*- */
/***************************************************************************
 *
 * libpolkit-session.c : sessions
 *
 * Copyright (C) 2007 David Zeuthen, <david@fubar.dk>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307	 USA
 *
 **************************************************************************/

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <pwd.h>
#include <grp.h>
#include <unistd.h>
#include <errno.h>

#include <glib.h>
#include "libpolkit-session.h"

struct PolKitSession_s
{
};

PolKitSession *
libpolkit_session_new (void)
{
        return NULL;
}

PolKitSession *
libpolkit_session_ref (PolKitSession *session)
{
        return NULL;
}

void 
libpolkit_session_set_uid (PolKitSession *session, uid_t uid)
{
}

void 
libpolkit_session_set_ck_objref (PolKitSession *session, const char *ck_objref)
{
}

void 
libpolkit_session_set_ck_is_active (PolKitSession *session, gboolean is_active)
{
}

void 
libpolkit_session_set_ck_is_local (PolKitSession *session, gboolean is_local)
{
}

void 
libpolkit_session_set_ck_remote_host (PolKitSession *session, const char *remote_host)
{
}

void 
libpolkit_session_set_ck_seat (PolKitSession *session, PolKitSeat *seat)
{
}

gboolean
libpolkit_session_get_uid (PolKitSession *session, uid_t *out_uid)
{
        return FALSE;
}

gboolean
libpolkit_session_get_ck_objref (PolKitSession *session, char **out_ck_objref)
{
        return FALSE;
}

gboolean
libpolkit_session_get_ck_is_active (PolKitSession *session, gboolean *out_is_active)
{
        return FALSE;
}

gboolean
libpolkit_session_get_ck_is_local (PolKitSession *session, gboolean *out_is_local)
{
        return FALSE;
}

gboolean
libpolkit_session_get_ck_remote_host (PolKitSession *session, char *out_remote_host)
{
        return FALSE;
}

gboolean
libpolkit_session_get_ck_seat (PolKitSession *session, PolKitSeat **out_seat)
{
        return FALSE;
}


void 
libpolkit_session_unref (PolKitSession *session)
{
}