#include "NodeQuadTree.h"
#ifndef TREE_H
#define TREE_H

class PRQuadTreeADT{
public:
	virtual int insertar(int,int)=0;//,NodeQuad *n
	virtual bool borrar(int, int)=0;
	virtual bool buscar(int,int)=0;
	virtual int size()=0;
};
#endif