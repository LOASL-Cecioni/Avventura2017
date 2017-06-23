//creazione manuale della stanza
#include <iostream>
#include <string>
#include "Room.cpp"
using namespace std;

//funzione che inizializza le stanze
void CreateRoom()
{
	Room kitchen;
	kitchen.setRoomNumber(1);	//la cucina è la terza stanza
	//--------------------PARETE NORD (1)------------------------------
	//inizializzo il primo oggetto
	//tavolo
	kitchen.wall1.onWall[0].setObjectName("table");
	kitchen.wall1.onWall[0].setRoomPosition(3);
	kitchen.wall1.onWall[0].setWallPosition(1);
	kitchen.wall1.onWall[0].setUsed("tenere panini");
	kitchen.wall1.onWall[0].setEffect("contiene il foglio bianco se smontato");
	//inizializzo il secondo oggetto
	//foglio bianco
	kitchen.wall1.onWall[1].setObjectName("foglio bianco");
	kitchen.wall1.onWall[1].setRoomPosition(3);
	kitchen.wall1.onWall[1].setWallPosition(1);
	kitchen.wall1.onWall[1].setUsed("essere illuminato");
	kitchen.wall1.onWall[1].setEffect("fornisce scritte se illuminate con luce uv");
	//inizializzo il terzo oggetto
	//panino
	kitchen.wall1.onWall[2].setObjectName("panino");
	kitchen.wall1.onWall[2].setRoomPosition(3);
	kitchen.wall1.onWall[2].setWallPosition(1);
	kitchen.wall1.onWall[2].setUsed("nasconde un foglio");
	kitchen.wall1.onWall[2].setEffect("fornisce un foglio se lo si apre");
	//inizializzo il quarto oggetto
	//foglio con scritta
	kitchen.wall1.onWall[3].setObjectName("foglio");
	kitchen.wall1.onWall[3].setRoomPosition(3);
	kitchen.wall1.onWall[3].setWallPosition(1);
	kitchen.wall1.onWall[3].setUsed("si legge: l'orologio va un ora avanti'");
	kitchen.wall1.onWall[3].setEffect("indirizza il giocatore verso l'orologio");
	//inizializzo il quinto oggetto
	//orologio
	kitchen.wall1.onWall[4].setObjectName("orologio");
	kitchen.wall1.onWall[4].setRoomPosition(3);
	kitchen.wall1.onWall[4].setWallPosition(1);
	kitchen.wall1.onWall[4].setUsed("ha una password sul retro");
	kitchen.wall1.onWall[4].setEffect("fornisce la password se lo si gira per cambiare l'ora'");
	//--------------------PARETE EST (2)------------------------------
	//inizializzo il primo oggetto
	//PASSWORD
	kitchen.wall2.onWall[0].setObjectName("password");
	kitchen.wall2.onWall[0].setRoomPosition(3);
	kitchen.wall2.onWall[0].setWallPosition(2);
	kitchen.wall2.onWall[0].setUsed("si usa sul frigo");
	kitchen.wall2.onWall[0].setEffect("apre il frigo");
	//inizializzo il secondo oggetto
	//frigo
	kitchen.wall2.onWall[1].setObjectName("frigo");
	kitchen.wall2.onWall[1].setRoomPosition(3);
	kitchen.wall2.onWall[1].setWallPosition(2);
	kitchen.wall2.onWall[1].setUsed("contiene una bottiglia di champagne");
	kitchen.wall2.onWall[1].setEffect("fornisce l'accendino se la si usa");
	//inizializzo il terzo oggetto
	//champagne
	kitchen.wall2.onWall[2].setObjectName("bottiglia di champagne");
	kitchen.wall2.onWall[2].setRoomPosition(3);
	kitchen.wall2.onWall[2].setWallPosition(2);
	kitchen.wall2.onWall[2].setUsed("ha un codice sul tappo");
	kitchen.wall2.onWall[2].setEffect("fornisce il codice");
	//inizializzo il quarto oggetto
	//codice
	kitchen.wall2.onWall[3].setObjectName("codice");
	kitchen.wall2.onWall[3].setRoomPosition(3);
	kitchen.wall2.onWall[3].setWallPosition(2);
	kitchen.wall2.onWall[3].setUsed("apre la credenza");
	kitchen.wall2.onWall[3].setEffect("la credenza è aperta");
	//inizializzo il quinto oggetto
	//credenza
	kitchen.wall2.onWall[4].setObjectName("credenza");
	kitchen.wall2.onWall[4].setRoomPosition(3);
	kitchen.wall2.onWall[4].setWallPosition(2);
	kitchen.wall2.onWall[4].setUsed("contiene un cacciavite e un foglio con scritta");
	kitchen.wall2.onWall[4].setEffect("ottieni il cacciavite");
	//--------------------PARETE SUD (3)------------------------------
	//inizializzo il primo oggetto
	//cacciavite
	kitchen.wall3.onWall[0].setObjectName("cacciavite");
	kitchen.wall3.onWall[0].setRoomPosition(3);
	kitchen.wall3.onWall[0].setWallPosition(3);
	kitchen.wall3.onWall[0].setUsed("si usa sul tavolo");
	kitchen.wall3.onWall[0].setEffect("smonta il tavolo");
	//inizializzo il secondo oggetto
	//CASSAFORTE
	kitchen.wall3.onWall[1].setObjectName("cassaforte");
	kitchen.wall3.onWall[1].setRoomPosition(3);
	kitchen.wall3.onWall[1].setWallPosition(3);
	kitchen.wall3.onWall[1].setUsed("contiene la penna a luci uv");
	kitchen.wall3.onWall[1].setEffect("hai la luce uv");
	//inizializzo il terzo oggetto
	//penna a luci uv
	kitchen.wall3.onWall[2].setObjectName("penna a luci uv");
	kitchen.wall3.onWall[2].setRoomPosition(3);
	kitchen.wall3.onWall[2].setWallPosition(3);
	kitchen.wall3.onWall[2].setUsed("fornisce luce uv"); 	
	kitchen.wall3.onWall[2].setEffect("illumina le scritte invisibili");	
	//inizializzo il quarto oggetto
	//PORTA
	kitchen.wall3.onWall[3].setObjectName("porta");
	kitchen.wall3.onWall[3].setRoomPosition(3);
	kitchen.wall3.onWall[3].setWallPosition(3);
	kitchen.wall3.onWall[3].setUsed("porta alla stanza successiva");
	kitchen.wall3.onWall[3].setEffect("fa passare di livello");
	//inizializzo il quinto oggetto
	//foglio con scritta
	kitchen.wall4.onWall[0].setObjectName("foglio con scritta");
	kitchen.wall4.onWall[0].setRoomPosition(3);
	kitchen.wall4.onWall[0].setWallPosition(3);
	kitchen.wall4.onWall[0].setUsed("ha una scritta:fa un po' caldo");
	kitchen.wall4.onWall[0].setEffect("indirizza il giocatore verso il ventilatore");
	
	//--------------------PARETE OVEST (4)------------------------------
	//inizializzo il primo oggetto
	//
	//lampadina
	kitchen.wall3.onWall[4].setObjectName("lampadina");		//è un oggetto inutile
	kitchen.wall3.onWall[4].setRoomPosition(3);	//serve per confondere
	kitchen.wall3.onWall[4].setWallPosition(4);
	kitchen.wall3.onWall[4].setUsed("non si usa");
	kitchen.wall3.onWall[4].setEffect("non ha effetto");
	
	//inizializzo il secondo oggetto
	//terza sedia
	kitchen.wall4.onWall[1].setObjectName("sedia3");
	kitchen.wall4.onWall[1].setRoomPosition(3);
	kitchen.wall4.onWall[1].setWallPosition(4);
	kitchen.wall4.onWall[1].setUsed("copre la presa di corrente");
	kitchen.wall4.onWall[1].setEffect("il giocatore non vede la presa");
	//inizializzo il terzo oggetto
	//presa di corrente
	kitchen.wall4.onWall[2].setObjectName("presa di corrente");
	kitchen.wall4.onWall[2].setRoomPosition(3);
	kitchen.wall4.onWall[2].setWallPosition(4);
	kitchen.wall4.onWall[2].setUsed("fornisce corrente");
	kitchen.wall4.onWall[2].setEffect("accende il ventilatore se collegato");
	//inizializzo il quarto oggetto
	//ventilatore
	kitchen.wall4.onWall[4].setObjectName("ventilatore");
	kitchen.wall4.onWall[4].setRoomPosition(3);
	kitchen.wall4.onWall[4].setWallPosition(4);
	kitchen.wall4.onWall[4].setUsed("essere acceso e girare");
	kitchen.wall4.onWall[4].setEffect("girando fa muovere la tendina");
	//inizializzo il quinto oggetto
	//tendina
	kitchen.wall4.onWall[4].setObjectName("tendina");
	kitchen.wall4.onWall[4].setRoomPosition(3);
	kitchen.wall4.onWall[4].setWallPosition(4);
	kitchen.wall4.onWall[4].setUsed("nasconde il vaso");
	kitchen.wall4.onWall[4].setEffect("il vaso è nascosto");
	//--------------------PAVIMENTO (5)------------------------------
	//inizializzo il primo oggetto
	//vaso
	kitchen.wall5.onWall[0].setObjectName("vaso");
	kitchen.wall5.onWall[0].setRoomPosition(3);
	kitchen.wall5.onWall[0].setWallPosition(5);
	kitchen.wall5.onWall[0].setUsed("contiene il terriccio");
	kitchen.wall5.onWall[0].setEffect("tiene il terriccio compatto");
	//inizializzo il secondo oggetto
	//terriccio
	kitchen.wall5.onWall[1].setObjectName("terriccio");
	kitchen.wall5.onWall[1].setRoomPosition(3);
	kitchen.wall5.onWall[1].setWallPosition(5);
	kitchen.wall5.onWall[1].setUsed("contiene la chiave per aprire la porta");
	kitchen.wall5.onWall[1].setEffect("fornisce la chiave se dissotterrata");
	//inizializzo il terzo oggetto
	//quarta sedia
	kitchen.wall5.onWall[2].setObjectName("sedia4");
	kitchen.wall5.onWall[2].setRoomPosition(3);
	kitchen.wall5.onWall[2].setWallPosition(5);
	kitchen.wall5.onWall[2].setUsed("copre la serratura della porta");
	kitchen.wall5.onWall[2].setEffect("il giocatore non vede la serratura");
	//inizializzo il quarto oggetto
	//CHIAVE
	kitchen.wall5.onWall[3].setObjectName("chiave");
	kitchen.wall5.onWall[3].setRoomPosition(3);
	kitchen.wall5.onWall[3].setWallPosition(5);
	kitchen.wall5.onWall[3].setUsed("si usa sulla porta");	//la porta si trova sulla parete sud(3)
	kitchen.wall5.onWall[3].setEffect("apre la porta");
	//inizializzo il quinto oggetto
	//pizza
	kitchen.wall5.onWall[4].setObjectName("pizza");		//è un oggetto inutile
	kitchen.wall5.onWall[4].setRoomPosition(3);	//serve per confondere
	kitchen.wall5.onWall[4].setWallPosition(5);
	kitchen.wall5.onWall[4].setUsed("essere mangiata");
	kitchen.wall5.onWall[4].setEffect("distrae il giocatore");
}
