#include <stdio.h>
#include <math.h>
int main()
{
int a,b;
float a1,a2,a3;
printf("Задайте два числа:\n"); //Введення чисел

printf("\nВведіть число a: ");
scanf("%d", &a);

printf("Введіть число b: ");
scanf("%d", &b);

a1=pow(a+b,3);
a2=b/a;
a3=a*b;

printf("Сума чисел у кубі=%.f\n",a1);
printf("Результат ділення другого числа на перше=%.f\n",a2);
printf("Добуток чисел=%.f\n",a3);
return 0;
}
