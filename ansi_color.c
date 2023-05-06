#include<stdio.h>

int main(){

	char ascii_art[] =
	" 	\\\\\\\\\\\\  	\n"
	" 	/     \\ 	\n"
	"       (  o o  )	\n"
	"        \\  L  /		\n"
	"	 \\---/		\n"
	"	  \\_/		\n";

	printf( "\n \x1b[31;1m %s \x1b[0m\n",ascii_art );

}	
