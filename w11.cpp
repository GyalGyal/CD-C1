#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main()
{
	for (int i = 1; i <= 6; i++)
	{
		printf("%d학년", i);
		for (int j = 1; j <= 7; j++)
		{
			printf(" %d반	",j);
		}
		printf("\n");
	}
	return 0;
}

//==========================================================================

int main()
{
	for (int i = 6; i >=1; i--)
	{
		printf("%d학년", i);
		for (int j = 1; j <= 7; j++)
		{
			printf(" %d반	", j);
		}
		printf("\n");
	}
	return 0;
}

//==========================================================================

int main()
{
	int i = 1;
	do {
		printf(" %d학년 ", i);
		int j = 7;
		do {
			printf(" %d반 ", j);
			j--;
		} while (j >= 1);
			i++;
		printf("\n");
	} while (i <= 6);
}



//==========================================================================

int main()
{
	for (int i = 6; i >= 1; i--)
	{
		printf(" %d학년 ", i);
		int j = 7;
		do {
			printf(" %d반 ", j);
			j--;
		} while (j >= 1);
		printf("\n");
	}
}

//==========================================================================

int main()
{
	int i, j;
	i = 2;
	while (i <= 6)
	{
		printf(" %d학년 ", i);
		j = 7;
		do {
			printf(" %d반 ", j);
			j--;
		} while (j >= 1);
		i = i + 2;
		printf("\n");
	}
	i = 1;
	while (i <= 5)
	{
		printf(" %d학년 ", i);
		j = 1;
		do {
			printf(" %d반 ", j);
			j++;
		} while (j <= 7);
		i = i + 2;
		printf("\n");
	}
}

//==========================================================================

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			printf(" %d ", j);
		}
		printf("\n");
	}
}
	
//==========================================================================

int main()
{
	int i, j;
	for (i = 5; i >= 1; i--) {
		for (j = 1; j <= i; j++) {
			printf(" %d ", j);
		}
		printf("\n");
	}
}

//==========================================================================

int main()
{
	int i, j, res, sum;
	res = 0;
	for (i = 1; i <= 10; i++) {
		sum = 0;
		for (j = 1; j <= i; j++) {
			sum += j;	
		}
		res += sum;
	}
	printf("%d", res);
}

//==========================================================================

int main()
{
	int i, j;



	for (i = 1; i <= 100; i++) {
		printf("%d: ", i);
		for (j = 1; j <= i/2; j++) {
			if (i % j == 0) {
			printf("%d ", j);
			}
			
		}
		printf("\n");
	}
}

//==========================================================================

int main()
{
	int i, j;
	bool flag;
	int sum = 0;

	for (i = 1; i <= 100; i++) {
		flag = false;
		for (j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				flag = true;
			}

		}
		if (flag) sum += i;
	}
	printf("%d", sum+1);
}*/

//==========================================================================

int main()
{
	int i;
	int num;
	int j;
	int cnt;
	cnt = 0;
	int max = 0;

	for (i = 2; i <= 1000; i++)
	{
		cnt = 0;
		for (j = 1; j <= i ; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}
		if(cnt > max)
		{
			max = cnt;
			num = i;
		}
	}
	printf("약수가 가장 많은 수 : %d\n", num);
	printf("약수의 수 : %d\n", max);
	for (i = 1; i <= num; i++)
	{
		if(num%i==0) 
		{
			printf("%d ", i);
		}
	}
}










