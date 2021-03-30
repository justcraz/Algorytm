#include <stdio.h>
#include <math.h>
int main(void) {
float a, y, x;
printf("Задайте два числа:\n"); //Введення чисел

printf("\nВведіть число a: ");
scanf("%f", &a);

printf("Введіть число y: ");
scanf("%f", &y);
x=(a*(sqrt(pow(y,2)-2*a))); //Обчислення
  
printf("Число a = %.f\n", a); //Виведення результатів
printf("Число y = %.f\n", y);

printf("x = %.2f", x);
return 0;
}
