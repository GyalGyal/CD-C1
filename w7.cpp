﻿//=======================
//|                     |
//|    2025.01.18       |
//|                     |
//=======================
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//===========================================================================================================================================================================
//1번
/*void main()
{
	int a;
	scanf("%d", &a);

	if (a < 0)
	{
		printf("음수");
	}
	else if (a > 0)
	{
		printf("양수");
	}
	else
	{
		printf("0");
	}

}*/

//========================================================================================================================================================================== =
//2번
/*void main()
{
	int a;
	printf("정수를 입력해 주시오");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("짝수");
	}
	else
	{
		printf("홀수");
	}
}*/
//===========================================================================================================================================================================
//3번
/*void main()
{
	int a;
	printf("정수를 입력해 주시오");
	scanf("%d", &a);

	if (a % 3 == 0)
	{
		printf("3의 배수다");
	}
	else
	{
		printf("3의 배수가 아니다");
	}
}*/
//===========================================================================================================================================================================
//4번
/*void main()
{
	int a, b;

	printf(" 두 정수를 입력하시오");
	scanf("%d %d", &a, &b);

	if (a < b)
	{
		if (b % a == 0)
		{
			printf("나누어 떨어짐");
		}
		else
		{
			printf("나누어 떨어지지 않음");
		}
	}

	if (b < a)
	{
		if (a % b == 0)
		{
			printf("나누어 떨어짐");
		}
		else
		{
			printf("나누어 떨어지지 않음");
		}
	}
	if (a == b)
	{
		printf("나누어 떨어짐");
	}
}*/
//===========================================================================================================================================================================
//6번
/*void main()
{
	float max, a, b, c, d, e;
	
	max = 0.0f;
	
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

	if (max < a)
	{
		max = a;
	}
	if (max < b)
	{
		max = b;
	}
	if (max < c)
	{
		max = c;
	}
	if (max < d)
	{
		max = d;
	}
	if (max < e)
	{
		max = e;
	}

	printf("%0.3f", max);
}*/
//===========================================================================================================================================================================
//3)

/*void main()
{
	int max, min, a, b, c;
	printf("세 정수를 입력해 주시오");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b) max = b;
	else max = a;
	if (a < b) min = a;
	else min = b;
	

	if (max < c) max = c;
	if (min > c) min = c;

	printf("가장 큰 수 : %d\n", max);
	printf("가장 작은 수 : %d\n", min);
}*/











