#include <stdio.h>

int main()
{
 // Erstellen des character Strings mit Inhalt des Ascii-Art
 // Jede Zeile ist repraesentiert eine Stelle im String
	char ascii_art[] =
	" 	\\\\\\\\\\\\  	\n"
	" 	/     \\ 	\n"
	"       (  o o  )	\n"
	"        \\  L  /		\n"
	"	 \\---/		\n"
	"	  \\_/		\n";


 //Ausgabe des Ascii-Arts mit dem printf-Befehl

	printf("%s", ascii_art);
	return 0;
}	
