#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main()
{
	cout << "BIENVENIDO AL HUNDIR LA FLOTA" << endl;
	cout << "=============================" << endl;

	char tabla1[10][10];
	char tabla2[10][10];
	int j = 0;
	//Crear las dos tablas con bucle (j = filas y i = columnas)
	for (int i = 0; i < 11; i++) { 
		tabla1[j][i] = '~';
		tabla2[j][i] = '~';
		if (i == 10) {
			i = 0;
			j++;
		}
		if (j == 10) {
			break;
		}
	}
	//Mostrar el tablero del jugador 1
	cout << "Tablero del jugador 1" << endl;
	for (int fila = 0; fila < 10; fila++) {
		for (int columna = 0; columna < 10; columna++) {
			cout << tabla1[fila][columna] << " "; 

		}
		cout << endl;
	} 
	cout << endl;
	//Mostrar el tablero del jugador 2
	cout << "Tablero del jugador 2" << endl;
	for (int fila = 0; fila < 10; fila++) {
		for (int columna = 0; columna < 10; columna++) {
			cout << tabla2[fila][columna] << " ";

		}
		cout << endl;
	}
	cout << endl;
	//Elegir si el barco ira el vertical o horizontal (1 = vertical y 2 = horizontal)

	int random_posicion;
	random_posicion = rand() % 2;

	int random_fila;
	int random_columna;
	random_fila = rand() % 9;
	random_columna = rand() % 9;
	
	char barco = '6';
	int resta = 6;
	int salir = 0;
	while (salir <= 4) {
		if (random_posicion == 0) {
			int contador2 = 0;
			while ((contador2 < resta) && (tabla1[random_fila + contador2][random_columna] == '~')
				&& (tabla1[random_fila - contador2][random_columna] == '~')) {
				contador2++;
			}
			if (contador2 == resta) {
				if (random_fila <= 4) {
					for (int c = 0; c < resta; c++) {
						tabla1[random_fila + c][random_columna] = barco;
					}
				}
				else {
					for (int c = 0; c < resta; c++) {
						tabla1[random_fila - c][random_columna] = barco;
					}
				}
				resta--;
				barco--;
				random_fila = rand() % 9;
				random_columna = rand() % 9;
				random_posicion = rand() % 2;
				contador2 = 0;
				salir++;
				if (salir == 4) {
					break;
				}
			}
			else {
				random_fila = rand() % 9;
				random_columna = rand() % 9;
				contador2 = 0;
			}
		}
		if (random_posicion == 1) {
			int contador2 = 0;
			while ((contador2 < resta) && (tabla1[random_fila][random_columna + contador2] == '~')
				&& (tabla1[random_fila][random_columna - contador2] == '~')) {
				contador2++;
			}
			if (contador2 == resta) {
				if (random_columna <= 4) {
					for (int c = 0; c < resta; c++) {
						tabla1[random_fila][random_columna + c] = barco;
					}
				}
				else {
					for (int c = 0; c < resta; c++) {
						tabla1[random_fila][random_columna - c] = barco;
					}
				}
				resta--;
				barco--;
				random_fila = rand() % 9;
				random_columna = rand() % 9;
				random_posicion = rand() % 2;
				contador2 = 0;
				salir++;
				if (salir == 4) {
					break;
				}
			}
			else {
				random_fila = rand() % 9;
				random_columna = rand() % 9;
				contador2 = 0;
			}
		}
	}

	// Imprimir el tablero del jugador 1
	cout << "Tablero del jugador 1" << endl;
	for (int fila = 0; fila < 10; fila++) {
		for (int columna = 0; columna < 10; columna++) {
			cout << tabla1[fila][columna] << " ";
		}
		cout << endl;
	}

	cout << endl;

	int random_posicion1;
	random_posicion1 = rand() % 2;

	int random_fila1;
	int random_columna1;
	random_fila1 = rand() % 9;
	random_columna1 = rand() % 9;

	char barco1 = '6';
	int resta1 = 6;
	int salir1 = 0;
	while (salir1 <= 4) {
		if (random_posicion1 == 0) {
			int contador2 = 0;
			while ((contador2 < resta1) && (tabla2[random_fila1 + contador2][random_columna1] == '~')
				&& (tabla2[random_fila1 - contador2][random_columna1] == '~')) {
				contador2++;
			}
			if (contador2 == resta1) {
				if (random_fila1 <= 4) {
					for (int c = 0; c < resta1; c++) {
						tabla2[random_fila1 + c][random_columna1] = barco1;
					}
				}
				else {
					for (int c = 0; c < resta1; c++) {
						tabla2[random_fila1 - c][random_columna1] = barco1;
					}
				}
				resta1--;
				barco1--;
				random_fila1 = rand() % 9;
				random_columna1 = rand() % 9;
				random_posicion1 = rand() % 2;
				contador2 = 0;
				salir1++;
				if (salir1 == 4) {
					break;
				}
			}
			else {
				random_fila1 = rand() % 9;
				random_columna1 = rand() % 9;
				contador2 = 0;
			}
		}
		if (random_posicion1 == 1) {
			int contador2 = 0;
			while ((contador2 < resta1) && (tabla2[random_fila1][random_columna1 + contador2] == '~')
				&& (tabla2[random_fila1][random_columna1 - contador2] == '~')) {
				contador2++;
			}
			if (contador2 == resta1) {
				if (random_columna1 <= 4) {
					for (int c = 0; c < resta1; c++) {
						tabla2[random_fila1][random_columna1 + c] = barco1;
					}
				}
				else {
					for (int c = 0; c < resta1; c++) {
						tabla2[random_fila1][random_columna1	 - c] = barco1;
					}
				}
				resta1--;
				barco1--;
				random_fila1 = rand() % 9;
				random_columna1 = rand() % 9;
				random_posicion1 = rand() % 2;
				contador2 = 0;
				salir1++;
				if (salir1 == 4) {
					break;
				}
			}
			else {
				random_fila1 = rand() % 9;
				random_columna1 = rand() % 9;
				contador2 = 0;
			}
		}
	}

	// Imprimir el tablero del jugador 2
	cout << "Tablero del jugador 2" << endl;
	for (int fila = 0; fila < 10; fila++) {
		for (int columna = 0; columna < 10; columna++) {
			cout << tabla2[fila][columna] << " ";
		}
		cout << endl;
	}

	cout << endl;
	char tabla3[10][10];
	char tabla4[10][10];
	j = 0;
	for (int i = 0; i < 11; i++) {
		tabla3[j][i] = '~';
		tabla4[j][i] = '~';
		if (i == 10) {
			i = 0;
			j++;
		}
		if (j == 10) {
			break;
		}
	}
	bool ganador = false;
	int fila1;
	int columna1;
	int fila2;
	int columna2;
	int suma1 = 0;
	int suma2 = 0;

	while (ganador == false) {
		cout << "Jugador 1, que posicion quieres atacar?" << endl;
		cout << "Fila: "; cin >> fila1;
		cout << "Columna: "; cin >> columna1;
		while (tabla4[fila1 - 1][columna1 - 1] == 'X' || tabla4[fila1 - 1][columna1 - 1] == 'O') {
			cout << "Jugador 1, ya has tirado en esta posicion" << endl;
			cout << "Jugador 1, que posicion quieres atacar?" << endl;
			cout << "Fila: "; cin >> fila1;
			cout << "Columna: "; cin >> columna1;
		}
		if (tabla2[fila1 - 1][columna1 - 1] == '~') {
			tabla4[fila1 - 1][columna1 - 1] = 'X';
			cout << "Has fallado" << endl;
		}
		else {
			tabla4[fila1 - 1][columna1 - 1] = 'O';
			cout << "Has acertado" << endl;
			suma1++;
		}
		if (suma1 == 18) {
			cout << "Felicidades jugador 1, has ganado :)" << endl;
			ganador = true;
			break;
		}
		// Imprimir el tablero del jugador 2
		cout << "Tablero del jugador 2" << endl;
		for (int fila = 0; fila < 10; fila++) {
			for (int columna = 0; columna < 10; columna++) {
				cout << tabla4[fila][columna] << " ";
			}
			cout << endl;
		}
		cout << endl;

		cout << "Jugador 2, que posicion quieres atacar?" << endl;
		cout << "Fila: "; cin >> fila2;
		cout << "Columna: "; cin >> columna2;
		while (tabla3[fila2 - 1][columna2 - 1] == 'X' || tabla3[fila2 - 1][columna2 - 1] == 'O') {
			cout << "Jugador 2, ya has tirado en esta posicion" << endl;
			cout << "Jugador 2, que posicion quieres atacar?" << endl;
			cout << "Fila: "; cin >> fila2;
			cout << "Columna: "; cin >> columna2;
		}
		if (tabla1[fila2 - 1][columna2 - 1] == '~') {
			tabla3[fila2 - 1][columna2 - 1] = 'X';
			cout << "Has fallado" << endl;
		}
		else {
			tabla3[fila2 - 1][columna2 - 1] = 'O';
			cout << "Has acertado" << endl;
			suma2++;
			cout << suma2;
		}
		if (suma2 == 18) {
			ganador = true;
			cout << "Felicidades jugador 2, has ganado :)" << endl;
		}
		// Imprimir el tablero del jugador 1
		cout << "Tablero del jugador 1" << endl;
		for (int fila = 0; fila < 10; fila++) {
			for (int columna = 0; columna < 10; columna++) {
				cout << tabla3[fila][columna] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
}