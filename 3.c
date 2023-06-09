#include <stdio.h>
#include <string.h>

int main () {
// Создаём строку на 50 символов
    char aray[50];
// Считываем ёё
    scanf("%s", aray);
// Если длина строки больше либо равна 8 и меньше либо равна 14, то запускается цикл который проверяет входят ли символы в промежуток от 33 до 126 
    if(strlen(aray) >= 8 && strlen(aray) <= 14) {
        for (int i = 0; i < strlen(aray); i++) {
            // Если символы не входят в этот промежуток то программа завершается и выводит NO 
            if(aray[i] < '!' || aray[i] > '~') {
                printf("NO");
                return 0;
            }
        }
        
    }
    else {
        printf("NO");
        return 0;
    }
// Создаём 4 переменные для подсчётам присутствия в пароле разных символов
    int big = 0;
    int little = 0;
    int digit = 0;
    int ost = 0;
// Если по всем верхним параметрам пароль подходит то запускаем цикл который будет проверять разнообразие символов
    for (int i = 0; i < strlen(aray); i++) {
// Если это больша буква то big становится 1
        if(aray[i] >= 'A' && aray[i] <= 'Z') {
            big = 1;
// Если это маленькая буква то little становится 1
        }else if(aray[i] >= 'a' && aray[i] <= 'z') {
            little = 1;
// Если это цифра то digit становится 1
        }else if(aray[i] >= '0' && aray[i] <= '9') {
            digit = 1;
// И если это какой то другой символ то ost становится 1
        }else {
            ost = 1;
        }
    }
// Если в пароле присутствуют хотябы 3 разных вида символа, то выводим YES
    if(big + little + digit + ost >= 3) {
        printf("YES");
// Инвче завершаем программу и выводим NO
    }else {
        printf("NO");
    }
    return 0;
}