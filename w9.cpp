﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>







int main()
{
	int i;

	i = 1;
	while (i <= 10) {
		printf("%d ", i);
		i++;
	}
	return 0;
}

//============================================================================================================

int main()
{
	int i;
	i = 1;
	for (; i <= 10;)
	{
		printf("%d ",i);
		i++;
	}
	return 0;
}

//============================================================================================================

int main()
{
	int n;

	n = -8;
	while (n <= 1)
	{
		printf("%d ", n);
		n++;
	}
	return 0;
}

//============================================================================================================

int main()
{
	int n;

	n = 12;
	while (n <= 20);
	{
		printf("%d ", n);
		n++;
	}
	return 0;
}

//============================================================================================================

int main()
{
	int n, cnt, sum;

	n = 10;
	cnt = 0;
	sum = 0;
	while (n <= 17)
	{
		printf("%d ", n);
		cnt++;
		sum += n;
		n++;
	}
	printf("반복 횟수 : %d\n", cnt);
	printf(" 10부터 17까지의 합 : %d", sum);
	return 0;
}

//============================================================================================================

int main()
{
	int i;
	i = 11;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);

	return 0;
}

//============================================================================================================

int main()
{
	int i = 1;
	int sum;
	sum = 0;
	while (1)
	{
		printf("%d\n", i);
		sum += i;
		i++;
		if (sum >= 10000)
		{
			break;
		}
	}
}

//============================================================================================================

int main()
{
	int i = 0;
	int sum;
	sum = 0;
	while (1)
	{
		
		i++;
		if (i % 2 == 0)
		{
			continue;
		}
		printf("%d ", i);

		sum += i;
		
		if (sum > 10000)
		{
			break;
		}
	}
}

//============================================================================================================

int main()
{
	int n;
	int i = 1;
	scanf("%d", &n);

	while (0 < n) {
		n--;
		printf("%d ", i);
		i *=-1;
	}
}

//============================================================================================================

int main()
{
	int n;
	int i = 0;
	scanf("%d", &n);
	while (i < n) {
		i++;
		printf("%d ",i%2);
		
	}
}

//============================================================================================================

int main()
{
	int n, i;
	
	scanf("%d", &n);
		if (n > 30)
	{
		printf("30 이하의 자연수를 써주시오");
	}
	
	i = 1;
	while (i < n)
	{
		i++;
		printf("%d ", i);
		if (i == n)
		{
			printf("\n\n");
			i = 0;
		}
		
	}
}

//============================================================================================================

int main()
{
	int n,i,j;
	scanf("%d", &n);
	i = 1;
	j = 1;
	while (i <= n)
	{
		printf("%d ", j);
		if (j == i)
		{
			printf("\n");
			

		
		j = 0;
		i +=1;}
		j++;
	}
}

//============================================================================================================

int main()
{
	int n;
	scanf("%d", &n);
	int i;
	i = (n % 10)*100 + ((n / 10) % 10) * 10 + n / 100;

	printf("%d", n + i);
	
}

//============================================================================================================\





























