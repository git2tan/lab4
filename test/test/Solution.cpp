//–азработать функцию с переменным количеством параметров.
//ƒл€ извлечени€ параметров из списка использовать технологию программировани€ 
//областей пам€ти переменного формата
//2. ѕоследовательность целых положительных переменных, ограниченна€ переменной 
//со значением - 1. ‘ункци€ возвращает максимальную из них.

#include <stdio.h>
#include <Windows.h>

int getMaxInt(int *p, ...);

void main()
{
	int a, b, c, d, e, f, g;
	a = 1;
	b = 3;
	c = 5;
	d = 1000;
	e = 1001;
	f = -1;
	g = 900;
	int max = getMaxInt(&a,&b,&c,&d,&g,&f);
	printf("Maximum is:%d\n", max);
	system("pause");
}

int getMaxInt(int *p,...)
{
	int **q = &p;
	int max = -1;
	int i = 0;
	while (**q != -1)
	{
		printf("%dst argument is = %d\n",i,**q);
		max = (max > **q) ? max : **q;
		q++;
		i++;
		
	}
	return max;
}