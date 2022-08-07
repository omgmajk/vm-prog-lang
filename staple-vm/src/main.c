#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "../include/util.h"
#include "../include/parser.h"
#include "../include/token.h"

// staple compile file.stvm

int main(int argc, char **argv) {

	if(argc < 3) {
		printf("Too few arguments.\n");
		return EXIT_FAILURE;
	}

	// Compile
	if (strcmp(argv[1], "compile") == 0) { // Return value without var
		char *source = read_ascii_file(argv[2]);

		TokenList tokens;
		parser_start(&tokens, source);
		
		free(source); // Free the returned buffer when done
	}
	
	return EXIT_SUCCESS;
}
