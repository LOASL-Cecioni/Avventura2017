#include<iostream>
#include<string>
#include"Room.cpp"
#include"TObject.cpp"
using namespace std;

void CreateRoom()
{
	Room livingroom;
	livingroom.setRoomNumber(2);
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
	livingroom.wall1.onWall[1].setObjectName("occhiali");
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
}
