#ifndef TP1_H_INCLUDED
#define TP1_H_INCLUDED
#include <iostream>
using namespace std;

class Elementos{

    private:

    public:

        // PRE: --------------------------------.
        // POS: --------------------------------.
        Elementos();

        // PRE: --------------------------------.
        // POS: Mostrara por pantalla los atributos del elemento.
        virtual void mostrar();
        virtual int get_posicion_x();
        virtual int get_posicion_y();
        virtual ~Elementos();
};

#endif // TP1_H_INCLUDED