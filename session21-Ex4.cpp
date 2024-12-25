#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    if (fgets(line, sizeof(line), file) != NULL) {
        printf("Dong dau tien trong file la: %s\n", line);
    } else {
        printf("File loi\n");
    }
    fclose(file);
    return 0;
}
