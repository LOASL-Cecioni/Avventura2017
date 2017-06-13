#include "Avventura2017.h"
#include <iostream>
using namespace std;
main()
{
	int scelta;
	cout<< "1.scopo"<<endl;
	cout<< "2.movimenti"<<endl;
	cout<< "3.interazioni"<<endl;
	cout<< "scegli cosa fare"<<endl;
	cin>>scelta;
  if (scelta==1)
  { 
  cout <<"Scappa dall'edificio in cui sei stato imprigionato!"<<endl;
  }
     else if (scelta==2)
     { 
	 cout <<"Cambia stanza!"<<endl;
	 }
	    else if (scelta==3)
	    {
	    	cout <<"Puoi prendere, usare o gettare gli oggetti che troverai nelle stanze."<<endl;
		}
		system("pause");
}
