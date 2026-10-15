#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int A, B, C;
    int res;
    printf("Введите номера трех игроков (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);
    res = ((A + B + C) % 3 == 0);
    printf("Результат: %d (1 - счастливая, 0 - не счастливая)\n", res);
    return 0;
}
