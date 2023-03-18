#include <iostream>
#include <cstdlib> 
#include <cmath>
#include <algorithm>
using namespace std;

//Funcion Imprimir arreglo For
void imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout <<endl;
}
//Funcion Imprimir arreglo While
void imprimirArregloWhile(int arreglo[], int tamano) {
    int i = 0;
    while(i < tamano) {
        cout << arreglo[i] << " ";
        i++;
    }
    cout << endl;
}
//funcion obtener posicion media
int obtenerPosicionMedia(int arreglo[], int tamano) {
    int posicion_media = tamano / 2;
    return arreglo[posicion_media];
}
//funcion calcular numeroPar
int obtenerNumeroPar(int arreglo[], int tamano){
	for(int i= 0; i < tamano; i++){
		if (arreglo[i] % 2 == 0){
			cout<<arreglo[i]<< " ";
		}
	}
	cout<<endl;
}
//Funcion para calcular los numeros primos
bool esPrimo(int num) {
    if(num < 2) {
        return false;
    }
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}
//Funcion para mostrar los numero primos
void imprimirPrimos(int arreglo[], int tamano) {
    cout << "Los numeros primos en el arreglo son: ";
    for(int i = 0; i < tamano; i++) {
        if(esPrimo(arreglo[i])) {
            cout << arreglo[i] << " ";
        }
    }
    cout << endl;
}
//Funcion numero MAYOR
int numeroMayor(int arreglo[], int tamano) {
    int mayor = arreglo[0];
    for(int i = 1; i < tamano; i++) {
        if(arreglo[i] > mayor) {
            mayor = arreglo[i];
        }   
    }
    return mayor;
}
//Funcion ordenar arreglo menor a mayor sort
void ordenarArreglo(int arreglo[], int tamano) {
    sort(arreglo, arreglo + tamano);
    cout << "El arreglo ordenado es:\n";
    for(int i = 0; i < tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
	int tamano;
	char opcion;
   
    cout << "Indique  el tamano del arreglo: "; //se pide al usuario que ingrese el tamano del arreglo
    cin >> tamano;   //se guarda en la variable tamno

    int arreglo[tamano]; //se define el arreglo con el tamano

	//Se crea el menu con las opciones
    cout << "Elija una opcion de llenado: \n";
    cout << "a) Automatico (numeros entre 100 y 200)\n";
    cout << "b) Manual (numeros entre 0 y 99)\n";
    	cin >> opcion; //Se guarda la opcion escogida en la variable opcion

	//Se llena el arreglo aleatoriamente entre numeros de 100 a 200
    if (opcion == 'a') {
        for (int i = 0; i < tamano; i++) {
            arreglo[i] = rand() % 101 + 100;
        }
     //Se llena el arreglo mnualmente   
    } else if (opcion == 'b') {
        for (int i = 0; i < tamano; i++) {
            int numero;
            do {                 //se valida que los numeros esten dentro del rango (0 y 99)
                cout << "Ingrese el valor para la posicion " << i << ": ";
                cin >> numero;
                if (numero < 0 || numero > 99) {
                    cout << "Datos incorrectos. Ingrese un valor entre 0 y 99." << endl;
                }
            } while (numero < 0 || numero > 99);
            arreglo[i] = numero;
        } 
    } else {
        cout << "Opcion invalida\n";   
    }
    cout<<endl;
    //se llaman a las funciones
    cout<<"El arreglo es mostrado con el ciclo for: \n";
    imprimirArreglo(arreglo,tamano);
    cout<<endl;
    
    cout<<"El arreglo es mostrado con el ciclo While: \n";
    imprimirArregloWhile(arreglo, tamano);
    cout<<endl;
    
    int numeroPosicionMedia = obtenerPosicionMedia(arreglo, tamano);
    cout << "El numero contenido en la posicion media del arreglo es: \n";
	cout<<numeroPosicionMedia<<"\n"<<endl;
	
	
	cout<<"Los numero pares del arreglo son: \n";
	obtenerNumeroPar(arreglo,tamano);
	cout<<endl;
	
	imprimirPrimos(arreglo, tamano);
	cout<<endl;
	
	cout<<"El numero mayor del arreglo es: "<<numeroMayor(arreglo,tamano);
	cout<<endl;
	cout<<"\n";
	
	ordenarArreglo(arreglo,tamano);
	
	
    return 0;
}



