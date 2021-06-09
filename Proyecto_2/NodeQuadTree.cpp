#include <bits/stdc++.h>
#include "NodeQuadTree.h"

NodeQuad::NodeQuad(float xmin,float ymin,float xmax,float ymax){
		Xmin=xmin;
		Ymin=ymin;
		Xmax=xmax;
		Ymax=ymax;
		X=-2;
		Y=-2;
		PR=NULL;
		NW=NULL;
		SW=NULL;
		SE=NULL;
		NE=NULL;
}
NodeQuad *NodeQuad::getPR(){return PR;}
NodeQuad *NodeQuad::getNW(){return NW;}
NodeQuad *NodeQuad::getSW(){return SW;}
NodeQuad *NodeQuad::getSE(){return SE;}
NodeQuad *NodeQuad::getNE(){return NE;}

void NodeQuad::setPR(NodeQuad *n){PR=n;}
void NodeQuad::setNW(NodeQuad *n){NW=n;}
void NodeQuad::setSW(NodeQuad *n){SW=n;}
void NodeQuad::setSE(NodeQuad *n){SE=n;}
void NodeQuad::setNE(NodeQuad *n){NE=n;}
void NodeQuad::setX(int x){X=x;}
void NodeQuad::setY(int y){Y=y;}

int NodeQuad::getX(){return X;}
int NodeQuad::getY(){return Y;}
float NodeQuad::getXmax(){return Xmax;}
float NodeQuad::getYmax(){return Ymax;}
float NodeQuad::getXmin(){return Xmin;}
float NodeQuad::getYmin(){return Ymin;}


float NodeQuad::getXmed(){
	float X1;
	X1=(Xmin+Xmax)/2;
	return X1;
}
float NodeQuad::getYmed(){
	float Y1;
	Y1=(Ymin+Ymax)/2;
	return Y1;
}
/*NodeQuad::NodeQuad(int xmin,int ymin,int xmax,int ymax,int dividir){
		Xmin=xmin;
		Ymin=ymin;
		Xmax=xmax;
		Ymax=ymax;
		X=-1;
		Y=-1;
		NW=new NodeQuad(xmin,ymax/2,xmax/2,ymax);
		SW=new NodeQuad(xmin,ymin,xmax/2,ymax/2);
		SE=new NodeQuad(xmax/2,ymin,xmax,ymax/2);
		NE=new NodeQuad(xmax/2,ymax/2,xmax,ymax);
}*/
