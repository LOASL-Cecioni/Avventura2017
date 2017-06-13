#include<iostream>
#include<string>
using namespace std;
const int mas=10;  //massima dimensione inventario=10
class Player
{ private:
	//attributi
	string name; //nome del giocatore
	int number; //numero del giocatore
	int roomNumber; //numero della stanza in cui il giocatore si trova
	int whatchedWall; //parete che il giocatore sta guardando (da 1 a 5)
	string usedObject; //oggetto che il giocatore sta usando
	int objectsInInventory;	//numero degli oggetti nell'inventario
	string inventory[mas]; //vettore di stringhe=inventario
	
  public:
 	//costruttore
	Player(string in_name, int in_number) //costruttore standard
	{	name=in_name;	//nome scelto dall'utente
	 	number=in_number; //numero scelto dall'utente
	 	roomNumber=1; //prima stanza
	 	whatchedWall=1;	//parete frontale
	 	usedObject="0";	//nessun oggetto utilizzato
		objectsInInventory=0; //nessun oggetto nell'inventario
		for(int i=0;i<mas;i++)	//l'inventario è vuoto
			{inventory[i]="0";
			}
	}
	//metodi
	//GETTERS
	//metodo che ritorna il nome del giocatore
	//ritorna la variabile name
	string getName()
	{ return name;
	}
	
	//metodo che ritorna il numero del giocatore
	//ritorna la variabile number
	int getNumber()
	{ return number;
	}
	
	//metodo che ritorna la posizione
	//ritorna la variabile roomNumber
	//ovvero il numero della stanza in cui il giocatore si trova
	int getPosition()
	{ return roomNumber;
	}
	
	//metodo che ritorna la parete guardata
	//ritorna la variabile whatchedWall
	//ovvero il numero della parete alla quale il giocatore punta
	//1=nord	2=est	3=sud	4=ovest	   5=pavimento
	int getWatchedWall()
	{ return whatchedWall;
	}
	
	//metodo che ritorna l'oggetto utilizzato
	//ritorna la variabile usedObject
	string getUsedObject()
	{ return usedObject;
	}
	
	//metodo che ritorna il numero di oggetti nell'inventario
	//ritorna la variabile objectsInInventory
	int getObjectsInInventory()
	{ return objectsInInventory;
	}
	
	//metodo che ritorna gli oggetti nell'inventario
	//ritorna la variabile inventory[mas]
	string[] getInventory()
	{ 
		return inventory;
		
	}
	
	//SETTERS
	
	//metodo che modifica il nome del giocatore
	//modifica la variabile name
	void setName(string in_name)
	{name=in_name;
	}
	
	//metodo che modifica il numero del giocatore
	//modifica la variabile name
	void setNumber(int in_number)
	{number=in_number;
	}
	
	//metodo per PRENDERE UN OGGETTO----------da RIVEDERE dopo aver creato la classe oggetto---------
	//metodo che aumenta il numero degli oggetti nell'inventario
	//modifica la variabile objectsInInventory e inventory
	void addObjectsInInventory(string added)
	{ inventory[objectsInInventory]=added;
	objectsInInventory+=1;
	}
	
	//metodo per LASCIARE UN OGGETTO----------da RIVEDERE dopo aver creato la classe oggetto---------
	//diminuisce il numero degli oggetti nell'inventario
	//modifica la variabile objectsInInventory e inventory
	void cutObjectsInInventory(string cut, int cutPosition)
	{ inventory[cutPosition]="0";
	for(int i=cutPosition; i<objectsInInventory;i++)	//sposto tutti gli elementi indietro
		{inventory[i]=inventory[i+1];					//fino alla posizione rimasta vuota
		}
	inventory[objectsInInventory]="0";					//svuoto l'ultima posizione
	objectsInInventory--;								//diminuisco la dimensione dell'inventario
	}
	
	
	
	//metodo per USARE UN OGGETTO
	//!!!da rivedere!!!
};
	
