/*
  ====================================================================
  E.E.S.T. N° 1 "Eduardo Ader" -- Vicente López
  Curso: 5° Año 3°
  Profesor: Prof. York
  Estudiantes: Ian Quiroga, Santino Laudati y Dante Iglesias
  Archivo: main.cpp
  Objetivo: Calcular el area de un circulo mediante funciones modulares
            y simular una diana de tiro en ASCII.
  ====================================================================
*/
#include <iostream>
using namespace std;

// ====================================================================
// 1. PROTOTIPO DE LA FUNCIÓN (Firma de la función)
// Le avisamos al compilador la existencia del módulo de cálculo antes del main
// ====================================================================
double calcularAreaCirculo(double radio);

int main() {
    double radioEstudiante;

    // ====================================================================
    // REGLA OBLIGATORIA (EVITA EL PLAGIO):
    // Modifiquen la salida de pantalla agregando su Nombre y Apellido reales.
    // ====================================================================
    cout << "=====================================================" << endl;
    cout << " CALCULADORA DE AREA MODULAR - ESTUDIANTES:          " << endl;
    cout << " Ian Quiroga, Santino Laudati y Dante Iglesias       " << endl;
    cout << "=====================================================" << endl;

    cout << "=> Ingrese el radio del circulo/diana (en cm): ";
    cin >> radioEstudiante;

    // FILTRO DE CONSISTENCIA (Validación del dato geométrico)
    // cin.fail() cubre el caso en que el usuario escribe letras en lugar de un numero
    if (cin.fail() || radioEstudiante <= 0) {
        cout << "[ERROR] El radio debe ser un valor positivo y mayor a cero." << endl;
        return 1; // Salida controlada del sistema indicando error en consola
    }

    // ====================================================================
    // 2. LLAMADA / INVOCACIÓN DE LA FUNCIÓN (COMPLETADO)
    // Se convoca al módulo 'calcularAreaCirculo' pasándole 'radioEstudiante'
    // y el valor devuelto (return) se guarda en la variable decimal 'areaFinal'.
    // ====================================================================
    double areaFinal = calcularAreaCirculo(radioEstudiante);

    // ====================================================================
    // 3. SALIDA DE DATOS (COMPLETADO)
    // Se muestra en pantalla el área calculada utilizando 'areaFinal'.
    // ====================================================================
    cout << "\n[RESULTADO] Radio ingresado: " << radioEstudiante << " cm" << endl;
    cout << "[RESULTADO] El area del circulo es: " << areaFinal << " cm2" << endl;

    // ====================================================================
    // BONUS GAMIFICACIÓN: RENDER DE LA DIANA EN CONSOLA
    // Dependiendo del radio que ingresaron, la consola simulará un blanco
    // de tiro correspondiente al tamaño calculado.
    // ====================================================================
    cout << "\n[SISTEMA] Dibujando escala de la Diana en la RAM..." << endl;

    if (radioEstudiante <= 5.0) {
        cout << "    .---.    " << endl;
        cout << "   /  X  \\   -> [DIANA MINI / COMPACTA]" << endl;
        cout << "   \\  *  /   " << endl;
        cout << "    '---'    " << endl;
    } else if (radioEstudiante <= 12.0) {
        cout << "      .---.      " << endl;
        cout << "    / .---. \\    " << endl;
        cout << "   | /  O  \\ |   -> [DIANA ESTANDAR DE TIRO]" << endl;
        cout << "   | \\  *  / |   " << endl;
        cout << "    \\ '---' /    " << endl;
        cout << "      '---'      " << endl;
    } else {
        cout << "      .---.      " << endl;
        cout << "    / .---. \\    " << endl;
        cout << "   | / .-. \\ |   " << endl;
        cout << "   | | X | |     -> [DIANA GIGANTE DE COBERTURA]" << endl;
        cout << "   | \\ '-' / |   " << endl;
        cout << "    \\ '---' /    " << endl;
        cout << "      '---'      " << endl;
    }

    cout << "=====================================================" << endl;
    return 0; // Finalización exitosa de Windows (Código 0)
}

// ====================================================================
// 4. DEFINICIÓN / DESARROLLO DE LA FUNCIÓN (COMPLETADO)
// Se implementa la fórmula A = PI * r^2 con una variable local
// y la constante PI bloqueada en memoria (const).
// ====================================================================
double calcularAreaCirculo(double r) {
    const double PI = 3.1415926535;
    double area = PI * r * r; // Variable local: solo existe dentro de esta funcion
    return area;              // Se devuelve el resultado al main()
}
