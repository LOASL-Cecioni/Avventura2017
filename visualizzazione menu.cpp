//visualizzazione del menu principale e configurazione stanza da linea di comando
#include <iostream>
#include <string>
#include "Object.cpp"
using namespace std;

void scrittura (string menu[])
{for(int i=0;i<3;i++)
	{cout<<menu[i]<<endl;
	}
} 

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

main()
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
	if (numeroScelto=1)
		{	configuraStanzaDaComando();
		}else { 	if(numeroScelto=2)
					{	cout<<"Carica vecchia partita"<<endl;
 					}   else {  if(numeroScelto=3)	
					            {	cout<<"Inizializzo una nuova partita"<<endl;      }
						     }
     	      }
}
