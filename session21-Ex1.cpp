#include <stdio.h>

int main() {
    FILE *file;
    char str[256];
    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Chuoi da duoc ghi thanh cong.\n");
    return 0;
}

