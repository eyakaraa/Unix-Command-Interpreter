#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>


int main (int argc, const char * argv[])
{    // OBJECTIFS :    ls > out.txt;
     int out;
	  char command[50]; 
	  char ftxt[50];
	  setbuf(stdout, NULL); 
   
	  printf("Entrez votre commande : ");
	  scanf("%[^\n]",command);
	  printf("Entrez votre fichier txt : ");
	  scanf("%s",ftxt);	
    		strcat(command," < ");
    		strcat(command,ftxt);
printf("%s\n",command);
system(command);
     return 1;
}