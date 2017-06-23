
#include <iostream>
using namespace std;


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
			cout<< "digita 0 per tornare al manuale"<<endl;
		}
		else if (choice==2)
	    { 
			cout<< "MOVIMENTI DEL GIOCATORE:"<<endl;
			cout<<"I movimenti possibili sono:"<<endl;
			cout<<"- cambia stanza"<<endl;
			cout<<"- guarda un'altra parete"<<endl;
			cout<< "-------------------------------"<<endl;
			cout<< "digita 0 per tornare al manuale"<<endl;
		}
		else if (choice==3)
		{
		    cout<< "INTERAZIONI CON OGGETTI:"<<endl;
			cout<< "-puoi prendere un oggetto"<<endl;
			cout<< "-puoi gettare un oggetto"<<endl;
			cout<< "-puoi usare un oggetto su un altro per aprirlo o distruggerlo"<<endl;
			cout<< "-------------------------------------------------------------"<<endl;
			cout<< "digita 0 per tornare al manuale"<<endl;	
		}
	}
}
