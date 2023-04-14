#ifndef AUTOMOTOR_H_INCLUDED
#define AUTOMOTOR_H_INCLUDED
#include "AutoGasolina.h"
#include "AutoDiesel.h"

class AutoMotor : public AutoGasolina, public AutoDiesel {
    public:
        void llenarTanque() override {
            AutoGasolina::llenarTanque();
            AutoDiesel::llenarTanque();

            // Llenar y evaluar nivel de azufre
            if (nivelAzufre > 10) {
                cout << "El diesel es alto en azufre y de mala calidad." << endl;
            } else if (nivelAzufre >= 1 && nivelAzufre <= 10) {
                cout << "El diesel es bajo en azufre, es decir, de buena calidad." << endl;
            }

            // Llenar y evaluar nivel de octanaje
            if (nivelOctanaje >= 85 && nivelOctanaje <= 87) {
                cout << "La gasolina es regular." << endl;
            } else if (nivelOctanaje >= 91 && nivelOctanaje <= 110) {
                cout << "La gasolina es super." << endl;
            } else if (nivelOctanaje < 85 || nivelOctanaje > 110) {
                cout << "La gasolina usada es de mala calidad." << endl;
            }

            cout << "El tanque de los autos ha sido llenado." << endl;
        }
};

#endif // AUTOMOTOR_H_INCLUDED
