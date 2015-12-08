/* Copyright (C) 2010, University of Halle */

/*  This file is part of Sather-K Compiler Halle.
      
    Sather-K Compiler Halle is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
                      
    Sather-K Compiler Halle is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
                                      
    You should have received a copy of the GNU General Public
    License along with Sather-K Compiler Halle.  If not, see
    <http://www.gnu.org/licenses/>. */
    
/* Automatically generated by dapto: DO NOT EDIT */

#ifndef dapto_DAPTO_H
#define dapto_DAPTO_H
#include "dapto.h"
#include "eliproto.h"
extern void _dap_dapto_init ();
#ifdef PROTO_OK
extern void _dapto_init (int);
#else
extern void _dapto_init ();
#endif
#ifdef PROTO_OK
extern void _dapto_finit ();
#else
extern void _dapto_finit ();
#endif
#ifdef PROTO_OK
extern void _dapto_exit ();
#else
extern void _dapto_exit ();
#endif
#ifdef PROTO_OK
extern void _dapto_stopped (const char *, int);
#else
extern void _dapto_stopped ();
#endif
#ifdef PROTO_OK
extern void _dapto_enter (const char *);
#else
extern void _dapto_enter ();
#endif
#ifdef PROTO_OK
extern void _dapto_leave (const char *);
#else
extern void _dapto_leave ();
#endif
#endif
