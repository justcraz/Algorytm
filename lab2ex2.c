#include<stdio.h>//Підключення бібліотек
#include<math.h>

int main(){

	const int a=1;//Введення даних
	const int b=15;
	const int c=7;
	float y;

	 y=((float)(2*a+1+c)/(float)(b))-(float)(3*b+c/a+b); //Обчислення

  printf("Відповідь: %.2f ",y);//Вивід
	return 0;

}
