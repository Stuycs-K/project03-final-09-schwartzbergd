#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("argc must be 2: you entered argc=%d\n", argc);
		exit(1);
	}
	char *filename = argv[1];
	printf("your filename is: %s\n", filename);

	int file_descriptor = open(filename, O_RDWR | O_CREAT, 0644);
	
	printf("fd is %d\n", file_descriptor);
}
