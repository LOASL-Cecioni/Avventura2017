#include "Player.cpp"
#include "Room.cpp"
#include "Avventura2017.h"
#include <iostream>
#include <string>
#pragma once
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//-------------------------------------FUNZIONI-----------------------------------------------------

//funzione chiamata all'inizio del gioco
//ritorna 1 per aprire il menu
//ritorna 2 per aprire il manuale
//ritorna 3 per iniziare a giocare
int start()
{
	string chosen;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* AVVENTURA 2017 *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<"                                                             "<<endl;
	cout<<"benvenuto nel gioco AVVENTURA 2017! "<<endl;
	cout<<"digita 'menu' per accedere al menu principale"<<endl;
	cout<<"digita 'manuale' per accedere al manuale delle istruzioni"<<endl;
	cin>>chosen;
	if(chosen=="menu")
	{
		return 1;
	} 
	else if (chosen=="manuale")
	{
		return 2;
	}
	else 
	{
		cout<<"l'inserimento non è valido"<<endl;
		start();
	} 
}

//-------------------------------------------------------------------------------------------
//funzione che stampa e gersisce il manuale
void guide()
{
	int choice=0;
	while(choice==0)
	{
		cout<< "****************** MANUALE ***********************"<<endl;
		cout<< "1.scopo"<<endl;
		cout<< "2.movimenti"<<endl;
		cout<< "3.interazioni"<<endl;
		cout<< "--------------------------------------------------"<<endl;
		cout<< "scegli cosa fare"<<endl;
		cout<< "digita 1 per visualizzare lo scopo del gioco"<<endl;
		cout<< "digita 2 per visualizzare i movimenti possibili"<<endl;
		cout<< "digita 3 per visualizzare i comandi per le interazioni con gli oggetti"<<endl;
		cin>>choice;
	
		if (choice==1)
		{ 
			cout<< "SCOPO DEL GIOCO:"<<endl;
			cout<< "Scappa dall'edificio in cui sei stato imprigionato!"<<endl;
			cout<< "Per farlo devi riuscire ad usicre dall'ultima stanza"<<endl;
			cout<< "le stanze in totale sono 5"<<endl;
			cout<< "BUONA FORTUNA!"<<endl;
			cout<< "-------------------------------"<<endl;
		}
		else if (choice==2)
	    { 
			cout<< "MOVIMENTI DEL GIOCATORE:"<<endl;
			cout<<"I movimenti possibili sono:"<<endl;
			cout<<"		- cambia stanza"<<endl;
			cout<<"		- guarda un'altra parete"<<endl;
			cout<< "-------------------------------"<<endl;
		}
		else if (choice==3)
		{
		    cout<< "INTERAZIONI CON OGGETTI:"<<endl;
			cout<< "	-puoi prendere un oggetto"<<endl;
			cout<< "	-puoi gettare un oggetto"<<endl;
			cout<< "	-puoi usare un oggetto su un altro per aprirlo o distruggerlo"<<endl;
			cout<< "------------------------------------------------------------------"<<endl;
		}
		cout<<"digita 1 per iniziare a giocare!!"<<endl;
		cin>>state;
	}
}


//----------------------------------------------------------------------------------------------
//funzione di scrittura
//appartiene alla funzione menu
void scrittura (string menu[])
{
	for(int i=0; i<3; i++)
	{
		cout<<menu[i]<<endl;
	}
} 
	
//funzione di configurazione stanza da comando
//appartiene alla funzione menu
void configuraStanzaDaComando()
{  
   int roomNumber;
   do  {cout<<"Inserisci il numero della stanza"<<endl; cin>>roomNumber;}
   while (roomNumber<0||roomNumber>5);	//numero della stanza (da 1 a 5)
	      int wallNumber;	
   do  {cout<<"Inserisci quale parete vuoi descrivere"<<endl;  cin>>wallNumber;}
   while (wallNumber<0||wallNumber>5);
	    string onWall[5];	
		for(int i=0;i<5;i++)
		{cout<<"Inserisci un oggetto su questa parete"<<endl;  cin>>onWall[i];}
}
	
//funzione che visualizza il menu principale
void menu()
{
	cout<<"Menu principale"<<endl;
	string menu[3];
	menu[0]="1)Configura Stanza";
	menu[1]="2)Carica Vecchia Partita";
	menu[2]="3)Nuovo Account";
	scrittura(menu);
	cout<<"Inserisci numero scelto"<<endl;
	int numeroScelto;
	do{cin>> numeroScelto;}
	while (numeroScelto<0||numeroScelto>3);
	if (numeroScelto==1)
	{	
		configuraStanzaDaComando();
	}
	else if(numeroScelto==2)
	{	
		cout<<"Carica vecchia partita"<<endl;
 	}   
	else if(numeroScelto==3)	
	{	
		cout<<"Inizializzo una nuova partita"<<endl;      
	}
	cout<<"digita 1 per iniziare a giocare!!"<<endl;
	cin>>state;
}

//-------------------------------------------------------------------------------------------------
//funzione che crea il giocatore
void createPlayer()
{
	string playerName;
	int playerNumber;
	cout<<"CREAZIONE DEL GIOCATORE"<<endl;
	cout<<"inserisci il nome del giocatore"<<endl;
	cin>>playerName;
	cout<<"inserisci il numero del giocatore"<<endl;
	cin>>playerNumber;
	Player player1( playerName, playerNumber);
}

//----------------------------------------------------------------------------------------------------
//funzione che stampa la scritta "Hai Vinto"
//quando lo scopo del gioco è stato raggiunto 
void youWin()
{	 
	cout<< "Hai Vinto!" <<endl;	
}

//------------------------------------------------------------------------------------------------------
//funzione che inizializza le stanze
void createRoom()
{
	//----------------------------------PRIMA STANZA------------------------------
	bedroom;
	bedroom.setRoomNumber(1);	//la camera è la prima stanza
	//--------------------PARETE NORD (1)------------------------------
	//inizializzo il primo oggetto
	//LETTO
	bedroom.wall1.onWall[0].setObjectName("letto");
	bedroom.wall1.onWall[0].setRoomPosition(1);
	bedroom.wall1.onWall[0].setWallPosition(1);
	bedroom.wall1.onWall[0].setUsed("nasconde la mazza");
	bedroom.wall1.onWall[0].setEffect("fornisce la mazza se lo si usa");
	//inizializzo il secodno oggetto
	//MAZZA
	bedroom.wall1.onWall[1].setObjectName("mazza");
	bedroom.wall1.onWall[1].setRoomPosition(1);
	bedroom.wall1.onWall[1].setWallPosition(1);
	bedroom.wall1.onWall[1].setUsed("si usa sul vaso");
	bedroom.wall1.onWall[1].setEffect("distrugge il vaso");
	//inizializzo il terzo oggetto
	//VASO
	bedroom.wall1.onWall[2].setObjectName("vaso");
	bedroom.wall1.onWall[2].setRoomPosition(1);
	bedroom.wall1.onWall[2].setWallPosition(1);
	bedroom.wall1.onWall[2].setUsed("nasconde la fune");
	bedroom.wall1.onWall[2].setEffect("fornisce la fune se lo si usa");
	//inizializzo il quarto oggetto
	//FUNE
	bedroom.wall1.onWall[3].setObjectName("fune");
	bedroom.wall1.onWall[3].setRoomPosition(1);
	bedroom.wall1.onWall[3].setWallPosition(1);
	bedroom.wall1.onWall[3].setUsed("si usa per far cadere il quadro");
	bedroom.wall1.onWall[3].setEffect("distrugge il quadro");
	//inizializzo il quinto oggetto
	//QUADRO
	bedroom.wall1.onWall[4].setObjectName("quadro");
	bedroom.wall1.onWall[4].setRoomPosition(1);
	bedroom.wall1.onWall[4].setWallPosition(1);
	bedroom.wall1.onWall[4].setUsed("nasconde la password");
	bedroom.wall1.onWall[4].setEffect("fornisce la password se lo si usa");
	//--------------------PARETE EST (2)------------------------------
	//inizializzo il primo oggetto
	//PASSWORD
	bedroom.wall2.onWall[0].setObjectName("password");
	bedroom.wall2.onWall[0].setRoomPosition(1);
	bedroom.wall2.onWall[0].setWallPosition(2);
	bedroom.wall2.onWall[0].setUsed("si usa sulla cassettiera");
	bedroom.wall2.onWall[0].setEffect("apre la cassettiera");
	//inizializzo il secondo oggetto
	//CASSETTIERA
	bedroom.wall2.onWall[1].setObjectName("cassettiera");
	bedroom.wall2.onWall[1].setRoomPosition(1);
	bedroom.wall2.onWall[1].setWallPosition(2);
	bedroom.wall2.onWall[1].setUsed("contiene l'accendino");
	bedroom.wall2.onWall[1].setEffect("fornisce l'accendino se la si usa");
	//inizializzo il terzo oggetto
	//ACCENDINO
	bedroom.wall2.onWall[2].setObjectName("accendino");
	bedroom.wall2.onWall[2].setRoomPosition(1);
	bedroom.wall2.onWall[2].setWallPosition(2);
	bedroom.wall2.onWall[2].setUsed("si usa sulla tenda");
	bedroom.wall2.onWall[2].setEffect("distrugge la tenda");
	//inizializzo il quarto oggetto
	//TENDA
	bedroom.wall2.onWall[3].setObjectName("tenda");
	bedroom.wall2.onWall[3].setRoomPosition(1);
	bedroom.wall2.onWall[3].setWallPosition(2);
	bedroom.wall2.onWall[3].setUsed("nasconde la torcia");
	bedroom.wall2.onWall[3].setEffect("fornisce la torcia se usata");
	//inizializzo il quinto oggetto
	//TORCIA
	bedroom.wall2.onWall[4].setObjectName("torcia");
	bedroom.wall2.onWall[4].setRoomPosition(1);
	bedroom.wall2.onWall[4].setWallPosition(2);
	bedroom.wall2.onWall[4].setUsed("si usa nella cassaforte");
	bedroom.wall2.onWall[4].setEffect("trova il cacciavite dopo aver aperto la cassaforte");
	//--------------------PARETE SUD (3)------------------------------
	//inizializzo il primo oggetto
	//PIN
	bedroom.wall3.onWall[0].setObjectName("pin");
	bedroom.wall3.onWall[0].setRoomPosition(1);
	bedroom.wall3.onWall[0].setWallPosition(3);
	bedroom.wall3.onWall[0].setUsed("si usa sulla cassaforte");
	bedroom.wall3.onWall[0].setEffect("apre la cassaforte");
	//inizializzo il secondo oggetto
	//CASSAFORTE
	bedroom.wall3.onWall[1].setObjectName("cassaforte");
	bedroom.wall3.onWall[1].setRoomPosition(1);
	bedroom.wall3.onWall[1].setWallPosition(3);
	bedroom.wall3.onWall[1].setUsed("contiene la scopa");
	bedroom.wall3.onWall[1].setEffect("fornisce la scopa se aperta con il pin e illuminata con la torcia");
	//inizializzo il terzo oggetto
	//SCOPA
	bedroom.wall3.onWall[2].setObjectName("scopa");
	bedroom.wall3.onWall[2].setRoomPosition(1);
	bedroom.wall3.onWall[2].setWallPosition(3);
	bedroom.wall3.onWall[2].setUsed("si usa sul teppeto"); 	//si trova sul pavimento
	bedroom.wall3.onWall[2].setEffect("sposta il teppto");	//sotto il teppeto c'è una gomma
	//inizializzo il quarto oggetto
	//PORTA
	bedroom.wall3.onWall[3].setObjectName("porta");
	bedroom.wall3.onWall[3].setRoomPosition(1);
	bedroom.wall3.onWall[3].setWallPosition(3);
	bedroom.wall3.onWall[3].setUsed("porta alla stanza successiva");
	bedroom.wall3.onWall[3].setEffect("fa passare di livello");
	//inizializzo il quinto oggetto
	//POLTRONA
	bedroom.wall3.onWall[4].setObjectName("poltrona");		//è un oggetto inutile
	bedroom.wall3.onWall[4].setRoomPosition(1);	//serve per confondere
	bedroom.wall3.onWall[4].setWallPosition(3);
	bedroom.wall3.onWall[4].setUsed("non si usa");
	bedroom.wall3.onWall[4].setEffect("non ha effetto");
	//--------------------PARETE OVEST (4)------------------------------
	//inizializzo il primo oggetto
	//GOMMA
	bedroom.wall4.onWall[0].setObjectName("gomma");
	bedroom.wall4.onWall[0].setRoomPosition(1);
	bedroom.wall4.onWall[0].setWallPosition(4);
	bedroom.wall4.onWall[0].setUsed("si usa sul foglio");
	bedroom.wall4.onWall[0].setEffect("cancella le scritte inutili sul foglio");
	//inizializzo il secondo oggetto
	//FOGLIO
	bedroom.wall4.onWall[1].setObjectName("foglio");
	bedroom.wall4.onWall[1].setRoomPosition(1);
	bedroom.wall4.onWall[1].setWallPosition(4);
	bedroom.wall4.onWall[1].setUsed("contiene il codice dell'armadio");
	bedroom.wall4.onWall[1].setEffect("apre l'armadio se cancellate le scritte inutili");
	//inizializzo il terzo oggetto
	//ARMADIO
	bedroom.wall4.onWall[2].setObjectName("armadio");
	bedroom.wall4.onWall[2].setRoomPosition(1);
	bedroom.wall4.onWall[2].setWallPosition(4);
	bedroom.wall4.onWall[2].setUsed("contiene l'acqua per riempire il secchio");
	bedroom.wall4.onWall[2].setEffect("fornisce l'acqua per riempire il secchio se aperto");
	//inizializzo il quarto oggetto
	//SECCHIO
	bedroom.wall4.onWall[3].setObjectName("secchio");
	bedroom.wall4.onWall[3].setRoomPosition(1);
	bedroom.wall4.onWall[3].setWallPosition(4);
	bedroom.wall4.onWall[3].setUsed("è legato a una fune che fornisce un martello");
	bedroom.wall4.onWall[3].setEffect("fornisce un martello se riempito d'acqua");
	//inizializzo il quinto oggetto
	//MARTELLO
	bedroom.wall4.onWall[4].setObjectName("martello");
	bedroom.wall4.onWall[4].setRoomPosition(1);
	bedroom.wall4.onWall[4].setWallPosition(4);
	bedroom.wall4.onWall[4].setUsed("si usa sulla vetrinetta");
	bedroom.wall4.onWall[4].setEffect("distrugge la vetrinetta");
	//--------------------PAVIMENTO (5)------------------------------
	//inizializzo il primo oggetto
	//TAPPETO
	bedroom.wall5.onWall[0].setObjectName("tappeto");
	bedroom.wall5.onWall[0].setRoomPosition(1);
	bedroom.wall5.onWall[0].setWallPosition(5);
	bedroom.wall5.onWall[0].setUsed("nasconde la gomma");
	bedroom.wall5.onWall[0].setEffect("fornisce la gomma se spostato con la scopa");
	//inizializzo il secondo oggetto
	//VETRINETTA
	bedroom.wall5.onWall[1].setObjectName("vetrinetta");
	bedroom.wall5.onWall[1].setRoomPosition(1);
	bedroom.wall5.onWall[1].setWallPosition(5);
	bedroom.wall5.onWall[1].setUsed("contiene la chiave per aprire la porta");
	bedroom.wall5.onWall[1].setEffect("fornisce la chiave se distrutta con il martello");
	//inizializzo il terzo oggetto
	//PIANTA
	bedroom.wall5.onWall[2].setObjectName("pianta");
	bedroom.wall5.onWall[2].setRoomPosition(1);
	bedroom.wall5.onWall[2].setWallPosition(5);
	bedroom.wall5.onWall[2].setUsed("usarla significa spostarla");
	bedroom.wall5.onWall[2].setEffect("se spostata copre la serratura");
	//inizializzo il quarto oggetto
	//CHIAVE
	bedroom.wall5.onWall[3].setObjectName("chiave");
	bedroom.wall5.onWall[3].setRoomPosition(1);
	bedroom.wall5.onWall[3].setWallPosition(5);
	bedroom.wall5.onWall[3].setUsed("si usa sulla porta");	//la porta si trova sulla parete sud(3)
	bedroom.wall5.onWall[3].setEffect("apre la porta");
	//inizializzo il quinto oggetto
	//MAPPA
	bedroom.wall5.onWall[4].setObjectName("mappa");		//è un oggetto inutile
	bedroom.wall5.onWall[4].setRoomPosition(1);	//serve per confondere
	bedroom.wall5.onWall[4].setWallPosition(5);
	bedroom.wall5.onWall[4].setUsed("non si usa");
	bedroom.wall5.onWall[4].setEffect("non produce alcun effetto");
	
	//------------------------------------------SECONDA STANZA-------------------------------------------
	livingroom;
	livingroom.setRoomNumber(2);	//il salotto è la seconda stanza
	//parete NORD
	//fiori 1
	livingroom.wall1.onWall[0].setObjectName("porta");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(1);
	livingroom.wall1.onWall[0].setUsed("si apre con la chiave");
	livingroom.wall1.onWall[0].setEffect("passa alla prossima stanza");
	//graffetta 2
	livingroom.wall1.onWall[1].setObjectName("graffetta");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(1);
	livingroom.wall1.onWall[1].setUsed("si usa sulla cassaforte");
	livingroom.wall1.onWall[1].setEffect("forza la serrattura e apre la cassaforte");
	//cassaforte 3
	livingroom.wall1.onWall[2].setObjectName("cassaforte");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(1);
	livingroom.wall1.onWall[2].setUsed("nasconde un cacciavite");
	livingroom.wall1.onWall[2].setEffect("si usa per svitare le viti di un mobile");
	//cacciavite 4
	livingroom.wall1.onWall[3].setObjectName("cacciavite");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(1);
	livingroom.wall1.onWall[3].setUsed("svita le viti");
	livingroom.wall1.onWall[3].setEffect("fissavano un doppio fondo nel comodino");
	//comodino 5
	livingroom.wall1.onWall[4].setObjectName("comodino");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(1);
	livingroom.wall1.onWall[4].setUsed("nel doppio fondo nesconde un quaderno");
	livingroom.wall1.onWall[4].setEffect("contiene l'indizio per raggiungere l'oggetto successivo");
    //parete EST
	//quaderno 1
	livingroom.wall1.onWall[0].setObjectName("quaderno");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(2);
	livingroom.wall1.onWall[0].setUsed("contiene un indizio");
	livingroom.wall1.onWall[0].setEffect("l'indizio porta al tappeto");
	//indizio 2
	livingroom.wall1.onWall[1].setObjectName("indizio");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(2);
	livingroom.wall1.onWall[1].setUsed("porta alla cornice");
	livingroom.wall1.onWall[1].setEffect("sul retro della cornice è incollata una foto sul retro");
	//cornice 3
	livingroom.wall1.onWall[2].setObjectName("cornice");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(2);
	livingroom.wall1.onWall[2].setUsed("nasconde una foto sul retro");
	livingroom.wall1.onWall[2].setEffect("evidenzia l'immagine cerchiata del libro");
	//libro 4
	livingroom.wall1.onWall[3].setObjectName("libro");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(2);
	livingroom.wall1.onWall[3].setUsed("ha al suo interno il segnalibro");
	livingroom.wall1.onWall[3].setEffect("sul segnalibro è scritta la pssword del computer");
	//segnalibro 5
	livingroom.wall1.onWall[4].setObjectName("segnalibro ");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(2);
	livingroom.wall1.onWall[4].setUsed("che ha al suo interno la password per il computer");
	livingroom.wall1.onWall[4].setEffect("il computer apre un lucchetto");
	// parete SUD
	//computer 1
	livingroom.wall1.onWall[0].setObjectName("computer");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(3);
	livingroom.wall1.onWall[0].setUsed("computer che apre un lucchetto");
	livingroom.wall1.onWall[0].setEffect("lucchetto che apre l'armadio' ");
	//lucchetto 2
	livingroom.wall1.onWall[1].setObjectName("lucchetto");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(3);
	livingroom.wall1.onWall[1].setUsed("lucchetto che apre l'armadio'");
	livingroom.wall1.onWall[1].setEffect("amadio che nasconde una bottiglia");
	//armadio 3
	livingroom.wall1.onWall[2].setObjectName("armadio");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(3);
	livingroom.wall1.onWall[2].setUsed("armadio che nasconde una bottiglia");
	livingroom.wall1.onWall[2].setEffect("sul fondo della bottiglia vi è un ingranaggio");
	//bottiglia 4
	livingroom.wall1.onWall[3].setObjectName("bottiglia");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(3);
	livingroom.wall1.onWall[3].setUsed("bottiglia che ha la suo interno un ingranaggio");
	livingroom.wall1.onWall[3].setEffect("l'ingranaggio aziona il carion");
	//ingranaggio 5 
	livingroom.wall1.onWall[4].setObjectName("ingranaggio");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(3);
	livingroom.wall1.onWall[4].setUsed("l'ingranaggio aziona il carion");
	livingroom.wall1.onWall[4].setEffect(" il carillon aziona una melodia");
	//parete OVEST
	//carillon 1
	livingroom.wall1.onWall[0].setObjectName("carillon");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(4);
	livingroom.wall1.onWall[0].setUsed("il carillon aziona una melodia");
	livingroom.wall1.onWall[0].setEffect("la melodia ripete il nome dell'oggetto successivo");
	//melodia 2
	livingroom.wall1.onWall[1].setObjectName("melodia");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(4);
	livingroom.wall1.onWall[1].setUsed("melodia che ripete il nome di un cuscino");
	livingroom.wall1.onWall[1].setEffect("il cuscino che nasconde un martello");
	//cuscino 3
	livingroom.wall1.onWall[2].setObjectName("cuscino");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(4);
	livingroom.wall1.onWall[2].setUsed("il cuscino nasconde un martello");
	livingroom.wall1.onWall[2].setEffect("il martello rompe il salvadanaio");
	//martello 4
	livingroom.wall1.onWall[3].setObjectName("martello");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(4);
	livingroom.wall1.onWall[3].setUsed("il martello rompe il salvadanaio");
	livingroom.wall1.onWall[3].setEffect("il salvadanaio contiene una lente");
	//salvadanaio 5
	livingroom.wall1.onWall[4].setObjectName("salvadanio");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(4);
	livingroom.wall1.onWall[4].setUsed("il salvadanaio contiene una lente");
	livingroom.wall1.onWall[4].setEffect("la lente aggiusta gli occhiali");
	//pavimento
	//lente 1
	livingroom.wall1.onWall[0].setObjectName("lente");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(5);
	livingroom.wall1.onWall[0].setUsed("la lente aggiusta gli occhiali");
	livingroom.wall1.onWall[0].setEffect("indossati gli occhiali è visibile una scitta fosofresescente sul muro, con scitto tappeto");
	//occhiali 2
	livingroom.wall1.onWall[1].setObjectName("occhaili");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(5);
	livingroom.wall1.onWall[1].setUsed("indossati gli occhiali è visibile una scitta fosofresescente sul muro, con scitto tappeto");
	livingroom.wall1.onWall[1].setEffect("sotto il tappeto si vede una mattonella con una x sopra");
	//scritta sul muro , tappeto 3
	livingroom.wall1.onWall[2].setObjectName("tappeto");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(5);
	livingroom.wall1.onWall[2].setUsed("sotto il tappeto si vede una mattonella con una x sopra");
	livingroom.wall1.onWall[2].setEffect("spacco la mattonella con il martello usato in precedenza");
	//mattonella 4 
	livingroom.wall1.onWall[3].setObjectName("mattonella");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(5);
	livingroom.wall1.onWall[3].setUsed("mattonella spaccata con il martello usato in precedenza che porta alla chiave");
	livingroom.wall1.onWall[3].setEffect("la chiave apre la porta");
	//chiave 5
	livingroom.wall1.onWall[4].setObjectName("chiave");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(5);
	livingroom.wall1.onWall[4].setUsed("la chiave apre la porta");
	livingroom.wall1.onWall[4].setEffect("la porta conduce a nuovi indizi");
	
	//----------------------------------------------TERZA STANZA-------------------------------------------------
	kitchen;
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
	
	//---------------------------------------------QUARTA STANZA-----------------------------------------------
	studio;
	studio.setRoomNumber(1);	//lo studio è la quarta stanza
	//--------------------PARETE NORD (1)------------------------------
	//inizializzo il primo oggetto
	//PORTA
	studio.wall1.onWall[0].setObjectName("porta");
	studio.wall1.onWall[0].setRoomPosition(4);
	studio.wall1.onWall[0].setWallPosition(1);
	studio.wall1.onWall[0].setUsed("si apre con la chiave");
	studio.wall1.onWall[0].setEffect("passa alla prossima stanza");
	//inizializzo il secodno oggetto
	//SCRIVANIA
	studio.wall1.onWall[1].setObjectName("scrivania");
	studio.wall1.onWall[1].setRoomPosition(4);
	studio.wall1.onWall[1].setWallPosition(1);
	studio.wall1.onWall[1].setUsed("nasconde un biglietto");
	studio.wall1.onWall[1].setEffect("fornisce il biglietto");
	//inizializzo il terzo oggetto
	//BIGLIETTO
	studio.wall1.onWall[2].setObjectName("biglietto");
	studio.wall1.onWall[2].setRoomPosition(4);
	studio.wall1.onWall[2].setWallPosition(1);
	studio.wall1.onWall[2].setUsed("si riconosce che sia parte una pagina strappata di un libro");
	studio.wall1.onWall[2].setEffect("fornisce parte delle informazioni su una chiave");
	//inizializzo il quarto oggetto
	//LIBRO
	studio.wall1.onWall[3].setObjectName("libro");
	studio.wall1.onWall[3].setRoomPosition(4);
	studio.wall1.onWall[3].setWallPosition(1);
	studio.wall1.onWall[3].setUsed("mancano molte altre pagine");
	studio.wall1.onWall[3].setEffect("ti porta a cercare le pagine mancanti");
	//inizializzo il quinto oggetto
	//PAGINA MANCANTE 2
	studio.wall1.onWall[4].setObjectName("pagina mancante 2");
	studio.wall1.onWall[4].setRoomPosition(4);
	studio.wall1.onWall[4].setWallPosition(1);
	studio.wall1.onWall[4].setUsed("indizio: la terza pagina mancante è nascosta in una penna stilografica");
	studio.wall1.onWall[4].setEffect("ti porta a cercare la penna stilografica");
	//--------------------PARETE EST (2)------------------------------
	//inizializzo il primo oggetto
	//ASTUCCIO
	studio.wall2.onWall[0].setObjectName("astuccio");
	studio.wall2.onWall[0].setRoomPosition(4);
	studio.wall2.onWall[0].setWallPosition(2);
	studio.wall2.onWall[0].setUsed("contiene due penne stilografiche");
	studio.wall2.onWall[0].setEffect("acquisisci le penna stilografica 1 e penna stilografica 2");
	//inizializzo il secondo oggetto
	//PENNA STILOGRAFICA 1
	studio.wall2.onWall[1].setObjectName("penna stilografica 1");
	studio.wall2.onWall[1].setRoomPosition(4);
	studio.wall2.onWall[1].setWallPosition(2);
	studio.wall2.onWall[1].setUsed("si apre la penna");
	studio.wall2.onWall[1].setEffect("ti schizza l'inchiostro in faccia'");
	//inizializzo il terzo oggetto
	//PENNA STILOGRAFICA 2
	studio.wall2.onWall[2].setObjectName("penna stilografica 2");
	studio.wall2.onWall[2].setRoomPosition(4);
	studio.wall2.onWall[2].setWallPosition(2);
	studio.wall2.onWall[2].setUsed("si apre la penna");
	studio.wall2.onWall[2].setEffect("acquisisci terza pagina");
	//inizializzo il quarto oggetto
	//TERZA PAGINA
	studio.wall2.onWall[3].setObjectName("terza pagina");
	studio.wall2.onWall[3].setRoomPosition(4);
	studio.wall2.onWall[3].setWallPosition(2);
	studio.wall2.onWall[3].setUsed("indizio: la quarta pagina è nascosta in un quaderno");
	studio.wall2.onWall[3].setEffect("ti porta a cercare il quaderno");
	//inizializzo il quinto oggetto
	//LIBRERIA
	studio.wall2.onWall[4].setObjectName("libreria");
	studio.wall2.onWall[4].setRoomPosition(4);
	studio.wall2.onWall[4].setWallPosition(2);
	studio.wall2.onWall[4].setUsed("contiene un quaderno viola");
	studio.wall2.onWall[4].setEffect("acquisisci il quaderno viola");
	//--------------------PARETE SUD (3)------------------------------
	//inizializzo il primo oggetto
	//QUADERNO VIOLA
	studio.wall3.onWall[0].setObjectName("quaderno viola");
	studio.wall3.onWall[0].setRoomPosition(4);
	studio.wall3.onWall[0].setWallPosition(3);
	studio.wall3.onWall[0].setUsed("si trova l'ultima pagina");
	studio.wall3.onWall[0].setEffect("acquisisci l'ultima pagina");
	//inizializzo il secondo oggetto
	//ULTIMA PAGINA
	studio.wall3.onWall[1].setObjectName("ultima pagina");
	studio.wall3.onWall[1].setRoomPosition(4);
	studio.wall3.onWall[1].setWallPosition(3);
	studio.wall3.onWall[1].setUsed("indizio: dietro alla libreria c'è un MP3");
	studio.wall3.onWall[1].setEffect("cercare MP3");
	//inizializzo il terzo oggetto
	//MP3
	studio.wall3.onWall[2].setObjectName("MP3");
	studio.wall3.onWall[2].setRoomPosition(4);
	studio.wall3.onWall[2].setWallPosition(3);
	studio.wall3.onWall[2].setUsed("aziona la musica"); 	
	studio.wall3.onWall[2].setEffect("cade un libro dal soffitto");	//onde sonore inizializzano un meccanismo nel soffitto
	//inizializzo il quarto oggetto
	//LIBRO DAL SOFFITTO
	studio.wall3.onWall[3].setObjectName("libro dal soffitto");
	studio.wall3.onWall[3].setRoomPosition(4);
	studio.wall3.onWall[3].setWallPosition(3);
	studio.wall3.onWall[3].setUsed("si legge un codice alfanumerico da inserire nel computer e un misterioso numero (1.23)");
	studio.wall3.onWall[3].setEffect("cercare il computer");
	//inizializzo il quinto oggetto
	//COMPUTER
	studio.wall3.onWall[4].setObjectName("computer");		
	studio.wall3.onWall[4].setRoomPosition(4);	
	studio.wall3.onWall[4].setWallPosition(3);
	studio.wall3.onWall[4].setUsed("si accende il computer");//solo con l'utilizzo del codice alfanumerico
	studio.wall3.onWall[4].setEffect("si apre youtube con un video");
	//--------------------PARETE OVEST (4)------------------------------
	//inizializzo il primo oggetto
	//VIDEO
	studio.wall4.onWall[0].setObjectName("video");
	studio.wall4.onWall[0].setRoomPosition(4);
	studio.wall4.onWall[0].setWallPosition(4);
	studio.wall4.onWall[0].setUsed("inizia il video");
	studio.wall4.onWall[0].setEffect("solo fermando il video al minuto 1:23 è possibile notare un messaggio subliminale con su scritto divano");
	//inizializzo il secondo oggetto
	//DIVANO
	studio.wall4.onWall[1].setObjectName("divano");
	studio.wall4.onWall[1].setRoomPosition(4);
	studio.wall4.onWall[1].setWallPosition(4);
	studio.wall4.onWall[1].setUsed("non ha utilizzi");
	studio.wall4.onWall[1].setEffect("non ha effetti");
	//inizializzo il terzo oggetto
	//CUSCINO
	studio.wall4.onWall[2].setObjectName("cuscino");
	studio.wall4.onWall[2].setRoomPosition(4);
	studio.wall4.onWall[2].setWallPosition(4);
	studio.wall4.onWall[2].setUsed("se usato viene trovata l'etichetta con scritta la lettera A");
	studio.wall4.onWall[2].setEffect("cerca un oggetto che possa rappresentare o ricordare la lettera A");
	//inizializzo il quarto oggetto
	//FOTOGRAFIA
	studio.wall4.onWall[4].setObjectName("fotografia");
	studio.wall4.onWall[4].setRoomPosition(4);
	studio.wall4.onWall[4].setWallPosition(4);
	studio.wall4.onWall[4].setUsed("si nota la lettera A sullo sfondo e un cane in primo piano");
	studio.wall4.onWall[4].setEffect("cercare un collegamento con il cane nella stanza");
	//inizializzo il quinto oggetto
	//CUCCIA
	studio.wall4.onWall[4].setObjectName("cuccia");
	studio.wall4.onWall[4].setRoomPosition(4);
	studio.wall4.onWall[4].setWallPosition(4);
	studio.wall4.onWall[4].setUsed("si trova la medaglietta del cane");
	studio.wall4.onWall[4].setEffect("acquisisci medaglietta del cane");
	//--------------------PAVIMENTO (5)------------------------------
	//inizializzo il primo oggetto
	//MEDAGLIETTA
	studio.wall5.onWall[0].setObjectName("medaglietta");
	studio.wall5.onWall[0].setRoomPosition(4);
	studio.wall5.onWall[0].setWallPosition(5);
	studio.wall5.onWall[0].setUsed("vedi un nome scritto");
	studio.wall5.onWall[0].setEffect("acquisisci codice f.i.d.o.");
	//inizializzo il secondo oggetto
	//CODICE F.I.D.O.
	studio.wall5.onWall[1].setObjectName("codice f.i.d.o.");
	studio.wall5.onWall[1].setRoomPosition(4);
	studio.wall5.onWall[1].setWallPosition(5);
	studio.wall5.onWall[1].setUsed("abbinando ogni lettera ad il numero corrispondente si trova un codice numerico");//A=1,B=2..
	studio.wall5.onWall[1].setEffect("ottieni il codice 68413");
	//inizializzo il terzo oggetto
	//CODICE 68413
	studio.wall5.onWall[2].setObjectName("codice 68413");
	studio.wall5.onWall[2].setRoomPosition(4);
	studio.wall5.onWall[2].setWallPosition(5);
	studio.wall5.onWall[2].setUsed("può aprire un lucchetto");
	studio.wall5.onWall[2].setEffect("cercare il lucchetto");
	//inizializzo il quarto oggetto
	//LUCCHETTO CHE BLOCCA IL CASSETTO
	studio.wall5.onWall[3].setObjectName("lucchetto che blocca il cassetto");
	studio.wall5.onWall[3].setRoomPosition(4);
	studio.wall5.onWall[3].setWallPosition(5);
	studio.wall5.onWall[3].setUsed("si apre con il codice");	
	studio.wall5.onWall[3].setEffect("apre il cassetto e trovi una chiave");
	//inizializzo il quinto oggetto
	//CHIAVE
	studio.wall5.onWall[4].setObjectName("chiave");		
	studio.wall5.onWall[4].setRoomPosition(4);	
	studio.wall5.onWall[4].setWallPosition(5);
	studio.wall5.onWall[4].setUsed("si usa sulla porta");
	studio.wall5.onWall[4].setEffect("apre la porta");//la porta si trova nella parete nord
}

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------PROGRAMMA PRINCIPALE----------------------------------------------------	

int main(int argc, char** argv)
{
	do
	{
		//dichiarazione variabili
		state=0;	//definisce lo stato in cui si trova il gioco
		//state=0 quando si visualizza la schermata principale
		
		//la variabile command decide cosa fare dopo la visualizzazione della schermata principale
		//la funzione start restituisce la scelta dell'utente
		//se restituisce 1 si deve visualizzare il menu principale
		//se restituisce 2 si deve visualizzare il manuale
		//se restituisce 3 si inizia a giocare
		while(state==0)
		{
			command=start();
		//visualizzazione del menu
		
			if(command==1)
			{ 
				//apri il menu principale
				menu();
			}
			
			
			//visualizzazione del manuale
			//se command è 2
			if (command==2)
			{
				guide();	//chiamata della funzione guide che visualizza il manuale
			}
		}
		//INIZIO DEL GIOCO
		//creazione del giocatore
		//quando state=1
		while(state==1)
		{
			cout<<"*-*-*-*-*-*-*-*-*-*-*-*INIZIO DEL GIOCO*-*-*-*-*-*-*-*-*-*-*"<<endl;
			createPlayer(); 
			cout<<"digita 2 per visualizzare la prima stanza"<<endl;
			cin>>state;
		}
		
		while(state==2)	//si entra nella prima stanza
		{
			createRoom();
			//stampo la prima stanza 
			cout<<"benvenuto nella prima stanza: LA CAMERA"<<endl;
			cout<<"parete nord"<<endl;	//wall 1
			for(int i=0; i<5; i++)
			{
				cout<<bedroom.wall1.onWall[i].getObjectName()<<endl;
			}
			cout<<"                                              "<<endl;
			cout<<"parete est"<<endl;	//wall2
			for(int i=0; i<5; i++)
			{
				cout<<bedroom.wall2.onWall[i].getObjectName()<<endl;
			}
			cout<<"                                              "<<endl;
			cout<<"parete sud"<<endl;	//wall 3
			for(int i=0; i<5; i++)
			{
				cout<<bedroom.wall3.onWall[i].getObjectName()<<endl;
			}
			cout<<"                                              "<<endl;
			cout<<"parete ovest"<<endl;	//wall 4
			for(int i=0; i<5; i++)
			{
				cout<<bedroom.wall4.onWall[i].getObjectName()<<endl;
			}
			cout<<"                                              "<<endl;
			cout<<"pavimento"<<endl;	//wall 5
			for(int i=0; i<5; i++)
			{
				cout<<bedroom.wall5.onWall[i].getObjectName()<<endl;
			}
		state=3;
		}
	}
	while(state!=-1);
	//fine del gioco
	//il gioco finisce quando si esce dalla stanza 5
	//quando si esce dalla stanza 5 state diventa -1
 	youWin();
	
	
	return 0;
}
