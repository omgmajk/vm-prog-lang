#include "../include/util.h"

char *read_ascii_file(const char *path) {
	FILE *file = fopen(path, "r");
	if(!file) {
		printf("Could not open file: '%s'\n", path);
		return NULL;
	}

	// Weird way to get total file size, maybe read up on these macros
	fseek(file, 0, SEEK_END); // Seek to the end of the file
	int size = ftell(file); // Get the size of the file
	fseek(file, 0, SEEK_SET); // Seek back to the start of the file

	// Create a buffer
	char *buf = (char *) malloc(sizeof(char) * (size + 1)); // Allocate amount of chars in file + 1

	if(!buf) {
		printf("Could not allocate memory for a file ptr!\n");
		return NULL;
	}

	// Read file
	fread(buf, 1, size, file); // buffer, word size, buffer size, file ptr
	buf[size] = '\0'; // Safety null termination
	fclose(file);

	// Return contents	
	return buf;
}
