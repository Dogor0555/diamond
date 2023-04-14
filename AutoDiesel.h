#ifndef AUTODIESEL_H_INCLUDED
#define AUTODIESEL_H_INCLUDED
#include "Auto.h"

class AutoDiesel : virtual public Auto {
    public:
        void llenarTanque() override {
            cout << "Llenando tanque del auto diesel..." << endl;
        }
        int nivelAzufre;
};

#endif // AUTODIESEL_H_INCLUDED
