#include<iostream>
#include<string>
#pragma once
using namespace std;

class TObject
{
	private:
		//attributi
		string objectName;	//nome dell'oggetto
		int roomPosition;	//numero della stanza nella quale si trova
		int wallPosition;	//numero della parete nella quale si trova
		string used;	//su che cosa va usato l'oggetto
		string effect;	//l'effetto che provoca dopo l'utilizzo (descrizione testuale)
	
	public:
	 	//costruttore vuoto
	 	TObject()
	 	{
			cleanObject();
		}
		//costruttore
	 	TObject (string in_objectName, int in_roomPosition, int in_wallPosition, string in_used, string in_effect)
	 	{	
		 	objectName=in_objectName;	//assegna il nome dell'oggetto
	 		roomPosition=in_roomPosition;	//assegna il numero della stanza in cui si trova
	 		wallPosition=in_wallPosition;	//assegna la parete nella quale si trova l'oggetto
	 		used=in_used;	//assegna su cosa va usato l'oggetto
	 		effect=in_effect;	//assegna la descrizione dell'effetto che ha l'oggetto dopo essere stato utilizzato	
		}
		//costruttore di copia
		TObject (TObject &newObject)
		{
			objectName=newObject.getObjectName();	//assegna il nome dell'oggetto
	 		roomPosition=newObject.getRoomPosition();	//assegna il numero della stanza in cui si trova
	 		wallPosition=newObject.getWallPosition();	//assegna la parete nella quale si trova l'oggetto
	 		used=newObject.getUsed();	//assegna su cosa va usato l'oggetto
	 		effect=newObject.getEffect();	//assegna la descrizione dell'effetto che ha l'oggetto dopo essere stato utilizzato	
		}
		//metodi
		//GETTERS
		
		//metodo che ritorna il nome del giocatore
		//ritorna la variabile name
		string getObjectName()
		{
			return objectName;
		}
		
		//metodo che ritorna il numero della stanza nella quale si trova l'oggetto
		//ritorna la variabile roomPosition
		int getRoomPosition()
		{
			return roomPosition;
		}
		
		//metodo che ritorna in quale parete della stanza si trova l'oggetto
		//ritorna la variabile wallPosition
		int getWallPosition()
		{
			return wallPosition;
		}
		
		//metodo che ritorna lo scopo dell'oggetto
		//ritorna la variabile used
		string getUsed()
		{
			return used;
		}
	
		//metodo che ritorna l'effetto dell'oggetto
		//ritorna la variabile effect
		string getEffect()
		{
			return effect;
		}
		
		//SETTERS
	
		//metodo che modifica il nome 
		//modifica la variabile name
		void setObjectName(string in_objectName)
		{
			objectName=in_objectName;
		}
		
		//metodo che modifica il numero della stanza
		//modifica la variabile roomPosition
		void setRoomPosition(int in_roomPosition)
		{
			roomPosition=in_roomPosition;
		}
		
		//metodo che modifica il numero della parete
		//modifica la variabile wallPosition
		void setWallPosition(int in_wallPosition)
		{
			wallPosition=in_wallPosition;
		}
		
		//metodo che modifica la descrizione dell'utilizzo
		//modifica la variabile used
		void setUsed(string in_used)
		{
			used=in_used;
		}
		
		//metodo che modifica la descrizione dell'effetto
		//modifica la variabile effect
		void setEffect(string in_effect)
		{
			effect=in_effect;
		}
		
		//metodo per DISTRUGGERE
		void destroy(TObject destroyedObject)	//passo l'oggetto che viene distrutto 
		{	destroyedObject.objectName="0";
			destroyedObject.roomPosition=0;			//per distruggere un oggetto lo azzero
			destroyedObject.wallPosition=0;
			destroyedObject.used="0";
			destroyedObject.effect="0";
			cout<<"l'oggetto e' stato distrutto"<<endl;
		}
		
		//metodo per APRIRE
		bool openDoor()						//metodo per aprire la porta e passare alla stanza successiva
		{ 
			cout<<"la porta e' stata aperta"<<endl;
			return true;						//utilizzato dal giocatore nel metodo changeRoom
		}
		
		//metodo per pulire l'oggetto
		void cleanObject()        
		{
			objectName="0";
			roomPosition=0;
			wallPosition=0;
			used="0";
			effect="0";
			
		}
			
};
