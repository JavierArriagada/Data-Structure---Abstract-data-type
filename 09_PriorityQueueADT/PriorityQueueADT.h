#ifndef Priority_H
#define Priority_H

class PriorityQueueADT{
public:
//Verificar si está vacía
virtual bool empty() = 0;
//Obtener el tamaño
virtual int size() = 0;
//Acceder al primer elemento 
//el min porque es min-heap
virtual int top() = 0;
//Insertar un elemento 
virtual void push(int) = 0;
//Eliminar el primer elemento
//el min papu 
virtual void pop() = 0;
virtual void ver()=0;
};
#endif

