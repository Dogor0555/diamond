#ifndef AUTOGASOLINA_H_INCLUDED
#define AUTOGASOLINA_H_INCLUDED
#include "Auto.h"

class AutoGasolina : virtual public Auto {
    public:
        void llenarTanque() override {
            cout << "Llenando tanque del auto gasolina..." << endl;
        }
        int nivelOctanaje;
};

#endif // AUTOGASOLINA_H_INCLUDED
