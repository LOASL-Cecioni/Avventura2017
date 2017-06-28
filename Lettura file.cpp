#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
class LetturaFile
{
	public:
		string toString (int t) {
    stringstream ss;
    ss << t;
    return ss.str();
}
	void LetturaFile()
	{	
	std::fstream fs;
		FILE*fd;
        char buf[200];
		char*res;
		// aprire salvataggio
		fd=fopen("lettura configurazione stanze.txt", "r");
		if(fd==NULL){
		perror("Nessun dato salvato");
		exit(1);
					}
		fd=fopen("lettura configurazione stanze.txt", "s");
		if(fd==NULL){
		perror("Nessun dato salvato");
		exit(2);
					}
				while(1){
				res=fgets(buf,200,fd);
				if(res==NULL)
				break;
				printf("%s", buf);
						}
				while(2){
				res=fgets(buf,200,fd);
				if(res==NULL)
				break;
				printf("%r",buf);	
						}
			//chiusura file
		fclose(fd);
		system("pause");
	}
};
