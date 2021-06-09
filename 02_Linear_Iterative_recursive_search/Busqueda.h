/*
En el .h se declara y en el .cpp se implementam
 
Para compilar:

g++ -c *.cpp   //crea los objetos .o

g++ -o ejecutable *.o //linka todos los .o en un ejecutable

*/
//#include <vector>

using namespace std;

class Busqueda{
	private: 
		vector <int> myvector;
	public:
		Busqueda(int n);//constructor

		int	lineal(int n);
/*En el peor caso el elemento se encuentra en la ultima posicion o no se 
encuentra. Esto da la siguiente recurrencia: (T(j) corresponde a cuando el elemento esta en la posicion j)
T(1) = 1
T(2) = T(1) + 1
.
.
T(n-1) = T(n-2) + 1
T(n) = T(n-1) + 1
luego
T(n) = T(n-1) + 1 = T(n-2) + 2 = . . . = T(1) + (n-1) = n
luego la busqueda lineal es O(n) en tiempo y O(1) en espacio

*/
		
		void binariaRecursiva(int N,int l, int r);
/*El tiempo del programa sin contar las llamadas recursivas es constante. Si
planteamos una recurrencia para calcular el tiempo es:
T(n) = T(n/2) + 1
T(n/2) = T(n/4) + 1
.
.
.
T(2) = T(1) + 1
T(1) = 1
T(0) = 1
Luego la complejidad es O(logn) en tiempo y O(1) en espacio */
		
		int binariaIterativa(int n);
/*inicialmente el numero de elementos a anlizar es n.
Luego de dividir el vector por la mitad, el numero sera como mucho n/2,
luego n/4 y asi sucesivamente. 

Por lo que la complejidad es O(log n) en tiempo y O(logn) en espacio por las llamadas al stack.*/

		int printv();

};