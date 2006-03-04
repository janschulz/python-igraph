/* -*- mode: C -*-  */
/* 
   IGraph library.
   Copyright (C) 2006  Gabor Csardi <csardi@rmki.kfki.hu>
   MTA RMKI, Konkoly-Thege Miklos st. 29-33, Budapest 1121, Hungary
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc.,  51 Franklin Street, Fifth Floor, Boston, MA 
   02110-1301 USA

*/

#ifndef PYTHON_EDGEOBJECT_H
#define PYTHON_EDGEOBJECT_H

#include <Python.h>
#include "graphobject.h"

/**
 * \ingroup python_interface_edge
 * \brief A structure representing an edge of a graph
 */
typedef struct
{
  PyObject_HEAD
  PyObject* gref;
  long idx;
} igraphmodule_EdgeObject;

int igraphmodule_Edge_traverse(igraphmodule_EdgeObject *self,
			       visitproc visit, void *arg);
int igraphmodule_Edge_clear(igraphmodule_EdgeObject *self);
void igraphmodule_Edge_dealloc(igraphmodule_EdgeObject* self);

PyObject* igraphmodule_Edge_New(PyObject *gref, long idx);
PyObject* igraphmodule_Edge_str(igraphmodule_EdgeObject *self);
//int igraphmodule_Edge_attribute_count(igraphmodule_EdgeObject* self);
PyObject* igraphmodule_Edge_attributes(igraphmodule_EdgeObject* self);
/*PyObject* igraphmodule_Edge_get_attribute(igraphmodule_EdgeObject* self,
					   PyObject* s);
int igraphmodule_Edge_set_attribute(igraphmodule_EdgeObject* self, PyObject* k, PyObject* v);*/

PyTypeObject igraphmodule_EdgeType;

#endif