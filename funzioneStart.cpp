#include<iostream>
#include<string>
using namespace std;

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
		chosen=start();
	} 
}
	
	
