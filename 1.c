#include <stdio.h>

int main () {
// Объявляем переменную m - это мясяц, а g - это год
    int m,g;
    scanf("%d %d", &m,&g);

// Если номер мясяца равен этим значениям, то выводим 31, т.к. в этих месяцах 31 день
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        printf("31");
// Если номер равен всем остальтным значениям кроме второго месяца, выводим 30
    }else if (m != 2) {
        printf("30");
// Сдесь вычисляем высокосный ли год, и если мы ввели второй месяц, то в высокосном году он равен 29 дням
    }else if ((g % 400 == 0) || (g % 4 == 0 && g % 100 != 0)) {
        printf("29");
// Если год не высокосный, то во втором месяце 28 дней 
    }else {
        printf("28");
    }
   return 0; 
}