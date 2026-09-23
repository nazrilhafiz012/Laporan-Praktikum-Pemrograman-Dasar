#include<stdio.h>

int main() {
    int nilai;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai>=80) {
        printf("Kamu mendapatakan grade A\n");
    } elseif (nilai>=70) {
        printf("Kamu mendapatakan grade B\n");
    } elseif (nilai>=60) {
        printf("Kamu mendapatakan grade C\n");
    } elseif (nilai>=50) {
        printf("Kamu mendapatakan grade D\n");
    } else {
        printf("Kamu mendapatakan grade E\n");
    }

    return 0;
}