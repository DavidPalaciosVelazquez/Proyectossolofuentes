// Vectres.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

# incluye  " pch.h "
# incluye  < iostream >
# incluye  < vector >
# incluye  < cadena >

utilizando  namespace  std;

typedef  struct  alumno {
	cadena codigo;
	cadena nombre;
	int edad;
} talumno;



int  main()
{

	para(int n = 0; n < 5; n++) {
		talumno * apt;

		vector <talumno> listado;

		apt = nuevo talumno;

		cout << endl << " Capturar datos de Alumno " << endl;

		cout << " Caputurar el codigo: ";

		cin >> apt->codigo;

		cout << " Capturar el Nombre: ";

		cin >> apt->nombre;

		cout << " Capturar Edad: ";

		cin >> apt->edad;

		listado push_back(*apt);


		cout << endl;
		para(talumno x : listado) {
			cout << " codigo: " << x.codigo << "     Nombre: " << x.nombre << "    Edad: " << x.edad << endl;
		}
	}
	sistema(" pausa ");
	devuelve  0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
