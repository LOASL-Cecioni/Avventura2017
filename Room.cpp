#include<iostream>
#include<string>
#include "Object.cpp"

using namespace std;

class Room
{
	private:
		//attributi
		int roomNumber;	//numero della stanza (da 1 a 5)
		struct wall	//struttura che definisce le caratteristiche di una parete
			{ 
				int wallNumber;	//numero della parete
				Object onWall[5];	//5 oggetti per ogni parete
			};
		wall wall1;	//parete nord
		wall wall2;	//parete est
		wall wall3;	//paret sud
		wall wall4;	//parete ovest
		wall wall5;	//pavimento
		
	public:
		//costruttore
		//Room()	//serve l'upload da file
		
		//metodi
		//GETTERS
		
		//metodo che ritorna il numero della stanza
		//ritorna la variabile roomNumber
		int getRoomNumber()
		{ 
			return roomNumber;
		}
		
		
		
	
};
