#include <stdio.h>

	
int main()
{
	int a, b;
	float c, d, bmi;

	scanf_s("%d %d", &a, &b);

	c = (a + 10) / 100.000;
	d = b - 5;

	bmi = d / (c * c);

	printf("BMI = %f", bmi);



	return 0;





}