#include <stdio.h>
#include <string.h>

int main () {
// Создаём переменную
    int vvod = 0;
// Вводим число
    scanf("%d", &vvod);
// Создаём массив
    char aray[50];
// Если число отрицательное то к выводу добовляем -
    if(vvod < 0) {
        printf("-");
        vvod = vvod * (-1);
    }
// Создаём цикл
    for (int i = 0; vvod >= 1; i++) {
// Если число нацело делится на 2 то в массив добавляем 0
        if(vvod % 2 == 0) {
            aray[i] = '0';
// Если же не делится то добавляем 1
        }else {
            aray[i] = '1';
        }
// Делим число на 2
        vvod /= 2;
    }
// Создаём цикл для вывода массива с конца в начало 
    for (int i = strlen(aray); i >= 0; i--) {
        printf("%c", aray[i]);
    }
    return 0;
}