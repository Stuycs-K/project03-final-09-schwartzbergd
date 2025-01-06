#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("argc must be 2: you entered argc=%d\n", argc);
		exit(1);
	}

	struct termios old;
        struct termios new;
        tcgetattr(0, &old);
        new = old;
        new.c_lflag &= ~(ICANON | ECHO);
        tcsetattr(0, TCSANOW, &new);

	char *filename = argv[1];
	printf("your filename is: %s\n", filename);

	int file_descriptor = open(filename, O_RDWR | O_CREAT, 0644);
	
	printf("fd is %d\n", file_descriptor);
	
	printf("waiting for char input\n");
	char c = getchar();
	printf("char c is %c\n", c);

	tcsetattr(0, TCSANOW, &old);
}
