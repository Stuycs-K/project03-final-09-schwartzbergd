#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

char error_message[100];

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("argc must be 2: you entered argc=%d\n", argc);
		exit(1);
	}
	printf("your filename is: %s\n", argv[1]);
	
}
