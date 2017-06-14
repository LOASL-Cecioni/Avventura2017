//visualizzazione del menu principale
#include <iostream>
#include<string>
using namespace std;

void scrittura (string menu[])
{for(int i=0;i<3;i++)
	{cout<<menu[i]<<endl;
	}
} 


main()
{cout<<"Menu principale"<<endl;
string menu[3];
menu[0]="1)Configura Stanza";
menu[1]="2)Carica Vecchia Partita";
menu[2]="3)Nuovo Account";
scrittura(menu);
}


