#include <stdio.h>
#include <math.h>

int main()
{
	int a, b;
	float c;
	scanf("%f", &c);
	a = (int)c;
	c -= (float)a;
	printf("%f\n",c);
	
	if (c < 0)
	{
		for (int i = 1; i < 6; i++)
			c *= 10;
	}
	else
	{
		for (int i = 1; i < 7; i++)
			c *= 10;
	}
	if (c >= 0)
	{
		c = c + 0.5;
		c = floor(c);
	}
	b = (int)c;
	while (b % 10 == 0)
	{
		if (b == 0)
			break;
		b /= 10;
	}
	if (b < 0)
		b *= -1;
	printf("%d\n%d", a, b);
	return 0;
}