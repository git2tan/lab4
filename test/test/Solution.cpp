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
	int max = getMaxInt(&e,&a,&c,&d,&f,&g);
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