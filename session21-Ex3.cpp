#include <stdio.h>

int main() {
    FILE *file;
    char str[100];
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("Nhap vao mot chuoi bat ky de ghi them: ");
    fgets(str, sizeof(str), stdin);
    fprintf(file, "%s", str);
    fclose(file);
    printf("Chuoi da duoc ghi them thanh cong.\n");
    return 0;
}
