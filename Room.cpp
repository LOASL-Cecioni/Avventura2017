//classe stanza 
#include<iostream>
#include<string>
#include<fstream>
#include "TObject.cpp"

using namespace std;

class Room
{
	private:
		//attributi
		int roomNumber;	//numero della stanza (da 1 a 5)
		
	public:
		
		//metto le pareti pubbliche in modo da poter fare il salvataggio
		//su file anche all'esterno della classe
		struct wall	//struttura che definisce le caratteristiche di una parete
			{ 
				int wallNumber;	//numero della parete
				TObject onWall[5];	//5 oggetti per ogni parete
			};
		
		wall wall1;	//parete nord
		wall wall2;	//parete est
		wall wall3;	//paret sud
		wall wall4;	//parete ovest
		wall wall5;	//pavimento
		
		
		//costruttore
		//Room()	//serve l'upload da file
		
		
		//---------------------------------------------------------------------------
		//come si fa l'upload da fie esistente
		/*
		ifstream f("file.txt");
		string s;
		if(!f) 
		{
        	cout< <"Il file non esiste!";
   		}
		while(f.good()) //fino a quando c'� qualcosa da leggere ..
    	{
        	getline(f, s); //legge tutta la riga dal file e la mette nella variabile s
        	cout<<s<<endl;
    	}
    	f.close(); //chiude il file
    	*/
    	//----------------------------------------------------------------------------
		
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
		//e il numero dell'oggetto che si vuole ritornare 
		//(con un for si possono ottenre tutti e 5 gli oggetti sulla parete)
		TObject getObjectsOnWall (int in_wallNumber,int in_objectNumber)
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
