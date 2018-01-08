#include <stdio.h>

int main (int argc, char *argv[]) {
    if (argc != 3) {
        printf("Wrong arguments");
        return -1;
    }

    FILE *source = fopen(*++argv, "r");
    if (source == NULL) {
        printf("Source file is invalid");
        return -1;
    }

    FILE *destination = fopen(*++argv, "w+");
    if (destination == NULL) {
        printf("Destination file is invalid");
        return -1;
    }

    int c;
    while( ( c = fgetc(source) ) != EOF )
        fputc(c, destination);

    //fputc(EOF, destination);

    fclose(destination);
    fclose(source);

    return 0;
}