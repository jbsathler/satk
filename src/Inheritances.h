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
    
#include "deftbl.h"
#include "pdl_gen.h"
#include "InheritanceInfoList.h"
#include "DefTableKeyList.h"
#include "Kinds.head"
#include "TreeNodeImpl.h"
#include "GetReferencedClasses.h"
#include "err.h"

// Inheritance Status
#define NOTSTARTED    0
#define STARTED      1
#define FINISHED    2

InheritanceInfo NewInheritanceInfo(DefTableKey k, DefTableKeyList modinfo, int ispriv,
int isonly, int issubtype);
DefTableKey ListConflicts(DefTableKey k, DefTableKeyList li, DefTableKey class_context);
DefTableKey InheritSingleFeature(DefTableKey fromkey, int tosym, DefTableKey tokey, int
isPrivate, TreeNodePtr tree, CoordPtr pos);
int InheritFeatures(DefTableKey k, CoordPtr pos);
DefTableKey SelectFeature(Environment env, DefTableKey meth_spec);
