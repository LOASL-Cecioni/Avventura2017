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
		//-----------------------------------
		
		//metodi
		//GETTERS
		
		//metodo che ritorna il numero della stanza
		//ritorna la variabile roomNumber
		int getRoomNumber()
		{ 
			return roomNumber;
		}
		
		//metodo che ritorna un oggetto su una parete
		//passo come parametro il numero della della parete
		// e il numero dell'oggetto che si vuole ritornare 
		Object getObjectsOnWall (int in_wallNumber,int in_objectNumber)
		{ 
			if (wall1.wallNumber==in_wallNumber)
			{
				return wall1.onWall[in_objectNumber];
			} else if (wall2.wallNumber==in_wallNumber)
			{
				return wall2.onWall[in_objectNumber];
			} else if (wall3.wallNumber==in_wallNumber)
			{
				return wall3.onWall[in_objectNumber];
			} else if (wall4.wallNumber==in_wallNumber)
			{
				return wall4.onWall[in_objectNumber];
			} else if (wall5.wallNumber==in_wallNumber)
			{
				return wall5.onWall[in_objectNumber];
			}
		}
		
		//SETTERS
		
		//metodo che modifica il numero della stanza
		//modifica la variabile RoomNumber
		void setRoomNumber(int in_roomNumber)
		{
			roomNumber=in_roomNumber;
		}
};
