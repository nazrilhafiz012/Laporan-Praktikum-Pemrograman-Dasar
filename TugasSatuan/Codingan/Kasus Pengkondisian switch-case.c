#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai < 0 || nilai > 100) {
        printf("Nilai tidak valid!\n");
        return 1;
    }
    
    switch (nilai / 10) {
        case 10:
        case 9:
        case 8:
            printf("Kamu Mendapatkan Grade A\n");
            break;
        case 7:
            printf("Kamu Mendapatkan Grade B\n");
            break;
        case 6:
            printf("Kamu Mendapatkan Grade C\n");
            break;
        case 5:
            printf("Kamu Mendapatkan Grade D\n");
            break;
        default:
            printf("Kamu Mendapatkan Grade E\n");
            break;
    }

    return 0;
}