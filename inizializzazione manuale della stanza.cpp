//creazione manuale della stanza
#include <iostream>
#include <string>
#include "Room.cpp"
#include "TObject.cpp"
using namespace std;

//funzione che inizializza le stanze
void CreateRoom()
{
	//----------------------------------PRIMA STANZA------------------------------
	Room bedroom;
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
	bedroom.wall4.onWall[4].setObjectName("secchio");
	bedroom.wall4.onWall[4].setRoomPosition(1);
	bedroom.wall4.onWall[4].setWallPosition(4);
	bedroom.wall4.onWall[4].setUsed("è legato a una fune che fornisce un martello");
	bedroom.wall4.onWall[4].setEffect("fornisce un martello se riempito d'acqua");
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
	Room livingroom;
	livingroom.setRoomNumber(2);	//il salotto è la seconda stanza
	//parete NORD
	//fiori 1
	livingroom.wall1.onWall[0].setObjectName("porta");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(1);
	livingroom.wall1.onWall[0].setUsed("si apre con la chiave");
	livingroom.wall1.onWall[0].setEffect("passa alla prossima stanza")
	//graffetta 2
	livingroom.wall1.onWall[1].setObjectName("graffetta");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].set WallPosition(1);
	livingroom.wall1.onWall[1].setUsed("si usa sulla cassaforte");
	livingroom.wall1.onWall[1].setEffect("forza la serrattura e apre la cassaforte")
	//cassaforte 3
	livingroom.wall1.onWall[2].setObjectName("cassaforte");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(1);
	livingroom.wall1.onWall[2].setUsed("nasconde un cacciavite");
	livingroom.wall1.onWall[2].set Effect("si usa per svitare le viti di un mobile")
	//cacciavite 4
	livingroom.wall1.onWall[3].setObjectName("cacciavite");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(1);
	livingroom.wall1.onWall[3].setUsed("svita le viti");
	livingroom.wall1.onWall[3].set Effect("fissavano un doppio fondo nel comodino")cciavite
	//comodino 5
	livingroom.wall1.onWall[4].setObjectName("comodino");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(1);
	livingroom.wall1.onWall[4].setUsed("nel doppio fondo nesconde un quaderno");
	livingroom.wall1.onWall[4].set Effect("contiene l'indizio per raggiungere l'oggetto successivo");
    //parete EST
	//quaderno 1
	livingroom.wall1.onWall[0].setObjectName("quaderno");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(2);
	livingroom.wall1.onWall[0].setUsed("contiene un indizio");
	livingroom.wall1.onWall[0].set Effect("l'indizio porta al tappeto");
	//indizio 2
	livingroom.wall1.onWall[1].setObjectName("indizio");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(2);
	livingroom.wall1.onWall[1].setUsed("porta alla cornice");
	livingroom.wall1.onWall[1].set Effect("sul retro della cornice è incollata una foto sul retro");
	//cornice 3
	livingroom.wall1.onWall[2].setObjectName("cornice");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(2);
	livingroom.wall1.onWall[2].setUsed("nasconde una foto sul retro");
	livingroom.wall1.onWall[2].set Effect("evidenzia l'immagine cerchiata del libro");
	//libro 4
	livingroom.wall1.onWall[3].setObjectName("libro");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(2);
	livingroom.wall1.onWall[3].setUsed("ha al suo interno il segnalibro");
	livingroom.wall1.onWall[3].set Effect("sul segnalibro è scritta la pssword del computer");
	//segnalibro 5
	livingroom.wall1.onWall[4].setObjectName("segnalibro ");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(2);
	livingroom.wall1.onWall[4].setUsed("che ha al suo interno la password per il computer");
	livingroom.wall1.onWall[4].set Effect("il computer apre un lucchetto");
	// parete SUD
	//computer 1
	livingroom.wall1.onWall[0].setObjectName("computer");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(3);
	livingroom.wall1.onWall[0].setUsed("computer che apre un lucchetto");
	livingroom.wall1.onWall[0].set Effect("lucchetto che apre l'armadio' ");
	//lucchetto 2
	livingroom.wall1.onWall[1].setObjectName("lucchetto");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(3);
	livingroom.wall1.onWall[1].setUsed("lucchetto che apre l'armadio'");
	livingroom.wall1.onWall[1].set Effect("amadio che nasconde una bottiglia");
	//armadio 3
	livingroom.wall1.onWall[2].setObjectName("armadio");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(3);
	livingroom.wall1.onWall[2].setUsed("armadio che nasconde una bottiglia");
	livingroom.wall1.onWall[2].set Effect("sul fondo della bottiglia vi è un ingranaggio");
	//bottiglia 4
	livingroom.wall1.onWall[3].setObjectName("bottiglia");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(3);
	livingroom.wall1.onWall[3].setUsed("bottiglia che ha la suo interno un ingranaggio");
	livingroom.wall1.onWall[3].set Effect("l'ingranaggio aziona il carion");
	//ingranaggio 5 
	livingroom.wall1.onWall[4].setObjectName("ingranaggio");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(3);
	livingroom.wall1.onWall[4].setUsed("l'ingranaggio aziona il carion");
	livingroom.wall1.onWall[4].set Effect(" il carillon aziona una melodia");
	//parete OVEST
	//carillon 1
	livingroom.wall1.onWall[0].setObjectName("carillon");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(4);
	livingroom.wall1.onWall[0].setUsed("il carillon aziona una melodia");
	livingroom.wall1.onWall[0].set Effect("la melodia ripete il nome dell'oggetto successivo");
	//melodia 2
	livingroom.wall1.onWall[1].setObjectName("melodia");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(4);
	livingroom.wall1.onWall[1].setUsed("melodia che ripete il nome di un cuscino");
	livingroom.wall1.onWall[1].set Effect("il cuscino che nasconde un martello");
	//cuscino 3
	livingroom.wall1.onWall[2].setObjectName("cuscino");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(4);
	livingroom.wall1.onWall[2].setUsed("il cuscino nasconde un martello");
	livingroom.wall1.onWall[2].set Effect("il martello rompe il salvadanaio");
	//martello 4
	livingroom.wall1.onWall[3].setObjectName("martello");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(4);
	livingroom.wall1.onWall[3].setUsed("il martello rompe il salvadanaio");
	livingroom.wall1.onWall[3].set Effect("il salvadanaio contiene una lente");
	//salvadanaio 5
	livingroom.wall1.onWall[4].setObjectName("salvadanio");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(4);
	livingroom.wall1.onWall[4].setUsed("il salvadanaio contiene una lente");
	livingroom.wall1.onWall[4].set Effect("la lente aggiusta gli occhiali");
	//pavimento
	//lente 1
	livingroom.wall1.onWall[0].setObjectName("lente");
	livingroom.wall1.onWall[0].setRoomPosition(2);
	livingroom.wall1.onWall[0].setWallPosition(5);
	livingroom.wall1.onWall[0].setUsed("la lente aggiusta gli occhiali");
	livingroom.wall1.onWall[0].set Effect("indossati gli occhiali è visibile una scitta fosofresescente sul muro, con scitto tappeto");
	//occhiali 2
	livingroom.wall1.onWall[1].setObjectName("occhaili");
	livingroom.wall1.onWall[1].setRoomPosition(2);
	livingroom.wall1.onWall[1].setWallPosition(5);
	livingroom.wall1.onWall[1].setUsed("indossati gli occhiali è visibile una scitta fosofresescente sul muro, con scitto tappeto");
	livingroom.wall1.onWall[1].set Effect("sotto il tappeto si vede una mattonella con una x sopra");
	//scritta sul muro , tappeto 3
	livingroom.wall1.onWall[2].setObjectName("tappeto");
	livingroom.wall1.onWall[2].setRoomPosition(2);
	livingroom.wall1.onWall[2].setWallPosition(5);
	livingroom.wall1.onWall[2].setUsed("sotto il tappeto si vede una mattonella con una x sopra");
	livingroom.wall1.onWall[2].set Effect("spacco la mattonella con il martello usato in precedenza");
	//mattonella 4 
	livingroom.wall1.onWall[3].setObjectName("mattonella");
	livingroom.wall1.onWall[3].setRoomPosition(2);
	livingroom.wall1.onWall[3].setWallPosition(5);
	livingroom.wall1.onWall[3].setUsed("mattonella spaccata con il martello usato in precedenza che porta alla chiave");
	livingroom.wall1.onWall[3].set Effect("la chiave apre la porta");
	//chiave 5
	livingroom.wall1.onWall[4].setObjectName("chiave");
	livingroom.wall1.onWall[4].setRoomPosition(2);
	livingroom.wall1.onWall[4].setWallPosition(5);
	livingroom.wall1.onWall[4].setUsed("la chiave apre la porta");
	livingroom.wall1.onWall[4].set Effect("la porta conduce a nuovi indizi");
	
	//----------------------------------------------TERZA STANZA-------------------------------------------------
	
	
	//---------------------------------------------QUARTA STANZA-----------------------------------------------
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
