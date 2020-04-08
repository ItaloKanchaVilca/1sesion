// primeraClase.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream> // entrada y salida de string
using namespace std;


int main()
{
	int a,b; //declaro mis variables
	
	cout << "Ingrese un muero : " << endl;
	cin >> a;
	cout << "Ingrese un numero : " << endl;
	cin >> b;
	
	cout << "El valor de a es: "<<a << endl;
	cout << "El valor de b es: "<<b << endl;

	cout << "la suma de a y b es: " <<a+b<< endl;
	cout << "la resta de a y b es: " << a - b << endl;
	cout << "la multiplicacion de a y b es: " <<a*b<< endl;
	cout << "la division de a y b es: " << a / b << endl;


	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
/*
los comentarios sirven para hacer documentacion de mi codigo
*/
// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln