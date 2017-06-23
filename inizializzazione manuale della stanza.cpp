//creazione manuale della stanza
#include <iostream>
#include <string>
#include "Room.cpp"
#include "TObject.cpp"
using namespace std;

//funzione che inizializza le stanze
void CreateRoom()
{
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
}
