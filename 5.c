#include <stdio.h>

int main () {
// Создаём переменные которые будут считать сумму чисел, количество повторений и за вводимые числа
    float symmator = 0;
    float a = 0;
    float vvod = 0;
    do
    {
// Задаём числа
        scanf("%f", &vvod);
// Ищем сумму чисел
        symmator += vvod;
// ищем количество повторений
        a += 1;
    } while (vvod != 0);
// Выводим среднее этих значений
    printf("%f", (symmator / (a-1)));
    return 0;
}