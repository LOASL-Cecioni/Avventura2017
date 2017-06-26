#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Room.cpp"
#include "TObject.cpp"
using namespace std;

string toString (int t) {
    stringstream ss;
    ss << t;
    return ss.str();
}
void CaricaPartita(int stanza, int nWall, int nOggetto){
    Room stanza;
    TObject staff;
	std::fstream fs;
fs.open("C:\\Users\\utente rob 08\\Documents\\lettura configurazione stanze.txt", std::fstream::in|std::fstream::out|std::fstream::app);
for (int stanza=0;stanza<5;stanza++)
{ 
int temp = stanza.getRoomNumber();
fs<<toString(temp)<<endl;
for (int nWall=0;nWall<5;nWall++){
	   for (int nOggetto=0;nOggetto<5;nOggetto++){

		   TObject temp2= stanza.getObjectsOnWall(nWall,nOggetto);
		   fs<<temp2.getObjectName()<<endl;
		   fs<<temp2.getUsed()<<endl;
		   fs<<temp2.getEffect()<<endl;
		  
	   }
	
}
}
fs.close();
}
int main ()
{ 
cout<<CaricaPartita;
system("pause");
return 0;
}
