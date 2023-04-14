#include <iostream>
using namespace std;
#include "AutoMotor.h"

// Funciones para solicitar y establecer datos
void solicitarModelos(AutoMotor &miAuto);
void solicitarNiveles(AutoMotor &miAuto);

int main() {
    AutoMotor miAuto;

    cout << "----------------------------------------" << endl;
    cout << "Bienvenido al sistema de autos y motores" << endl;
    cout << "----------------------------------------" << endl << endl;

    solicitarModelos(miAuto);
    solicitarNiveles(miAuto);

    cout << endl << "Procediendo a llenar tanques..." << endl << endl;
    miAuto.llenarTanque();

    cout << endl << "Gracias por usar el sistema. ¡Hasta luego!" << endl;

    return 0;
}

void solicitarModelos(AutoMotor &miAuto) {
    string modeloGasolina, modeloDiesel;

    cout << "Por favor, ingrese la información de los modelos de autos:" << endl;

    cout << "1. AutoGasolina" << endl;
    cout << "Modelo: ";
    getline(cin, modeloGasolina);
    miAuto.AutoGasolina::modelo = modeloGasolina;

    cout << "2. AutoDiesel" << endl;
    cout << "Modelo: ";
    getline(cin, modeloDiesel);
    miAuto.AutoDiesel::modelo = modeloDiesel;

    cout << endl << "Modelos ingresados:" << endl;
    cout << "AutoGasolina: " << miAuto.AutoGasolina::modelo << endl;
    cout << "AutoDiesel: " << miAuto.AutoDiesel::modelo << endl << endl;
}

void solicitarNiveles(AutoMotor &miAuto) {
    int nivelAzufre, nivelOctanaje;

    cout << "Por favor, ingrese la información sobre la calidad del combustible:" << endl;

    cout << "1. AutoDiesel - Nivel de azufre (ppm)" << endl;
    cout << "Nivel de azufre: ";
    cin >> nivelAzufre;
    miAuto.nivelAzufre = nivelAzufre;

    cout << "2. AutoGasolina - Nivel de octanaje" << endl;
    cout << "Nivel de octanaje: ";
    cin >> nivelOctanaje;
    miAuto.nivelOctanaje = nivelOctanaje;
}
