#include <iostream>
#include <fstream>            //header necessario per ifstream!
using namespace std;

main() 
{
    ifstream file("file.txt");   //nome del file da aprire, si può mettere anche il percorso (es C:\\file.txt)
    string s;

    if(!file) 
	{
        cout<<"Il file non esiste!";
        return -1;
    }

    while(file.good());          //fino a quando c'è qualcosa da leggere ..
    
}
