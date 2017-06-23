//creazione manuale della stanza
#include <iostream>
#include <string>
#include "Room.cpp"
#include "Object.cpp"
using namespace std;

//funzione che inizializza le stanze
void CreateRoom()
{
	Room studio;
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
