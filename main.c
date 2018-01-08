#include <stdio.h>

int main (int argc, char *argv[]) {
    int j = 0;

    if (argc != 3) {
        printf("");
        return 0;
    }


    FILE *fp = fopen(*argv, "r");
    if (fp != NULL) {
        if (i==2) {
            FILE *file = fopen(*argv, "r+");
            fprintf(file, "%d", 1); // regardless of what's in the file, i want to clear it and put 1 in there
            // legacy code somewhere else in the code base. can't change.
            rewind(file);
            fprintf(file, "%d", 2);
            fflush(file);
        }

        /*
         int c;
        int filechars = 0;
        int filelines = 1;
        while ((c = fgetc(fp)) != EOF) {
            char cc = (char) c;
            if (cc == '\n'){
                filelines++;
            }

            filechars++;
            j++;
         }   */

        printf("%s: %d chars, %d lines\n", *argv++, filechars, filelines);
        fclose(fp);
    }

    return 0;
}