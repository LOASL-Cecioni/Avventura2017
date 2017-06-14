#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
	std::fstream fs;
fs.open("C:\\Users\\utente rob 08\\Documents\\registro salvataggi.txt", std::fstream::in|std::fstream::out|std::fstream::app);
fs<<"salvataggio 1";
fs.close();
return 0;
}
