#include <stdio.h>

int main() {
    FILE *source, *destination;
    char copy;
    source = fopen("bt01.txt", "r");
    if (source == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    destination = fopen("bt06.txt", "w");
    if (destination == NULL) {
        printf("Khong the mo file\n");
        fclose(source);
        return 1;
    }
    while ((copy = fgetc(source)) != EOF) {
        fputc(copy, destination);
    }
    printf("Sao chep thanh cong\n");
    fclose(source);
    fclose(destination);

    return 0;
}
