#include <stdio.h>
#include <stdlib.h>

void split_file(FILE *file, size_t part_size) {
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    size_t num_parts = file_size / part_size;
    if (file_size % part_size != 0) {
        num_parts++;
    }

    char *buffer = malloc(part_size);
    if (buffer == NULL) {
        perror("Échec de l'allocation de mémoire");
        return;
    }

    for (size_t i = 0; i < num_parts; i++) {
        char part_filename[50];
        snprintf(part_filename, sizeof(part_filename), "part_%zu", i + 1);
        FILE *part_file = fopen(part_filename, "wb");

        if (part_file == NULL) {
            perror("Impossible d'ouvrir le fichier");
            free(buffer);
            return;
        }

        size_t bytes_to_read = (i == num_parts - 1) ? file_size % part_size : part_size;
        fread(buffer, 1, bytes_to_read, file);
        fwrite(buffer, 1, bytes_to_read, part_file);

        fclose(part_file);
    }

    free(buffer);
}

int main() {
    char file_path[256];
    printf(" chemin du fichier: ");
    scanf("%s", file_path);

    FILE *file = fopen(file_path, "rb");
    if (file == NULL) {
        perror("Impossible d'ouvrir le fichier");
        return 1;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    printf("La taille du fichier est : %ld octets\n", file_size);

    size_t part_size;
    printf("entrer la taille des parties (en octets): ");
    scanf("%zu", &part_size);

    split_file(file, part_size);

    fclose(file);
    return 0;
}

