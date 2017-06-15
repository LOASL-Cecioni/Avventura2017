#include "Avventura2017.h"
#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	//la variabile command decide cosa fare dopo la visualizzazione della schermata principale
	//la funzione start restituisce la scelta dell'utente
	//se restituisce 1 si deve visualizzare il menu principale
	//se restituisce 2 si deve visualizzare il manuale
	//se restituisce 3 si inizia a giocare
	int command;
	command=start();
	
	return 0;
}
