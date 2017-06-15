
#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//---------------FUNZIONI-------------------

//funzione chiamata all'inizio del gioco
//ritorna 1 per aprire il menu
//ritorna 2 per aprire il manuale
//ritorna 3 per iniziare a giocare

int start()
{
	string chosen;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-* AVVENTURA 2017 *-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
	cout<<"                                                             "<<endl;
	cout<<" benvenuto nel gioco AVVENTURA 2017! "<<endl;
	cout<<"digita 'menu' per accedere al menu principale"<<endl;
	cout<<"digita 'manuale' per accedere al manuale delle istruzioni"<<endl;
	cout<<"digita 'gioca' per iniziare a giocare!"<<endl;
	cin>>chosen;
	if(chosen=="menu")
	{
		return 1;
	} 
	else if (chosen=="manuale")
	{
		return 2;
	}
	else if (chosen=="gioca")
	{
		return 3;
	}
	else 
	{
		cout<<"l'inserimento non è valido"<<endl;
		start();
	} 
}


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

//------------------------PROGRAMMA PRINCIPALE-----------------------	

int main(int argc, char** argv) 
{
	//la variabile command decide cosa fare dopo la visualizzazione della schermata principale
	//la funzione start restituisce la scelta dell'utente
	//se restituisce 1 si deve visualizzare il menu principale
	//se restituisce 2 si deve visualizzare il manuale
	//se restituisce 3 si inizia a giocare
	int command;
	command=start();
	
	//visualizzazione del menu
	//il menu non è ancora pronto
	//DA FINIRE
	/* 
	if(command==1)
	{ 
		//apri il menu principale
	}
	*/
	
	//visualizzazione del manuale
	//se command è 2
	if (command==2)
	{
		guide();	//chiamata della funzione guide che visualizza il manuale
	}
	
	//inizio del gioco
	//la configurazione della nuova partita non è ancora pronta
	//DA FINIRE
	/*
	if(command==3)
	{
		//inizia nuova partita
	}
	*/
	
	
	return 0;
}
