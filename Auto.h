#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include <iostream>
using namespace std;

class Auto {
    public:
        virtual void llenarTanque() {
            cout << "Llenando tanque del auto..." << endl;
        }
        string modelo;
};

#endif // AUTO_H_INCLUDED


