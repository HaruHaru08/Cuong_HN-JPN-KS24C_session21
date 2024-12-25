#include <stdio.h>

int main() {
    FILE *file;
    char chuoi;
    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    chuoi = fgetc(file);
    if (chuoi != EOF) {
        printf("Ky tu dau tien trong file la: %c\n", chuoi);
    } else {
        printf("File rong!\n");
    }
    fclose(file);
    return 0;
}

