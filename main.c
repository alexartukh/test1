#include<stdio.h>

int main(int argc, char** argv) {
    if (argc != 3) {
	printf("2 params required, but %d present\n", (argc - 1) );
	return 1;
    }

    printf("%s\n", argv[1]);
    printf("%s\n", argv[2]);

    int rows = atoi(argv[1]);
    int cols = atoi(argv[2]);

    for (int i = 0; i < rows; i++) {
	for (int j = 0; j < cols; j++) {
	    printf("+");
	}
	printf("\n");
    }

    return 0;
}