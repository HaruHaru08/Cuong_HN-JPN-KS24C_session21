#include <stdio.h>

int main() {
    FILE *file;
    int num_lines;
    char line[100];
    file = fopen("bt05.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("Nhap so dong can ghi vao file: ");
    scanf("%d", &num_lines);
    getchar();
    for (int i = 0; i < num_lines; i++) {
        printf("Nhap dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt05.txt de doc!\n");
        return 1;
    }
    printf("\nNoi dung cua file la:\n");
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    fclose(file);
    return 0;
}
