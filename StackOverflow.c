Simple buffer/stack overflow

#include <string.h>
#include <stdlib.h>

//Copytobuffer function, recevies a message from the main function
void copyToBuffer(char* text){
	
	// Array of letters/words called buffer (Buffer array) - Where the text is copied in to
	//What will happen when more data is entered 
	
	char buffer[15];    //Buffer limit to 15 letters/characters
	
	//Copy the text in to the buffer array
	strcpy(buffer, text);
}

int main(int argc, char* argv[1]) //The user will control the input for the program
{
//local integer variable
	int var_int = 1;
	
//calls the copytobbuffer function
	copyToBuffer(argv[1]);
	
	return 0;
}
