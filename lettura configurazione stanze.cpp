#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Room.cpp"
#include "Object.cpp"
using namespace std;

string toString (int t) {
    stringstream ss;
    ss << t;
    return ss.str();
}

int main ()
{ 
 Room stanza;
Object staff;
	std::fstream fs;
fs.open("C:\\Users\\utente rob 08\\Documents\\lettura configurazione stanze.txt", std::fstream::in|std::fstream::out|std::fstream::app);
for (int stanza=0;stanza<5;stanza++)
{ 
int temp = stanza.getRoomNumber();
fs<<toString(temp)<<endl;
for (int nWall=0;nWall<5;nWall++){
	   for (int nOggetto=0;nOggetto<5;nOggetto++){

		   Object temp2= stanza.getObjectsOnWall(nWall,nOggetto);
		   fs<<temp2.getObjectName()<<endl;
		   fs<<temp2.getUsed()<<endl;
		   fs<<temp2.getEffect()<<endl;
		  
	   }
	
}
}
fs.close();
return 0;
}

