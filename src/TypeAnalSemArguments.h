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
    
#include "err.h"
#include "pdl_gen.h"
#include "TDG.h"
#include "Kinds.head"
#include "deftbl.h"
#include "SatherType.h"
#include "envmod.h"
#include "MyDebug.h"
#include "Coercions.h"

void GetParameterlessArgumentCall(DefTableKey caller, DefTableKey* called, 
DefTableKey k, int arg_num, Environment scope, CoordPtr pos);
