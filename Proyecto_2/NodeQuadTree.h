#include <bits/stdc++.h>

#ifndef NODEQUAD_H
#define NODEQUAD_H

class NodeQuad{
	public:
		/*
		Constructor de la clase NodeQuadTree inicializa Xmin con xmin ,
		Ymin=ymin, Xma con xmax, Yma con ymax,X con -2,Y con -2, PR=NULL, NW=NULL, 
		SW=NULL, SE=NULL, NE=NULL.
		*/
		NodeQuad(float Xmin,float Ymin,float Xmax,float Ymax);
		/*
		Método que devuelve un puntero al padre del nodo.
		*/
		NodeQuad* getPR();
		/*
		Método que devuelve un puntero a la región NW del nodo.
		*/
		NodeQuad* getNW();
		/*
		Método que devuelve un puntero a la región SW del nodo.
		*/
		NodeQuad* getSW();
		/*
		Método que devuelve un puntero a la región SE del nodo.
		*/
		NodeQuad* getSE();
		/*
		Método que devuelve un puntero a la región NE del nodo.
		*/
		NodeQuad* getNE();
		/*
		Método que devuelve el valor X que este guardado en el nodo.
		*/
		int getX();
		/*
		Método que devuelve el valor Y que este guardado en el nodo.
		*/
		int getY();
		/*
		Método que devuelve el valor medio en X entre el espacio del nodo.
		*/
		float getXmed();
		/*
		Método que devuelve el valor medio en Y entre el espacio del nodo.
		*/
		float getYmed();
		/*
		Método que devuelve el valor máximo en X guardado en el nodo.
		*/
		float getXmax();
		/*
		Método que devuelve el valor máximo en Y guardado en el nodo.
		*/
		float getYmax();
		/*
		Método que devuelve el valor mínimo en X guardado en el nodo.
		*/
		float getXmin();
		/*
		Método que devuelve el valor mínimo en Y guardado en el nodo.
		*/
		float getYmin();
		/*
		Método que permite cambiar el valor guardado en X del nodo por uno nuevo.
		*/
		void setX(int x);
		/*
		Método que permite cambiar el valor guardado en Y del nodo por uno nuevo.
		*/
		void setY(int y);
		/*
		Método que permite modificar hacia donde apunta el puntero PR perteneciente al nodo.
		*/
		void setPR(NodeQuad *n);
		/*
		Método que permite modificar hacia donde apunta el puntero NW perteneciente al nodo.
		*/
		void setNW(NodeQuad *n);
		/*
		Método que permite modificar hacia donde apunta el puntero SW perteneciente al nodo.
		*/
		void setSW(NodeQuad *n);
		/*
		Método que permite modificar hacia donde apunta el puntero SE perteneciente al nodo.
		*/
		void setSE(NodeQuad *n);
		/*
		Método que permite modificar hacia donde apunta el puntero NE perteneciente al nodo.
		*/
		void setNE(NodeQuad *n);
	private:
		int X,Y;
		float Xmin,Ymin,Xmax,Ymax;
		NodeQuad *PR;
		NodeQuad *NW;
		NodeQuad *SW;
		NodeQuad *SE;
		NodeQuad *NE;
};
#endif