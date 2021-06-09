#include "PRQuadTreeADT.h"
#include "PRQuadTree.h"
#include <bits/stdc++.h>
using namespace std;

PRQuadTree::PRQuadTree(int x, int y){
	//va de la la fila 0 a la final y-1
	// y de la columna 0 a la columna x-1
	NodeQuad *PR_quadTree=new NodeQuad(0,0,x-1,y-1);
	raiz=PR_quadTree;
	tam=0;
}
PRQuadTree::~PRQuadTree(){
	//eliminar en postorder, funciona para arboles m-nazis
}
//poner la cosa por caudranttes, quizas sea mejor
//1/SW//2/SE//3/NW//4/NE
int PRQuadTree::ver_cuadrante(int x,int y,NodeQuad *n){
	if(x<n->getXmed() and y<n->getYmed())return 1;//SW
	else if(x>n->getXmed() and y<n->getYmed())return 2;//SE
	else if(x<n->getXmed() and y>n->getYmed())return 3;//NW
	else if(x>n->getXmed() and y>n->getYmed())return 4;//NE
	//else return 5;//quiere decir que estaba en las lineas//ahora no existen tal cosas
}
int PRQuadTree::ver_hojas(NodeQuad *n){
	if(n->getSW()->getX() ==-1 || n->getSE()->getX() ==-1 || n->getNW()->getX() ==-1 || n->getNE()->getX() ==-1){
		return 5;}
	else if(n->getSW()->getX() ==-2 && n->getSE()->getX() ==-2 && n->getNW()->getX() ==-2 && n->getNE()->getX() ==-2){
		return 6;}
	else if(n->getSW()->getX() >=0 && n->getSE()->getX() ==-2 && n->getNW()->getX() ==-2 && n->getNE()->getX() ==-2){
		return 1;}
	else if(n->getSW()->getX() ==-2 && n->getSE()->getX() >=0 && n->getNW()->getX() ==-2 && n->getNE()->getX() ==-2){
		return 2;}
	else if(n->getSW()->getX() ==-2 && n->getSE()->getX() ==-2 && n->getNW()->getX() >=0 && n->getNE()->getX() ==-2){
		return 3;}
	else if(n->getSW()->getX() ==-2 && n->getSE()->getX() ==-2 && n->getNW()->getX() ==-2 && n->getNE()->getX() >=0){
		return 4;}
}
int PRQuadTree::reacomodar(NodeQuad *n){
	if(ver_hojas(n->getPR())==6){
		n->getPR()->setX(-2);
		n->getPR()->setY(-2);
		free(n->getPR()->getSE());
		free(n->getPR()->getSW());
		free(n->getPR()->getNW());
		free(n->getPR()->getNE());
	}
	else if(ver_hojas(n->getPR())==1){
		int ax = n->getPR()->getSW()->getX();
		int ay = n->getPR()->getSW()->getY();
		n->getPR()->setX(ax);
		n->getPR()->setY(ay);
		free(n->getPR()->getSE());
		free(n->getPR()->getSW());
		free(n->getPR()->getNW());
		free(n->getPR()->getNE());
	}
	else if(ver_hojas(n->getPR())==2){
		int ax = n->getPR()->getSE()->getX();
		int ay = n->getPR()->getSE()->getY();
		n->getPR()->setX(ax);
		n->getPR()->setY(ay);
		free(n->getPR()->getSE());
		free(n->getPR()->getSW());
		free(n->getPR()->getNW());
		free(n->getPR()->getNE());
	}
	else if(ver_hojas(n->getPR())==3){
		int ax = n->getPR()->getNW()->getX();
		int ay = n->getPR()->getNW()->getY();
		n->getPR()->setX(ax);
		n->getPR()->setY(ay);
		free(n->getPR()->getSE());
		free(n->getPR()->getSW());
		free(n->getPR()->getNW());
		free(n->getPR()->getNE());
	}
	else if(ver_hojas(n->getPR())==4){
		int ax = n->getPR()->getNE()->getX();
		int ay = n->getPR()->getNE()->getY();
		n->getPR()->setX(ax);
		n->getPR()->setY(ay);
		free(n->getPR()->getSE());
		free(n->getPR()->getSW());
		free(n->getPR()->getNW());
		free(n->getPR()->getNE());
	}
}
int PRQuadTree::insertar(int x, int y){
	NodeQuad *rec;
	rec=raiz;
	int paltamon=1;
	try{	//cout<<size()<<endl;
		if(x<0 || y<0){throw 10;}
		else if(x>raiz->getXmax() || y>raiz->getYmax()){throw 11;}
		//else if(buscar(x,y)==1){throw 12;}
		else if(ver_cuadrante(x,y,rec)==5){throw 13;}
		else if(rec->getXmax()-rec->getXmin() != rec->getYmax()-rec->getYmin()){throw 14;}
		else if(rec->getXmax()-rec->getXmin()<=0){throw 15;}
		
		while(paltamon!=0){
			 if(rec->getX()>=0 && rec->getY()>=0){
			 	if(rec->getX()==x and rec->getY()==y){throw 12;}
				//para cuando sea un rectangulo
				//else{
					//en caso que se divida obtener los valores
					int ax=rec->getX(),ay=rec->getY();
					//transforma a ramilla
					rec->setX(-1);
					rec->setY(-1);
					//los puntos medios da X.5 e Y.5, para definir la region se resta/suma 0.5, ya que se trata de colummnas y filas
					// que son enteras no decimales d
					NodeQuad *sw = new NodeQuad(rec->getXmin(),rec->getYmin(),rec->getXmed()-0.5,rec->getYmed()-0.5); 
					NodeQuad *se = new NodeQuad(rec->getXmed()+0.5,rec->getYmin(),rec->getXmax(),rec->getYmed()-0.5);
					NodeQuad *nw = new NodeQuad(rec->getXmin(),rec->getYmed()+0.5,rec->getXmed()-0.5,rec->getYmax());
					NodeQuad *ne = new NodeQuad(rec->getXmed()+0.5,rec->getYmed()+0.5,rec->getXmax(),rec->getYmax());
					sw->setPR(rec);
					se->setPR(rec);
					nw->setPR(rec);
					ne->setPR(rec);
					rec->setSW(sw);
					rec->setSE(se);
					rec->setNW(nw);
					rec->setNE(ne);
					//en el caso que se diviera, colcomos el punto anterior y el de ahora
					switch(ver_cuadrante(ax,ay,rec)){
						case 1:{rec->getSW()->setX(ax);
								rec->getSW()->setY(ay);
								break;}
						case 2:{rec->getSE()->setX(ax);
								rec->getSE()->setY(ay);
								break;}
						case 3:{rec->getNW()->setX(ax);
								rec->getNW()->setY(ay);
								break;}
						case 4:{rec->getNE()->setX(ax);
								rec->getNE()->setY(ay);
								break;}
					}
					/*switch(ver_cuadrante(x,y,rec)){
						case 1:{rec->getSW()->setX(x);
								rec->getSW()->setY(y);
								break;}
						case 2:{rec->getSE()->setX(x);
								rec->getSE()->setY(y);
								break;}
						case 3:{rec->getNW()->setX(x);
								rec->getNW()->setY(y);
								break;}
						case 4:{rec->getNE()->setX(x);
								rec->getNE()->setY(y);
								break;}
					}*/
					//tam++;
					insertar(x,y);
					//insertar(ax,ay);
					return 0;
					paltamon=0;
				//}
			}
			else if(rec->getX()==-2 and rec->getY()==-2){
				rec->setX(x);
				rec->setY(y);
				tam++;
				paltamon=0;
				return 0;
			}
			else if(rec->getX()==-1 and rec->getY()==-1){
				//cout<<"busco estaba ocupado"<<endl;
				switch(ver_cuadrante(x,y,rec)){
					case 1:{rec=rec->getSW();	
					break;}
					case 2:{rec=rec->getSE();	
					break;}
					case 3:{rec=rec->getNW();
					break;}
					case 4:{rec=rec->getNE();	
					break;}
				}
			}
		}	
	}
	catch(int e){
		if(e==10) cout<<"Las coordenadas no existe "<<x<<"::"<<y<<endl;
		if(e==11) cout<<"El punto exede el maximo de filas o colummnas(Los puntos maximos permitidos son N-1 y M-1)"<<endl;
		if(e==12) cout<<"El punto ya existe "<<x<<"::"<<y<<endl;
		if(e==13) cout<<"Algo esta muy mal"<<endl;
		if(e==14) cout<<"Region a dividir un rectangulo, no permitido el punto "<<x<<"::"<<y<<endl;
		if(e==15) cout<<"La region es 1x1 imposible seguir diviendo, pruebe otro punto "<<endl;
	}	
}
bool PRQuadTree::borrar(int x, int y){
	try{
		NodeQuad *rec;
		rec=raiz;	
		while(1){
			switch(ver_cuadrante(x,y,rec)){
				case 1:{
					if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getSW();break;}
					else if(rec->getX()==x and rec->getY()==y){
						rec->setX(-2);
						rec->setY(-2);
						tam--;
						reacomodar(rec);
						return true;
						break;
					}
					else {throw false;break;}
				}	
				case 2:{
					if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getSE();break;}
					else if(rec->getX()==x and rec->getY()==y){
						rec->setX(-2);
						rec->setY(-2);
						tam--;
						reacomodar(rec);
						return true;
						break;
					}
					else {throw false;break;}
				}
				case 3:{
					if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getNW();break;}
					else if(rec->getX()==x and rec->getY()==y){
						rec->setX(-2);
						rec->setY(-2);
							tam--;
						reacomodar(rec);
						return true;
						break;
					}
					else {throw false;break;}
				}	
				case 4:{
		 			if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getNE();break;}	
					else if(rec->getX()==x and rec->getY()==y){
						rec->setX(-2);
						rec->setY(-2);
						tam--;
						reacomodar(rec);	
						return true;
						break;
					}
					else {throw false;break;}
				}		
			}	
		}
	}
	catch(bool e){
		cout<<"No existe el punto a eliminar"<<endl;
	}	
}
bool PRQuadTree::buscar(int x, int y){
	NodeQuad *rec;		
	rec=raiz;
	int bandera=0;
	while(1){
		cout<<"Buscando..."<<endl;
		switch(ver_cuadrante(x,y,rec)){
			case 1:{
				if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getSW();break;}
				else if(rec->getX()==x and rec->getY()==y){bandera=1; return true;break;}
				else {bandera=1; return false;break;}
			}
			case 2:{
				if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getSE();break;}
				else if(rec->getX()==x and rec->getY()==y){bandera=1; return true;break;}
				else {bandera=1; return false;break;}
			}
			case 3:{
				if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getNW();break;}
				else if(rec->getX()==x and rec->getY()==y){bandera=1; return true;break;}
				else {bandera=1; return false;break;}
			}
			case 4:{
				if(rec->getX()==-1 and rec->getY()==-1){rec=rec->getNE();break;}
				else if(rec->getX()==x and rec->getY()==y){bandera=1; return true;break;}
				else {bandera=1; return false;break;}
			}			
		}
	}
}
int PRQuadTree::size(){
	return tam;
}
					/*
					rec->setSW(new NodeQuad(rec->getXmin(),rec->getYmin(),rec->getXmed()-0.5,rec->getYmed()-0.5));
					rec->setSE(new NodeQuad(rec->getXmed()+0.5,rec->getYmin(),rec->getXmax(),rec->getYmed()-0.5));
					rec->setNW(new NodeQuad(rec->getXmin(),rec->getYmed()+0.5,rec->getXmed()-0.5,rec->getYmax()));
					rec->setNE(new NodeQuad(rec->getXmed()+0.5,rec->getYmed()+0.5,rec->getXmax(),rec->getYmax()));*/
					//decir que el padre de cada region es el muchachon mayor

/*
	if(x<n->getXmed() && y<=n->Ymedio())return 1;//SW
	else if(x>=n->Xmedio() && y<=n->Ymedio())return 2;//SE
	else if(x<=n->Xmedio() && y>=n->Ymedio())return 3;//NW
	else if(x>n->Xmedio() && y>n->Ymedio())return 4;//NE


*/
/*
switch(ver_cuadrante(x,y,rec)){
				//si es un punto malulo quitamos la division
				case 1:{
				if(x>=rec->getSW()->getXmax()|| y>=rec->getSW()->getYmax()){
					rec->setX(ax);
					rec->setY(ay);
					rec->setSW(NULL);
					rec->setSE(NULL);
					rec->setNW(NULL);
					rec->setNE(NULL);
				return false;
				}
				break;
				}
				case 2:{
				if(x>rec->getSE()->getXmax()||y>rec->getSE()->getYmax()){
					rec->setX(ax);
					rec->setY(ay);
					rec->setSW(NULL);
					rec->setSE(NULL);
					rec->setNW(NULL);
					rec->setNE(NULL);
				return false;
				}
				break;
				}
				case 3:{
				if(x>rec->getNW()->getXmax()||y>rec->getNW()->getYmax()){
					rec->setX(ax);
					rec->setY(ay);
					rec->setSW(NULL);
					rec->setSE(NULL);
					rec->setNW(NULL);
					rec->setNE(NULL);
				return false;
				}
				break;
				}
				case 4:{
				if(x>rec->getNE()->getXmax()||y>rec->getNE()->getYmax()){
					rec->setX(ax);
					rec->setY(ay);
					rec->setSW(NULL);
					rec->setSE(NULL);
					rec->setNW(NULL);
					rec->setNE(NULL);
				return false;
				}
				break;
				}	
			}

*/


/*
switch(ver_cuadrante(ax,ay,rec)){
				case 1:{
				tam--;
				insertar(ax,ay);
				break;
				}
				case 2:{
				tam--;
				insertar(ax,ay);
				break;
				}
				case 3:{
				tam--;
				insertar(ax,ay);
				break;
				}
				case 4:{
				tam--;
				insertar(ax,ay);
				break;
				}	
			}
			//y finalmente ubicamos el nuevo punto
			switch(ver_cuadrante(x,y,rec)){
				case 1:{
				insertar(x,y);
				break;
				}
				case 2:{
				insertar(x,y);
				break;
				}
				case 3:{
				insertar(x,y);
				break;
				}
				case 4:{
				insertar(x,y);
				break;
				}	
			}
		}

*/

