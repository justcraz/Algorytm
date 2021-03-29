#include <stdio.h>
#include <math.h>
int main(void) {
float a, y;
printf("Задайте три числа:\n"); //Введення чисел

printf("\nВведіть число a: ");
scanf("%f", &a);

printf("Введіть число y: ");
scanf("%f", &y);

y=(a*(sqrt(pow(y,2)-2*a))); //Обчислення

printf("Число a = %.f\n", a); //Виведення результатів
printf("Число b = %.f\n", y);

printf("Відповідь: ");
printf("y = %.2f", y);
return 0;
}
