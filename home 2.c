#include <stdio.h>

int main() {
    // Цены на фрукты
    const int price_apple = 1;
    const int price_pear = 2;
    const int price_orange = 3;

    // Определенные значения для понедельника
    int x1 = 10; // яблоки (понедельник)
    int y1 = 5;  // груши (понедельник)
    int z1 = 8;  // апельсины (понедельник)

    // Определенные значения для вторника
    int x2 = 12; // яблоки (вторник)
    int y2 = 7;  // груши (вторник)
    int z2 = 4;  // апельсины (вторник)

    // Вычисление выручки за каждый день
    int sum1 = (x1 * price_apple) + (y1 * price_pear) + (z1 * price_orange);
    int sum2 = (x2 * price_apple) + (y2 * price_pear) + (z2 * price_orange);

    // Вывод результатов
    printf("Выручка за понедельник: %d руб.\n", sum1);
    printf("Выручка за вторник: %d руб.\n", sum2);

    return 0;
}
