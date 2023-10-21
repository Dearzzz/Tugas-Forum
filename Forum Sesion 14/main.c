#include <stdio.h>

int main() {
    FILE *file;
    char isi[100];

    file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Tidak dapat membuka file");
        return 1;
    }

    while (fgets(isi, sizeof(isi), file) != NULL) {
        printf("%s", isi);
    }

    fclose(file);
    return 0;
}