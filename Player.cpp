#include<iostream>
#include<string>
#include "TObject.cpp"

using namespace std;
const int mas=10;  //massima dimensione inventario=10

class Player
{ private:
	//attributi
	string name; //nome del giocatore
	int number; //numero del giocatore
	int roomNumber; //numero della stanza in cui il giocatore si trova
	int watchedWall; //parete che il giocatore sta guardando (da 1 a 5)
	//Object usedObject; //oggetto che il giocatore sta usando
	int objectsInInventory;	//numero degli oggetti nell'inventario
	TObject inventory[mas]; //vettore di oggetti=inventario
	
  public:
 	//costruttore
	Player(string in_name, int in_number) //costruttore standard
	{	name=in_name;	//nome scelto dall'utente
	 	number=in_number; //numero scelto dall'utente
	 	roomNumber=1; //prima stanza
	 	watchedWall=1;	//parete frontale
	 	//usedObject="0";	//nessun oggetto utilizzato
		objectsInInventory=0; //nessun oggetto nell'inventario
	
	}
	//metodi
	//GETTERS
	//metodo che ritorna il nome del giocatore
	//ritorna la variabile name
	string getName()
	{	
		return name;
	}
	
	//metodo che ritorna il numero del giocatore
	//ritorna la variabile number
	int getNumber()
	{	
		return number;
	}
	
	//metodo che ritorna la posizione
	//ritorna la variabile roomNumber
	//ovvero il numero della stanza in cui il giocatore si trova
	int getPosition()
	{	
		return roomNumber;
	}
	
	//metodo che ritorna la parete guardata
	//ritorna la variabile whatchedWall
	//ovvero il numero della parete alla quale il giocatore punta
	//1=nord	2=est	3=sud	4=ovest	   5=pavimento
	int getWatchedWall()
	{	
		return watchedWall;
	}
	
	//metodo che ritorna l'oggetto utilizzato
	//ritorna la variabile usedObject
	
	/*string getUsedObject()
	{	
		return usedObject;
	}
	*/
	
	//metodo che ritorna il numero di oggetti nell'inventario
	//ritorna la variabile objectsInInventory
	int getObjectsInInventory()
	{	
		return objectsInInventory;
	}
	
	//metodo che ritorna gli oggetti nell'inventario
	//ritorna la variabile inventory[mas]
	TObject getInventory()
	{ 
		return inventory[mas];
		
	}
	
	//SETTERS
	
	//metodo che modifica il nome del giocatore
	//modifica la variabile name
	void setName(string in_name)
	{
		name=in_name;
	}
	
	//metodo che modifica il numero del giocatore
	//modifica la variabile name
	void setNumber(int in_number)
	{
		number=in_number;
	}
	
	//metodo per PRENDERE UN OGGETTO
	//metodo che aumenta il numero degli oggetti nell'inventario
	//modifica la variabile objectsInInventory e inventory
	void addObjectsInInventory(TObject &added)
	{	
		inventory[objectsInInventory]= TObject(added);
		objectsInInventory+=1;
	}
	
	//metodo per LASCIARE UN OGGETTO
	//diminuisce il numero degli oggetti nell'inventario
	//modifica la variabile objectsInInventory e inventory
	void cutObjectsInInventory(TObject cut, int cutPosition)
	{ 
		for(int i=cutPosition; i<objectsInInventory;i++)	//sposto tutti gli elementi indietro
		{
			inventory[i]=inventory[i+1];					//fino alla posizione rimasta vuota
		}
		inventory[objectsInInventory].cleanObject();		//svuoto l'ultima posizione
		objectsInInventory--;								//diminuisco la dimensione dell'inventario
	}

	//metodo per CAMBIARE STANZA
	void changeRoom(TObject key)		//passo l'ggetto (chiave)
	{ 
		if(key.openDoor())					//uso il metodo openDoor dell'oggetto
		{
			roomNumber++;				//incremento il numero della stanza
			watchedWall=1;				//riporto il giocatore a guardare la parete nord
		}
	}
};
	
