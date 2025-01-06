#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("args are:\n");
	for (int i = 0; i < argc; i++) {
		printf("%d: %s\n", i, argv[i]);
	}
	
	printf("hello from the main file\n");
	
}
